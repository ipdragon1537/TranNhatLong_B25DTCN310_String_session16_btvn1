#include <stdio.h>
#include <string.h>

int main() {
    char my_string[] = "Mot moi quan he ket thuc khong có nghia la chung ta có quyen gay ton thuong cho nhau";
    int length = strlen(my_string);
    printf("Chuoi dao nguoc la: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", my_string[i]);
    }
    printf("\n");
    return 0;
}
