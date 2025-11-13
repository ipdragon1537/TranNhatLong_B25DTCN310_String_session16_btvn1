#include <string.h>
#include <stdio.h>

int main() {
    char str[100];
    printf("Nhap vao mot chuoi: ");
    fgets(str, sizeof(str), stdin);
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
    printf("Chuoi vua nhap la: %s\n", str);
    printf("Do dai cua chuoi la: %zu\n", strlen(str));
    return 0;
}
