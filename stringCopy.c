#include <stdio.h>
#include <string.h>

int main()

{
    char a[100], b[100], c[100];
    scanf("%s %s", a, b);

    // copy first 3 letters only
    for (int i = 0; i <= 3; i++)
    {
        if (i == 3)
        {
            a[i] = '\0';
        }
        else
        {

            a[i] = b[i];
        }
    }

    // copy full

    strcpy(c, b);

    printf("%s %s %s", a, c, b);
    return 0;
}