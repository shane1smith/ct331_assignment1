#include <stdio.h>
#include "linkedList.h"
#include "tests.h"

int main(int arg, char* argc[]){
  //Declare 3 listElement pointers: head, middle and tail.
  struct listElement *head,*middle,*tail = NULL;
  
  size_t size = sizeof(char);
  //Create elements
  head = createEl('a',size);
  middle = createEl('b',size);
  tail = createEl('c',size);
  //Link the elements in the list together with pointers
  //to make a linked list
  head->next = middle;
  middle->next = tail;
  tail->next = NULL;
  
  //Use traverse function to see that the elements were all created
  traverse(&head);
  
  //Test out the length function
  int length = length(&head);
  printf("The length of the list is %d",length);
  
  //Test out push function
  struct listElement* e = createEl('d',size);
  push(&e, 'd', size);
  
  //Test out pop function
  pop(&e);
  
  
  
  
  
  
  return 0;
}
