#include <bits/stdc++.h>

using namespace std;

#define maxn 2001

int score[maxn];

int main() {
    int n, points[3], res;
    cin >> n;
    for(int i = 0 ; i < 3; i++)
        cin >> points[i];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++){
            cin >> res;
            if(i == j) continue;
            score[i] += points[res];
        }

    for(int i = 0; i < n; i++)
        cout << score[i] << ' ';
    return 0;
}