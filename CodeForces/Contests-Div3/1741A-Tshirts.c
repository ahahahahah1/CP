#include <stdio.h>


int main() {
    int t, no1_x, no2_x;
    char curr, sub1 = '0', sub2;
    scanf("%d ", &t);

    while(t--) {
        no1_x = no2_x = 0;
        scanf("%c", &curr);
        while(curr != ' ') {
            if(curr == 'X') {
                no1_x++;
            }
            else {
                sub1 = curr;
            }
            scanf("%c", &curr);
        }
        scanf("%c", &curr);
        while(curr != '\n') {
            if(curr == 'X') {
                no2_x++;
            }
            else {
                sub2 = curr;
            }
            scanf("%c", &curr);
        }
        if(sub2 < sub1) {
            printf("<\n");
        }
        else if(sub2 > sub1) {
            printf(">\n");
        }
        else {
            if((no1_x > no2_x && sub1 == 'L') || (no1_x < no2_x && sub1 == 'S')) {
                printf(">\n");
            }
            else if((no1_x < no2_x && sub1 == 'L') ||  (no1_x > no2_x && sub1 == 'S')) {
                printf("<\n");
            }
            else {
                printf("=\n");
            }
        }
    }
}