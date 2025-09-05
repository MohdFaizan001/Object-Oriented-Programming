#include<stdio.h>

int main(){
    int maxIndex = 0;
    int n;
    printf("Enter  the number of elements in array:");
    scanf("%d",&n);

    int arr[n];
     printf("Enter  the elements of array:");

for (int i = 0; i < n; i++){
    scanf("%d",&arr[i]);
}

for (int i = 0; i < n; i++)
{
   if (arr[i] > arr[maxIndex])
   {
    maxIndex = i;
   }
   
}

printf("The largest number in array is : %d",arr[maxIndex]);

return 0;

}
