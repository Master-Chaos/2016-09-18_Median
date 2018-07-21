#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inputvalues[] = {4,5,12};
    int length = sizeof(inputvalues) / sizeof(int);
    float count = 0;
    float result;

    for (int i = 0; i < length; i++ )
    {
        count = count + inputvalues[i];
    }

    result = count/length;
    printf("%.2f / %d = %.2f\n", count, length, result);


    return 0;
}
