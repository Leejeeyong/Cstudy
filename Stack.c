#include <stdio.h>
#define MAX 10

int stack[MAX];
int top;

void reset_Stack(){
  top=-1;
}

int Pop(void){
  if(top<0){
    printf{"\n Stack underflow!!"};
  }
  else{printf("\nComplete");}

  return stack[top--];
}

int Push(int a){
  if(top>=MAX-1){
    printf{"\n Stack overflow!!"};
    return -1;
  }
  else{printf("\nComplete");}

  stack[++top]=a;
  return a;
}

void print_Stack(){
  int i;
  printf("\n Print Stack: ");
  for(i=top;t>=0;i--){
    printf("%-3d",stack[i]);
  }
}


int main(void){
  int i,j; //i is input num, j is  Stack's input data

  reset_Stack();
  
  while(1){
    printf("1.PUSH \n2.POP \n3.PRINT STACK \n4.RESET \n0.EXIT");
    scanf("%d",&i);
    if(i==1){
      printf("Input data: ");
      scanf("%d",&j);
      Push(j);
    }
    else if(i==2){
      Pop();
    }
    else if(i==3){
      print_Stack()
    }
    else if(i==4){
      reset_Stack();
    }
    else if(i==0){
      break;
    }
    else{
      printf{"\nError"};
    }
  }
  
}
