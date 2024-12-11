#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Pham Viet Quan";
    int length= sizeof(str)/sizeof(char);
    printf("Chuoi dao nguoc:");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
