#include <stdio.h>
#include <string.h>

int main() {
    char my_string[100];
    int letters = 0;
    int digits = 0;
    int specials = 0;
    printf("Nhap vao mot chuoi: ");
    fgets(my_string, sizeof(my_string), stdin);
    if (strlen(my_string) > 0 && my_string[strlen(my_string) - 1] == '\n') {
        my_string[strlen(my_string) - 1] = '\0';
    }
    for (int i = 0; my_string[i] != '\0'; i++) {
        char ch = my_string[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            letters++;
        }
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        else {
            specials++;
        }
    }
    printf("So ky tu la chu cai: %d\n", letters);
    printf("So ky tu la chu so: %d\n", digits);
    printf("So ky tu dac biet: %d\n", specials);

    return 0;
}

