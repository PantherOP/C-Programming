#include<stdio.h>
int reverse(int n){
    int r,num=0,x=0;

    while(n!=0){
        r=n%10;
        num=(num*10)+r;
        n/=10;
    }

    return num;
}

void main(){
    int n,result;
    printf("Enter the number: ");
    scanf("%d",&n);
    result=reverse(n);

    if(n==result){
        printf("\nIt is a palindrome number.\n");
        printf("Reverse of the number is: %d\n",result);
    }
    else{
        printf("\nIt is not a palindrome number.\n");
        printf("Reverse of the number is: %d\n",result);
    }
}