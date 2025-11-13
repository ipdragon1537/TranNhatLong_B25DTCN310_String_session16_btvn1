#include <stdio.h>
#include <string.h>
int main() {
    char my_string[32];
    int i = 0;
    printf("Nhap vao mot chuoi: ");
    fgets(my_string, sizeof(my_string), stdin);
    if (strlen(my_string) > 0 && my_string[strlen(my_string) - 1] == '\n') {
        my_string[strlen(my_string) - 1] = '\0';
    }
    if (my_string != '\0' && my_string >= 'a' && my_string <= 'z') {
        my_string -= 32;
    }
    while (my_string[i] != '\0') {
        if (my_string[i] == ' ') {
            if (my_string[i + 1] >= 'a' && my_string[i + 1] <= 'z') {
                my_string[i + 1] -= 32;
            }
        }
        i++;
    }
    printf("Chuoi sau khi viet hoa: %s\n", my_string);
    return 0;
}
