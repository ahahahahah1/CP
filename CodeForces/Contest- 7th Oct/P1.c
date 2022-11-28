#include <stdio.h>

int main() {
    int n,k,t,i,j,curr_idx;
    char c;
    int str[25] = {0};
    scanf("%d", &t);

    while(t--) {
        scanf("%d %d ", &n, &k);

        for(i=0; i<n; i++) {
            scanf("%c", &c);
            str[(int)(c - 'a')]++;
        }
        i=0;

        while(i< k) {
            curr_idx = j = 0;

            while(str[curr_idx] > 0 && j< n/k) {
                str[curr_idx]--;
                j++;
                ++curr_idx;
                if(j < n/k) {
                    curr_idx = curr_idx%25;
                }
            }
            if(str[curr_idx] == 0) {
                printf("%c", curr_idx + 'a');
                
                while(j < n/k) {
                    if(str[curr_idx] > 0) {
                        str[curr_idx]--;
                        j++;
                    }
                    curr_idx++;
                    curr_idx %= 25;
                }
            }
            else {
                while(j < n/k) {
                    if(str[curr_idx] > 0) {
                        str[curr_idx]--;
                        j++;
                    }
                    curr_idx++;
                    curr_idx %= 25;
                }
                printf("%c", curr_idx + 'a');
            }

            i++;
        }
        printf("\n");
    }

    return 0;
}