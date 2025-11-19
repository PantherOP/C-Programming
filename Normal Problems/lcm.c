#include <stdio.h>
void main()
{
    int a, b, lcm, temp=1;
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);
    lcm = (a > b) ? a : b;
    while(temp){
        if(lcm%a==0 && lcm%b==0){
            printf("The LCM is: %d",lcm);
            temp=0;
        }
        lcm++;
    }
   
}