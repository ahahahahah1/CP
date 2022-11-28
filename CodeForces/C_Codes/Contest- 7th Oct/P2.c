#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct Node {
    int val;
    struct Node *next;
} Node;

#define MAX 1000000000000000000
#define STEP 50000

Node *CreateNode(int val) {
    Node *node = (Node *) malloc(sizeof(Node));
    node->val = val;
    node->next = NULL;
    return node;
}

Node* add(Node *head, int val) {
    if(head == NULL) {
        head = CreateNode(val);
        return head;
    }
    head = add(head->next, val);
    return head;
}

int main() {
    Node *head = NULL;
    long long int l,r;
    int t;
    for(long long int i=1; i<=MAX; i++) {
        if(i % (int)floor(sqrt(i)) == 0) {
            head = add(head, i);
        }
        if(i%STEP == 0) {
            printf("Still running\n");
        }
    }

    for(int i=0; i<10; i++) {
        printf("%d", head->val);
        head = head->next;
    }

    // scanf("%d", &t);


    // while(t--) {
    //     scanf("%lld %lld", &l, &r);
    // }

    return 0;
}