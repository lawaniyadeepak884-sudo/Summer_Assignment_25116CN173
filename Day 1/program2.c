#include  <stdio.h>
int main()
{
    int n;
    int m= 0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1; i<=10; i++)
    {
        m=n*i;
        printf("%d\n",m);
    }
    return 0;
}