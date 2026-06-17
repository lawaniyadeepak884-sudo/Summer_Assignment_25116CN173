#include <stdio.h>

int checkArmstrong(int n)
{
    int original, rem, sum = 0, cube;

    original = n;

    while(n != 0)
    {
        rem = n % 10;
        cube = rem * rem * rem;
        sum = sum + cube;
        n = n / 10;
    }
    if(original == sum)
        return 1;
    else
        return 0;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(checkArmstrong(num))
        printf("%d is an Armstrong number", num);
    else
        printf("%d is not an Armstrong number", num);
    return 0;
}