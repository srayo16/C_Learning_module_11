#include <stdio.h>
#include <string.h>

int main()
{   
    char a[100];
    scanf("%s", a);
    int count[26] ={0};
    for (int i = 0; i < strlen(a); i++)
    {
        char value = a[i]-'a';
        // printf("%d ", value);
        count[value]++;    
    }

    // for (int i = 0; i < 26; i++)
    // {
    //     printf("%c = %d\n", i+97, count[i]);
    // }
    
    for (int i = 0; i < strlen(a); i++)
    {
        // printf("%c", a[i]);
        int val = a[i]-97;
        // printf("%d\n", val);
        if(count[val]!=0){
            printf("%c = %d\n", a[i], count[val]);
        count[val]=0;
        }
    }
    
    
    
    return 0;
}