 #include<stdio.h>
#include<malloc.h>
typedef struct _node{
 int key;
 struct _node *next;
} node;
node *head, *tail;
void init_stack(void){
 head = (node*)malloc(sizeof(node));
 tail   = (node*)malloc(sizeof(node));
 head->next = tail;
 tail->next = tail;
}
void clear_stack(void){
 node *t, *s;
 t = head->next;  //first node link
 while(t != tail){  //last node loop
  s = t;  //link node for delete
  t = t->next; //t go next node
  free(s);  //linked node delete
 }
 head->next = tail; //empty stack
}
int push(int k){
 node *t;
 //if memory is not enough, error
 if((t = (node*)malloc(sizeof(node))) == NULL){
  printf("\n 메모리 부족...");
  return -1;
 }
 t->key = k;
 t->next = head->next; //t insert to head
 head->next = t;
 return k;
}
int pop(void){
 node *t;
 int i;
 if(head->next == tail){  //test stack(empty?)
  printf("\n Stack underflow");
  return -1;
 }
 t = head->next;
 i = t->key;
 head->next = t->next; //head->next exclude node
 free(t);  //delete t
 return i;  //return deleted data
}
void print_stack(void){
 node *t;
 t = head->next;
 printf("\n linked stack : ");
 while(t != tail){
  printf("%-3d", t->key);
  t = t->next;
 }
 printf("\n");
}
void main(void){
 int i;
 init_stack();
 printf("\nPush 3, 4, 5, 6, 7, 8");
 push(3);
 push(4);
 push(5);
 push(6);
 push(7);
 push(8);
 print_stack();
 printf("\nPop one execute ");
 i = pop();
 print_stack();
 printf(" pop : %d\n", i);
 printf("\npush 1, 2, 3, 4, 5");
 push(1);
 push(2);
 push(3);
 push(4);
 push(5);
 print_stack();
 printf("\nnow push to stack 6");
 push(6);  
 print_stack();
 printf("\nreset stack and print ");
 clear_stack();  //스택을 모두 비운다.
 print_stack();
 printf("\nempty stack pop");
 i = pop();
 print_stack();
 printf(" pop : %d\n", i);
}
