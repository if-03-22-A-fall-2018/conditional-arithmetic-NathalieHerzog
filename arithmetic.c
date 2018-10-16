
/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: 2AHIF
 * ---------------------------------------------------------
 * Exercise Number: 4
 * Title:			  Conditional Arithmetics
 * Author:			Nathalie Herzog
 * ----------------------------------------------------------
 * Description:
 *
 * ----------------------------------------------------------
*/

#include <stdio.h>

int choose_operation()
{
	int operant;

  do
  {
  printf("What operatation should be performed? Add(1) or Multiply(2)");
  scanf("%d", &operant);
  }while(operant != 1 && operant != 2);

  return operant;
}

int choose_number()
{
	int number;

  do
  {
  printf("Now select a number between 1 and 100");
  scanf("%d", &number);
  }while(number < 1 || number > 100);

  return number;
}

int[] get_numbers(int number, int operant)
{
	int[] numbers = new int[100];

	for(int i = 1; i <= number; i++)
	{
		if(i % 5 == 0 || i % 3 == 0)
		{
			numbers[i-1] == i;
		}

	}

	return numbers;
}

int add(int[] numbers)
{
	int sum;

	for(int i = 0; i < numbers.Length; i++)
	{
		sum += numbers[i];
	}

	return sum;
}

int multiply(int[] numbers)
{
	int multiply;

	for(int i = 0; i < numbers.Length; i++)
	{
		multiply *= numbers[i];
	}

	return multiply;
}

int main(int argc, char const *argv[]) {
 int operant = choose_operant();
  int number = choose_number();

  if(operant == 1)
  {
  	add(numbers);
  }
  else
  {
  	multiply(numbers);
  }
  return 0;
}
