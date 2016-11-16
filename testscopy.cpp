#include <iostream>
#include <string>

using namespace std;

class Book
{
public:
  
  virtual ~Book() {}
  
  virtual string getDescription()
  { return "Book"; }
};

class Paperbook : public Book
{
public:
  
  virtual ~Paperbook() {}
  
  virtual string getDescription()
  { return "Paperbook " + Book::getDescription(); }
};

class Romance : public Paperbook
{
public:
  
  virtual ~Romance() {}
  
  virtual string getDescription()
  { return "Romance " + Paperbook::getDescription(); }
};

class Technical : public Book
{
public:
  
  virtual ~Technical() {}
  
  virtual string getDescription()
  { return "Technical " + Book::getDescription(); }
};

int main()
{
  Romance romance;
  
  cout << romance.getDescription() << endl;
}
