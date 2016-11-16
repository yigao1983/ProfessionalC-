#include <iostream>

using namespace std;

class Dog
{
public:
  virtual void bark()
  { cout << "Woof!" << endl; }
  
  virtual void eat()
  { cout << "The dog eats." << endl; }
};

class Bird
{
public:
  virtual void chirp()
  { cout << "Chirp!" << endl; }
  
  virtual void eat()
  { cout << "The bird eats." << endl; }
};

class DogBird : public Dog, public Bird
{};

int main()
{
  DogBird confusedAnimal;
  
  confusedAnimal.bark();
  confusedAnimal.chirp();
  
  // confusedAnimal.eat(); // This will not compile
  
  return 0;
}
