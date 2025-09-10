#include <bits/stdc++.h>

using namespace std;

#define maxn 100001

int cnts[maxn], cnt, num;

int main() {
    int n, a;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a;
        if(++cnts[a] > cnt) num = a, cnt = cnts[a];
        else if(cnts[a] == cnt && a < num) num = a;
    }

    printf("%d %d", num, cnt);
    return 0;
}