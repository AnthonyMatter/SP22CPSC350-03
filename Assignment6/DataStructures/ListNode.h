#ifndef LISTNODE_H
#define LISTNODE_H

// list node class

template <typename E>
class ListNode{
public:
  E element; // value for this node
  ListNode* next; // pointer to the next node
  ListNode* prev;

  // sets the value of element and the next pointer
  ListNode(E elemVal, ListNode* nextVal = nullptr){ // default value for nextVal is null
    element = elemVal;
    next = nextVal;
  }
  // sets the value of the next pointer
  ListNode(ListNode* nextVal = nullptr){
    next = nextVal;
  }

};

#endif