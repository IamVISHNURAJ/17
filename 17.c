#include <stdio.h>
int main()
{
    int n,m,r, flag= 0;
    scanf("%d", &n);
    m= n;

    while (m!= 0)
    {
        r= m%10;
        flag += r*r*r;
        m /= 10;
    }
    if(flag == n)
        printf("yes ");
    else
        printf("no ");

    return 0;
}
