#include <stdio.h>
void main(){
   int n;
   printf("How many digits you want to enter? : ");
   scanf("%d",&n);
   int arr[n];
   
   printf("Enter those %d digits: ",n);
   for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
    int max=arr[0];
    int min=arr[0];
    
    for(int j=1;j<n;j++){
            if(max<arr[j]){
                max=arr[j];
            }
              if(arr[j]<min){
                min=arr[j];
            }
    }
    printf("Maximum: %d\nMinimum: %d\n",max,min);
}