/*Enter the number of rows: 5
          1 
        1 2 1 
      1 2 3 2 1 
    1 2 3 4 3 2 1 
  1 2 3 4 5 4 3 2 1 */


#include <stdio.h>
void main() {
	int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            printf("  ");
        }
        for(int k=1;k<=i;k++){
            printf("%d ",k);
        }
        
        for(int l=1;l<i;l++){
            
            printf("%d ",i-l);
        }
        
        printf("\n");
    }
}