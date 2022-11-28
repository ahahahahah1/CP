#include <stdio.h>


void insertionSort(int array[], int n) 
{ 
    int i, element, j; 
    for (i = 1; i < n; i++) { 
        element = array[i]; 
        j = i - 1; 
        while (j >= 0 && array[j] > element) {  
            array[j + 1] = array[j]; 
            j = j - 1; 
        } 
    array[j + 1] = element; 
    }
}


// Function to print the elements of an array
void printArray(int array[], int n) 
{ 
int i; 
for (i = 0; i < n; i++) 
printf("%d ", array[i]); 
}   

int main() {
    int t, n, i, num_zero, idx, temp;
    long long int damage;

    scanf("%d", &t);

    while(t--) {
        num_zero = idx = 0;
        damage = 0;
        scanf("%d", &n);
        int a[n], b[n];

        for(i=0; i<n; i++) {
            scanf("%d", &a[i]);
            if(!a[i]) {
                num_zero++;
            }
        }
        for(i=0; i<n; i++) {
            scanf("%d", &b[i]);
        }

        //sort to have all 0's up front
        for(i=0; i<n && num_zero; i++) {
            if(!a[i]) {
                a[idx] = 0;
                a[i] = 1;
                temp = b[i];
                b[i] = b[idx];
                b[idx] = temp;

                idx++;
                num_zero--;
            }
            else {
                idx++;
            }
        }
        
        insertionSort(b, idx);
        insertionSort(b+idx, n-idx);

        //based upon no of zeroes, decide order
        if(idx < n/2.0) {
            for(i=idx; n-i>idx; i++) {
                damage = damage + b[i];
                printf("damage = %d\n", damage);
            }
            while(i<n) {
                damage = damage+ 2*b[i];
                i++;
            }
            while(idx > 0) {
                damage = damage +2*b[idx - 1];
                idx--;
            }
        }
        else if(idx > n/2.0) {
            for(i=0; n-idx>i; i++) {
                damage = damage + b[i];
            }
            while(i<n) {
                damage = damage + 2*b[i];
                i++;
            }
        }
        else {
            if(b[idx - 1] > b[n - 1]) {
                damage = damage + b[idx];

                for(i=0; i<n; i++) {
                    if(i!=idx) {
                        damage = damage + 2*b[idx];
                    }
                }
            }
            else {
                damage = damage + b[0];
                for(i=1; i<n; i++) {
                    damage = damage + 2*b[i];
                }
            }
        }
        printf("\n%d", damage);
        if(!t) {
            printf("\n");
        }
    }
}