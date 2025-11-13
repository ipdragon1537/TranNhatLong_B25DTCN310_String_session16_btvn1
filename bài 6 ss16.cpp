#include <stdio.h>
#include <string.h>
int main() {
    char my_string[100];
    int count = 0;
    int i = 0;
    printf("Nhap vao mot chuoi: ");
    fgets(my_string, sizeof(my_string), stdin);
    if (my_string[strlen(my_string) - 1] == '\n') {
        my_string[strlen(my_string) - 1] = '\0';
    }
    while (my_string[i] != '\0') {
        char ch = my_string[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            count++;
        }
        i++;
    }
    printf("So ky tu chu cai trong chuoi la: %d\n", count);
    return 0;
}

