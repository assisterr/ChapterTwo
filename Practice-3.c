#include<stdio.h>

int main()
{
    int isSunday = 1;
    int isSnowing = 1;
    int isRain= 0;
    
    printf("%d\n", isSunday && isSnowing);
    printf("%d\n", isRain && isSnowing);
    return 0;
}
