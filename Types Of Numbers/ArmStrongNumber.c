#include <stdio.h>
#include <math.h>
int armstrong(int n){
    int temp, count=0,r,sum=0;
    temp=n;

    while(temp!=0){
        temp/=10;
        count++;
    }

    temp=n;
    while(temp!=0){
        r=temp%10;
        sum=sum+pow(r,count);
        temp/=10;
    }
    return sum;
}

void main(){
    int n,arm;
    printf("Enter the number: ");
    scanf("%d" , &n);
    arm=armstrong(n);
    if(n==arm){
        printf("\nIt is an Armstrong Number\n");
        printf("Given number: %d\nResults after calculation: %d",n,arm);
  }
  else{
        printf("\nIt is not an Armstrong Number\n");
        printf("Given number: %d\nResults after calculation: %d",n,arm);
  }
}