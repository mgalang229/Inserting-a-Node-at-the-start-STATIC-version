#include <iostream>
using namespace std;

struct Node{
  int data;
  Node *next;
} *head;
int main(){

  Node *p, *temp, *ptr, *currNode, *prevNode, *newNode;
  p = new Node;
  p -> data = 2;
  p -> next = NULL;

  temp = p;
  head = p;

  p = new Node;
  p -> data = 5;
  p -> next = NULL;
  temp -> next = p;
  temp = temp -> next;

  p = new Node;
  p -> data = 8;
  p -> next = NULL;
  temp -> next = p;
  temp = temp -> next;

  prevNode = head;
  ptr = new Node;
  ptr -> data = 6;
  ptr -> next = NULL;
  currNode = head -> next;
  while(currNode -> data < ptr -> data){
    prevNode = currNode;
    currNode = currNode -> next;
  }

  ptr -> next = currNode;
  prevNode -> next = ptr;

  newNode = new Node;
  newNode -> data = 105;
  newNode -> next = NULL;
  if(head == NULL){
    newNode -> next = NULL;
  } else{
    newNode -> next = head;
  }
  head = newNode;

  p = head;
  while(p != NULL){
    cout << p -> data << " ";
    p = p -> next;
  }

  return 0;
}