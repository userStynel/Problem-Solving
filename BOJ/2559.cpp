#include <stdio.h>
#define MAX 100001
int main(){
    int highest = -9876543;
    int N, K;
    int SUM[MAX];
    for(int i = 0; i<MAX; i++)
        SUM[i] = 0; 
    scanf(" %d %d", &N, &K);
    for(int i = 1; i<=N; i++){
        int temp;
        scanf(" %d", &temp);
        SUM[i] = SUM[i-1] + temp;
    }
    for(int i = 0; i<M; i++){
        int A, B;
        scanf(" %d %d", &A, &B);
        printf("%d\n", SUM[B]-SUM[A-1]);
    } 
    return 0;
}