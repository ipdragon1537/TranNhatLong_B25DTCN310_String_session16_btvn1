#include <stdio.h>

int main() {
    char my_string[] = "Mot cai ten, mot noi nho"; 

    char search_char;
    int count = 0;
    int i = 0;
    printf("Chuoi da khai bao la: %s\n", my_string);
    printf("Nhap vao mot ky tu bat ky: ");
    scanf("%c", &search_char);
    while (my_string[i] != '\0') {
        if (my_string[i] == search_char) {
            count++;
        }
        i++;
    }
    printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", search_char, count);
    return 0;
}
