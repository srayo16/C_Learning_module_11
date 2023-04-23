#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100], c[100], d[100];
    scanf("%s %s", a, b);

    // manual
    int count = 0;
    for (int i = 0; i <= (strlen(a) + strlen(b)); i++)
    {
        if (i <= (strlen(a) - 1))
        {
            c[i] = a[i];
        }
        else
        {
            c[i] = b[count];
            count++;
        }
    }

    printf("%s\n", c);

    // with function

    strcat(a, b);
    printf("%s", a);

    return 0;
}