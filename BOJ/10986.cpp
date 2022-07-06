#include <stdio.h>
int main(){
    long long ans = 0;
    long long sum = 0;
    int N, M;
    long long COUNT[1001];
    for(int i = 0; i<1001; i++)
        COUNT[i] = 0; 
    scanf(" %d %d", &N, &M);
    for(int i = 1; i<=N; i++){
        int temp;
        scanf(" %d", &temp);
        sum += temp;
        COUNT[sum % M]++;
    }
    for(int i = 0; i<=1000; i++){
        if(COUNT[i] > 1)
            ans += (COUNT[i] * (COUNT[i] - 1))/2;
    }
    ans += COUNT[0];
    printf("%lld\n", ans);
    return 0;
}