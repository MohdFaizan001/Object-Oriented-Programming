#include<stdio.h>
#include<math.h>


int requiredClasses(int num1 , int  num2){

int Classes = ceil((75.0*num2 - 100.0*num1) / 25.0);
printf("Required classes to attend for clearing shortage : %d\n",Classes);

return Classes;
}


void currentPercentage(int num1 , int num2){
    float percentage = ((float)num1 / num2 ) * 100;
  printf("Your current percentage of attendance is : %f %\n",percentage);

  if (0 <= percentage &&  percentage < 75)
  {
   printf(" ** Shortage **\n");

   int choice;
   printf("Do you want to check required classes to clear shortage :\n");
   printf("1.YESS , 2. NO\n");
   scanf("%d",&choice);

   if (choice == 1)
   {
    requiredClasses(num1 , num2);
   }
   

  } else if ( 100 >= percentage  && percentage >=75)
  {
    printf("ALL CLEAR.");
  }
    
}

int main(){

    int num1 , num2;
    printf("Enter the total number of classes held :");
    scanf("%d",&num2);

    printf("Enter the total classes attended :");
    scanf("%d",&num1);

    currentPercentage(num1 , num2);
    
return 0;

}