#include <stdio.h>
#include <math.h>
void main(){
    int n,base=0,sum=0,temp,digit;
    printf("Enter the binary number: ");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        digit=n%10;
        sum=sum+(digit*pow(2,base));
        n/=10;
        base++;
    }
    printf("The number %d in decimal is: %d",temp,sum);
}