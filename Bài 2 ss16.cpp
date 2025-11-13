#include <stdio.h>
int main() {
    char my_string[] = "Hello World"; 
    int i = 0;
    while (my_string[i] != '\0') {
        printf("%c ", my_string[i]); 
        i++;
    }
    printf("\n");
    return 0;
}
