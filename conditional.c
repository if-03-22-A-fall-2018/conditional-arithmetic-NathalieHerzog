/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: 2AHIF
 * ---------------------------------------------------------
 * Exercise Number: 4
 * Title:			  Conditional Arithmetics
 * Author:			Nathalie Herzog
 * Date:			22.10.
 * ----------------------------------------------------------
 * Description:
 * The user chooses a number and an operator. The program
 * calculates the result.
 * ----------------------------------------------------------
*/
 
#include <stdio.h>
 
void chooseOperation(int* operation)
{
  do
  {
  printf("What operation should be performed? Add(1) or Multiply(2)\n");
  scanf("%d", operation);
  }while(*operation != 1 && *operation != 2);
}
 
void chooseNumber(int* range)
{
  do
  {
  printf("Now select a number between 1 and 100\n");
  scanf("%d", range);
  }while(*range < 1 || *range > 100);
}
 
void add(int range)
{
	long result;
 
	for(int i = 1; i < range; i++)
	{
		if(i % 5 == 0 || i % 3 == 0)
		{
			result += i;
		}
 
	}
 
    if(result < 0)
	{
       printf("Overflow!\n");
    }
    else
    {
   		printf("The result is: %ld\n", result);
    }
}
 
void multiply(int range)
{
	long result;
 
	for(int i = 0; i < range; i++)
	{
		if(i % 5 == 0 || i % 3 == 0)
		{
			result *= i;
		}
	}
	 if(result < 0)
	 {
        printf("Overflow!\n");
     }
     else
     {
    	printf("The result is: %ld\n", result);
     }
 
}
 
void performOperation(int operation, int range){
  if(operation==1)
	{
		add(&range);
	}
  else
	{
		multiply(&range);
	}
}
 
int main(int argc, char const *argv[]) {
 int operation;
 int range;
 
chooseOperation(&operation);
chooseNumber(&range);
performOperation(operation, range);
}