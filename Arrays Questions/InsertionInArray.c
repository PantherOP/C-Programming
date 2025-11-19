#include <stdio.h>
void main(){
   int n,pos,value;
   printf("How many digits you want to enter? : ");
   scanf("%d",&n);
   int arr[n];
   
   printf("Enter those %d digits: ",n);
   for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
   printf("Enter the position: ");
   scanf("%d",&pos);
    printf("Enter the value: ");
    scanf("%d",&value);
    
    for(int j=n-1;j>=pos-1;j--){
        arr[j+1]=arr[j];
    }
    arr[pos-1]=value;
    n++;
    printf("The new array is: ");
    for(int k=0;k<n;k++){
        printf("%d ",arr[k]);
    }
}