#include <stdio.h>

int main()
{
    char str[100];
    int maxlength = 0, s1 = 0, count = 0;

    printf("Enter a Sentence: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && str[i] != '\n')
        {
            count++;
        }
        else
        {
            if (count > maxlength)
            {
                maxlength = count;
                s1 = i - count;
                count = 0;
            }
        }

        if (str[i] == '\0')
        {
            break;
        }
    }
    printf("Largest Word in the sentence is: ");
    for(int i=s1;str[i] !='\0';i++){
        printf("%c",str[i]);
    }

    return 0;
}