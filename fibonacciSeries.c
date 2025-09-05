// printing n terms of fibonacci series 
#include<stdio.h>

int main(){
int n ;
printf("Enter the number n upto which fibonacci series you want :");
scanf("%d",&n);

int t1 = 0 ;
int t2 = 1 ;
int nextTerm;

for (int i = 1 ; i <= n; i++)
{
    printf("%d ",t1); 
    nextTerm = t1 + t2;
    t1 = t2 ;
    t2 = nextTerm; 
}

return 0;
}