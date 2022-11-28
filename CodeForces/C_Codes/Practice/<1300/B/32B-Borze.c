#include <stdio.h>

int main() {
    char c1, c2;

    scanf("%c", &c1);


    while(c1 != '\n') {
        if(c1 == '.') {
            printf("0");
        }
        else {
            scanf("%c", &c2);
            if(c2 == '.') {
                printf("1");
            }
            else {
                printf("2");
            }
        }
        scanf("%c", &c1);
    }
    
    return 0;
}