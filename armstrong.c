#include <stdio.h>
int main()
{
    int ld, c;
    
    for (int i = 1; i <= 500; i++)
    {
        int sum = 0;
        int temp = i;
        int value = i;
        while (temp > 0)
        {
            ld = temp % 10;
            c = ld * ld * ld;
            sum = sum + c;
            temp = temp / 10;
        }
            if (value == sum)
            {
                printf("%d is armstrong number\n", sum);
            }
            
        
    }
    return 0;
}