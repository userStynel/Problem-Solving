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
    for(int i = K; i<=N; i++){
        int subsum = SUM[i] - SUM[i-K];
        if(subsum > highest)
            highest = subsum;
    }
    printf("%d\n", highest);
    return 0;
}