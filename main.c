#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inputvalues[] = {4,5,12}; //NUMBERS AS INPUT FOR CALCULATE THE MEDIAN
    int length = sizeof(inputvalues) / sizeof(int); //CALCULATE THE AMOUNT OF INPUTVALUES (=LENGTH OF ARRAY)
    float count = 0;
    float result;

    for (int i = 0; i < length; i++ ) //THE LOOP COUNTS ALL VALUES OF THE ARRAY
    {
        count = count + inputvalues[i]; //ADD NEW POSITION OF THE ARRAY TO VALUE IN COUNT
    }

    result = count/length; //NOW CALCULATE MEDIAN BY VALUE OF COUNTS DIVIDE BY AMOUNT OF INPUTVALUES (=LENGTH OF ARRAY)
    printf("####################################\n"); //PRINT OUT SEPARATING LINE
    printf("##### SIMPLE MEDIAN CALCULATOR #####\n"); //PRINT OUT TITLE
    printf("####################################\n"); //PRINT OUT SEPARATING LINE
    printf("%.2f / %d = %.2f\n", count, length, result); //PRINT OUT THE CALCULATION AND THE RESULT OF IT

    return 0;
}
