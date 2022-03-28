/*
File Name: AStack.h
This file essentially implements all the functions involved with stacks utilizing arrays.
*/
#include "Stack.h"
#include <iostream>
#include <stdexcept>

using namespace std;

template <typename E>
class AStack: public Stack<E>{
public:
  int top; //The top value of the array stack
  E next; //The element next to the top value in the array stack
  int maxSize; //The fixed size of the array stack
  int StackSize; //The amount of elements in the stack
  E* StackArray; //The array of the stack
  AStack(int size);
  AStack();
  ~AStack();
  void clear();
  void push(E item);
  E pop();
  E topValue();
  bool FullList();
  E peek();
  int length();
  bool isEmpty();
};

template <typename E>
AStack<E>::AStack(){
  StackArray = new E[75];
  top = -1;
}

template <typename E>
AStack<E>::AStack(int size){
  maxSize = size;
  StackSize = 0;
  StackArray = new E[size];
  top = -1;
}

template <typename E>
AStack<E>::~AStack(){
  delete[] StackArray;
}

/*
Template for Clear:
This deletes the old stack and creates a new stack with the same fixed size.
*/
template <typename E>
void AStack<E>::clear(){
  delete[] StackArray;
  StackSize = 0;
  top = 0;
  StackArray = new E[maxSize];
}

/*
Template for Push:
This pushes the value to the top of the stack, if the size of the stack is the same
as the fixed size of the array, then the size of the array will double.
*/
template <typename E>
void AStack<E>::push(E item){

  if(FullList()){
    E* StackArray2 = new E[maxSize * 2];
    cout << "test" << endl;
    for(int i = 0; i <= top; i++)
        {
            StackArray2[i] = StackArray[i];
        }
        delete[] StackArray;
        StackArray = StackArray2;
  }

for(int i = 0; i < StackSize - 1; i++){
   StackArray[i+1] = StackArray[i];
 }
 StackArray[0] = item;
 top = item;
 StackSize++;
 StackArray[top] = item;
 StackSize++;
}

/*
Template for Peek:
This returns the value at the top of the stack without removing the value from the
stack.
*/
template <typename E>
E AStack<E>::peek(){
  if(StackSize == 0){
    E value = E();
    return value;
  }
  E item = top;
  return StackArray[item];
}

/*
Template for Pop:
This returns the value at the top of the stack and also removes the value from the
stack.
*/
template <typename E>
E AStack<E>::pop(){
  if(isEmpty()){
    throw std::invalid_argument("Not able to pop with no elements");
  }

  return StackArray[top--];
}

/*
Template for topValue:
This returns the value at the top of the stack.
*/
template <typename E>
E AStack<E>::topValue(){
  if(StackSize == 0){
    E value = E();
    return value;
  }
  top = StackArray[0];
  return StackArray[top];
}

/*
Template for length:
This returns length of the stack.
*/
template <typename E>
int AStack<E>::length(){
  return StackSize;
}

/*
Template for FullList:
This checks if the stack is full, if full then return true, else then return false.
*/
template <typename E>
bool AStack<E>::FullList(){
  if(top == (maxSize - 1)){
    return true;
  }
  else{
    return false;
  }
}

/*
Template for isEmpty:
This checks if the stack is full, if full then return true, else then return false.
*/
template <typename E>
bool AStack<E>::isEmpty(){
  if(length() == 0){
    return true;
  }
  else{
    return false;
  }
}
