
/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: 2AHIF
 * ---------------------------------------------------------
 * Exercise Number: 4
 * Title:			  Conditional Arithmetics
 * Author:			Nathalie Herzog
 * Date:			17.10.
 * ----------------------------------------------------------
 * Description:
 * 
 * ----------------------------------------------------------
*/

#include <stdio.h>

void chooseOperation(int* operation)
{
  do
  {
  printf("What operatation should be performed? Add(1) or Multiply(2)\n");
  scanf("%d", operation);
  }while(*operation != 1 && *operation != 2);
}

void chooseNumber(int* number)
{
  do
  {
  printf("Now select a number between 1 and 100\n");
  scanf("%d", number);
  }while(*number < 1 || *number > 100);
}

void add(int number)
{
	long sum;

	for(int i = 1; i < number; i++)
	{
		if(i % 5 == 0 || i % 3 == 0)
		{
			sum += i;
		}

	}

    printf("The result is: %ld\n", add);
}

void multiply(int number)
{
	long multiply;

	for(int i = 0; i < number; i++)
	{
		if(i % 5 == 0 || i % 3 == 0)
		{
			multiply *= i;
		}
	}

    printf("The result is: %ld\n", multiply);
    
}

void performOperation(int operation, int number){
  switch (operation)
  {
    case 1:
      add(&number);
      printf("Result: %d\n", add);
      break;
    case 2:
      multiply(&number);

      break;
  }
}

int main(int argc, char const *argv[]) {
 int operation;
 int number;

chooseOperation(&operation);
chooseNumber(&number);
performOperation(operation, number);
}
