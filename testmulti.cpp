#include <iostream>

using namespace std;

class Animal
{
public:
  virtual ~Animal() {}
  
  virtual void eat() = 0;
};

class Dog : public Animal
{
public:
  
  virtual void bark()
  { cout << "Woof!" << endl; }
  
  virtual void eat()
  { cout << "The dog eats." << endl; }
};

class Bird : public Animal
{
public:
  
  virtual void chirp()
  { cout << "Chirp!" << endl; }
  
  virtual void eat()
  { cout << "The bird eats." << endl; }
};

class DogBird : public Dog, public Bird
{
public:
  virtual void eat()
  { Dog::eat(); }
};

int main()
{
  DogBird confusedAnimal;
  
  confusedAnimal.bark();
  confusedAnimal.chirp();
  
  confusedAnimal.eat();
  
  return 0;
}
