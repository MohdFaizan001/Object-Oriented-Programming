#include<stdio.h>
#include<string.h>

int main(){
    int isPalindrome = 1;
   char str[20];
   printf("Enter the string:");
   gets(str);
   
   int size = strlen(str);
    
   int i=0 , j=size-1;

   while(i<j){
    if (str[i] != str[j])
    {
    isPalindrome = 0;
    break;
   } else{
    i++;
    j--;
   }
}

if (isPalindrome)
{
   printf("the string is a palindrome.");
}
 else  {
      printf("the string is not a palindrome.");
 }




   return 0;

}
