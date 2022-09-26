#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int count = 0;
    for (int i = 0; i < n; i++) {
        char str[101];
        scanf("%s", str);
        int alphabets[26];
        for (int a = 0; a < 26; a++)
            alphabets[a] = 0;
        for (int j = 0; j < strlen(str); j++) {
            char letter = str[j];
            if (alphabets[letter - 'a'] == 0)
                alphabets[letter - 'a'] = 1;
            else {
                if (str[j - 1] != str[j])
                    break;
            }
            if (j == strlen(str))
                count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
