#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "bcdac";
    int freq[256] = {0};
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }
    printf("Output\n");
    for (i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c: %d\n", (char)i, freq[i]);
        }
    }
    return 0;
}
