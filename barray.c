#include <stdio.h>
int main()
{
    int arr[5] = {2, 5, 7, 8, 10};
    // int sum = 0;
    int p = 1;
    for (int i = 0; i < 5; i++)
    {
        // sum = sum + arr[i];
        p = p*arr[i];
    }
    printf("%d is product of array",p);
    return 0;
}