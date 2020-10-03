/*Author: Botan Celik
  Class: 5AHEL
  Program: SQRT-program
  Date: 30.09.2020
*/
#include <stdio.h>
#include <stdlib.h>

//functions
int my_sqrt(int n);
int multiplication(int n);

int main()
{
    int input = 0;
    scanf("%d",&input);
    printf("\n\nResult: %d\n\n",my_sqrt(input));
    return 0;
}

int my_sqrt(int input)
{
    int square = 0;
    int result;
    int correct = -1;

    for(result = 0; square <= input; result++)
    {
        square = multiplication(result);

        if(square != input)
        {
            /*
            As long as the number is not equal or bigger than the user input
            the loop continues.
            */
            if(square <= input)
            {
                continue;
            }
            else
            {
                //If the result of the multiplication is bigger than the input the result is reduced by -1
                for(int n = 0; n != result; n++)
                {
                    correct++;
                }
                return correct;
            }
        }
        else
        {
            return result;
        }
    }
}

int multiplication(int n)
{
    int temp = 0;

    //To square a number it's added by itself
    for(int i = 0; i != n; i++)
    {
        for(int j = 0; j != n; j++)
        {
            temp++;
        }
    }

    return temp;
}
