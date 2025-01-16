#include<stdio.h>

int main()
{

    // 1 = Even
    // 2 = Odd
    int num;
    printf("Enter a Number : ");
    scanf("%d", &num);
    
    printf("%d\n", num % 2 == 0);
    return 0;
}
