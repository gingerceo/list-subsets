#include <stdio.h>

void print_tab(int A[], int W[], int n) {
    int niepusta = 0;
    for(int i = 0; i < n; i++) {
        if(W[i]) {
            printf("%d ", A[i]);
            niepusta = 1;
        }
    }
    if(niepusta) printf("\n");
}

void subset(int A[], int W[], int n, int s) {
    if(s == n) {
        print_tab(A, W, n);
    }
    else {
        W[s] = 1;
        subset(A, W, n, s + 1);
        W[s] = 0;
        subset(A, W, n, s + 1);
    }
}

int main(void){

    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++) scanf("%d", &A[i]);
    int W[N];
    printf("\n");
    subset(A, W, N, 0);

    return 0;
}