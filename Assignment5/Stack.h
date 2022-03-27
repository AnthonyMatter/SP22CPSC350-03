
/*
File Name: Stack.h
This file sets the template for what functions need to be used in all other files that inherit from this file.
*/

// stack abstract class
template <typename E>
class Stack{
public:
  Stack() {} //default constructor
  virtual ~Stack() {} // base destructor

  // reinitialize the Stack
  virtual void clear() = 0;

  //push an element onto the top of the stack.
  // @param item: element being pushed.
  virtual void push(E item) = 0;

  //remove the element from the top of the Stack
  //return: the element at the top
  virtual E pop() = 0;

  //return a copy of the top element
  virtual E topValue() = 0;

  virtual bool FullList() = 0;

  // return the number of elements in the stack.
  virtual int length() = 0;

  virtual E peek() = 0;

  virtual bool isEmpty() = 0;



};
