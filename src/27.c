#include <stdio.h>
int main() {
    int i;

    for(i = 0; i < 10; i++) {
        printf("%d", i);
        if(i == 9)
            break;
        printf(" ");
    }

    return 0;
}
