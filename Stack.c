#include <stdio.h>

int a[10];
int top =-1;
void push(int d){
  if(top>9){
    printf("Overflow");
  }
  else{
    a[top++] = d;
    
  }
}
void pop(){
  if(top<0){
    printf("Underflow");
    
  }
  else{
    top--;
  }
  printf("%d\n",a[top]);
}

void display(){
  int t = top;
  for(int i=t; i>=0;i--){
    printf("%d",a[i]);
  }
}
void max(){
  int max = a[top];
  for (int i=top-1;i>0;i--){
    if(a[i]>max){
      max=a[i];
    }
  }
  printf("%d\n",max);
}
void min(){
  int min = a[top];
  for (int i=top-1;i>=0;i--){
    if(a[i]<min){
      min = a[i];
    }
  }
  printf("%d\n",min);
}
int main(){
push(10);
push(20);
push(30);
push(50);
pop();
display();
max();
min();

}
