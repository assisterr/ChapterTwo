#include<stdio.h>

int main(){
  int x;
  printf("Enter your favourite Number : \n");
  scanf("%d", &x);
  
  printf("%d", (x > 9) && (x < 100));
}
