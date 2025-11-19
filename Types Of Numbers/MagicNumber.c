#include <stdio.h>
void main(){
        int n,temp,r,sum=0,sums,rem,num=0,result;
        scanf("%d",&n);
temp=n;
        while(n!=0){
            r=n%10;
            sum+=r;
            n/=10;
        }

        sums=sum;
        while(sums!=0){
            rem=sums%10;
            num=(num*10)+rem;
            sums/=10;
        }
result=sum*num;

if(result==temp){
    printf("It is a magic number.");
}
else{
    printf("It is not a magic number.");
}
}