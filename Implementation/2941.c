#include <stdio.h>
#include <string.h>

int main(void)
{
    char* str;
    scanf("%s", str);
    int len = (int) strlen(str);
    printf("%d\n", len);
    int count = 0;
    for (int i = 0; i <= len - 2; i++) {
        if (str[i] == 'c') {
            if (str[i+1] == '=') {
                count++;
            }
            else if (str[i+1] == '-') {
                count++;
            }
        }
        else if (str[i] == 'd') {
            if (str[i + 1] == 'z' && i + 2 <= len - 1) {
                if (str[i + 2] == '=') {
                    count++;
                }
            }
            else if (str[i+1] == '-') {
                count++;
            }
        }
        else if (str[i] == 'l') {
            if (str[i+1] == 'j') {
                count++;
            }
        }
        else if (str[i] == 'n') {
            if (str[i + 1] == 'j') {
                count++;
            }
        }
        else if (str[i] == 's') {
            if (str[i + 1] == '=') {
                count++;
            }
        }
        else if (str[i] == 'z') {
            if (str[i + 1] == '=') {
                count++;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}
