#include <stdio.h>
void func();

int main() {
    func();
    printf("\n");
}

void func() {
    char c;
    scanf("%c", &c);
    if (c == '\n') {
        return; 
    }
    func();
    printf("%c", c);
}
