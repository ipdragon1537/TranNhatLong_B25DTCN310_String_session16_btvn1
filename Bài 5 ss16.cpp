#include <stdio.h>
#include <string.h>

int main() {
    char my_string[100];
    int count = 0;
    int is_word = 0;
    printf("Nhap vao mot chuoi: ");
    fgets(my_string, sizeof(my_string), stdin);
    if (strlen(my_string) > 0 && my_string[strlen(my_string) - 1] == '\n') {
        my_string[strlen(my_string) - 1] = '\0';
    }
    for (int i = 0; i < strlen(my_string); i++) {
        if (my_string[i] != ' ') {
            if (is_word == 0) {
                count++;
                is_word = 1;
            }
        } else {
            is_word = 0;
        }
    }
    printf("So tu trong chuoi la: %d\n", count);
    return 0;
}
