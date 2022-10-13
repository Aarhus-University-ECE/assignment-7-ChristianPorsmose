#include "stack.h"
#include "stdlib.h"


void initialize(stack* s){
  s->head = NULL; //initalize head as 0
}

void push(int x, stack* s){
  node* temp = malloc(sizeof(node)); //allocate memmory on heap and creates a pointer to it. 
	temp->data = x;
	temp->next = s->head; //make temp-next = NULL 
	s->head = temp; //make head point to the new node.
}

int pop(stack* s){
  node* temp = s->head; //create node pointer that points to first element
	s->head = temp->next; //make head point to the temp next node i.e the 2nd node
  int hold = temp->data; 
	free(temp);
  return hold;
}

bool empty(stack* s)
{
  if (s->head != NULL) //if head points to a node the stack is not empty. 
    return false;
}

bool full(stack* s) {
    //the stack is never full
  return false;
}
