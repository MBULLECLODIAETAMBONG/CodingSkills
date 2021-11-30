#include <stdio.h>
// A Program that performs all functions in c//
int main()
{
   int num_1, num_2,sum, product;
   float  substraction, division;
   printf("Enter two numbers! ");
   scanf("%d \n %d", &num_1, &num_2);
   sum=(num_1 + num_2);
   product=(num_1*num_2);
   substraction=(num_1 - num_2);
   division=(num_1/num_2);
   printf("The result is %d, %d,%f, %f",sum,product,substraction,division);

    return 0;
}
