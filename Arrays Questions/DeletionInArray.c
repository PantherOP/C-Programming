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
   printf("Enter the position where you want to delete: ");
   scanf("%d",&pos);
   
   for(int i=pos-1;i<=n-1;i++){
       arr[i]=arr[i+1];
   }
    printf("The new Array is: ");
    n--;
    for(int k=0;k<n;k++){
        printf("%d ",arr[k]);
    }
}