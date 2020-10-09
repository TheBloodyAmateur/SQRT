/*
    Author: Botan Celik
    Class: 5AHEL
    Program: SQRT-program
    Date: 30.09.2020
    Github rep.: https://github.com/TheBloodyAmateur/SQRT.git
*/
#include <stdio.h>
#include <stdlib.h>

//functions
int my_sqrt();
int multiplication();

int main()
{
    int input = 0;
    scanf("%d",&input);
    printf("\n\nResult: %d\n\n",my_sqrt(input));
    return 0;
}

int my_sqrt(int input)
{
    int square_result = 0;
    int loop_result;
    int correct_result = -1;

    for(loop_result = 0; square_result <= input; loop_result++)
    {
        square_result = multiplication(loop_result);

        if(square_result != input)
        {
            /*
            As long as the number is not equal or bigger than the user input
            the loop continues.
            */
            if(square_result <= input)
            {
                continue;
            }
            else
            {
                //If the result of the multiplication is bigger than the input the result is reduced by -1
                for(int n = 0; n != loop_result; n++)
                {
                    correct_result++;
                }
                return correct_result;
            }
        }
        else
        {
            return loop_result;
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
