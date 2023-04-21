#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    printf("Enter two strings: ");
    scanf("%s %s", a, b);

    int count = 0;

    for (int i = 0; count < 1; i++)
    {
        if (a[i] == b[i])
        {

            if (i == strlen(a) - 1 && i == strlen(b) - 1)
            {
                printf("a==b (both is lexicographical).\n");
                count++;
                break;
            }
            else
            {
                continue;
            }
        }

        else if (a[i] == ' ' || a[i] == '\0')
        {
            printf("a<b (a is lexicographical).\n");
            count++;
            break;
        }
        else if (b[i] == ' ' || b[i] == '\0')
        {
            printf("a>b (b is lexicographical).\n");
            count++;
            break;
        }

        else if (a[i] != b[i])
        {
            if (a[i] < b[i])
            {
                printf("a<b (a is lexicographical).\n");
                count++;
                break;
            }
            else if (a[i] > b[i])
            {
                printf("a>b (b is lexicographical).\n");
                count++;
                break;
            }
        }
    }

    return 0;
}