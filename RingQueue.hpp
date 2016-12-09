#ifndef RINGQUEUE_HPP
#define RINGQUEUE_HPP

#include <stdexcept>

template<class T, int N>
class RingQueue
{
public:
  
  class Node
  {
  public:
    Node(const T &src) : item(src), next(NULL) {}
  protected:
    T item;
    Node *next;
    friend class RingQueue<T, N>;
  };
  
  RingQueue() : count(0), first(NULL), last(NULL)
  {}
  
  virtual ~RingQueue()
  {
    while (!isEmpty()) {
      pop_front();
    }
  }
  
  int size() const
  { return count; }
  
  bool isEmpty()
  { return count == 0; }
  
  void push_back(const T &src)
  {
    Node *oldlast = last;
    
    last = new Node(src);
    
    if (count < N) {
      ++count;
      if (!first) {
        first = last;
        return;
      }
    } else {
      Node *oldfirst = first;
      first = first->next;
      delete oldfirst;
    }
    
    oldlast->next = last;
  }
  
  T pop_front()
  {
    Node *oldfirst = first;
    
    if (count > 0) {
      T item = oldfirst->item;
      first = first->next;
      --count;
      delete oldfirst;
      return item;
    }
    
    throw std::underflow_error("RingQueue empty\n");
  }
  
protected:
  
  int count;
  Node *first, *last;
  
};

#endif
