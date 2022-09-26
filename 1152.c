#include <stdio.h>

char str[1000001];

int main(void)
{
    scanf("%[^\n]s", str);
    int state = 0;
    int i = 0;
    int words = 0;
    while (str[i] != '\0') {
        if (str[i] != ' ')
            state = 1;
        if (state == 1 && str[i] == ' ') {
            words++;
            state = 0;
        }
        i++;
    }
    if (str[--i] != ' ')
        words++;
    printf("%d\n", words);
    return 0;
}
