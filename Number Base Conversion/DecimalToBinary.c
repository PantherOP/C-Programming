#include <stdio.h>
void main(){
    int arr[32],n,temp;
    printf("Enter the decimal number: ");
    scanf("%d",&n);
    temp=n;
    int i=0;
    while(n!=0){
        arr[i]=n%2;
        n/=2;
        i++;
    }
    printf("The number %d in binary is: ",temp);
    for(int j=i-1;j>=0;j--){
        printf("%d",arr[j]);
    }
}