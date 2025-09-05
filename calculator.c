#include<stdio.h>
#include<math.h>

int main(){
    char operator;
    int  a , b;
    printf("\nEnter the operands a :");
    scanf("%d" , &a );
    printf("\nEnter the operand b:");
    scanf("%d" , &b );
    printf("\nEnter the operator (+ , - , * , /):");
    scanf(" %c",&operator);

    switch (operator)
    {
    case '+':{
       int sum = a +b; 
        printf("the sum of %d and %d = %d ",a , b ,sum);
       
        break;
    }
    case '-':{
       int substraction = a - b; 
        printf("the substraction  of %d and %d = %d ",a , b ,substraction);
       
        break;
    }
    case '*':{
       int multiply = a * b; 
        printf("the multiplication of %d and %d = %d ",a , b ,multiply);
       
        break;
    }
    case '/':
       
       if (b==0)
       {
        printf("Denomiator can't be zero.");
       } else{
        float division = (float) a / b; 
          printf("the division of %d and %d = %f ",a , b ,division);
       
       }
       
      
        break;

    


    
     default:
    {
        printf("Enter the valid operator.");
    }
        break;
    

    }
return 0;

}