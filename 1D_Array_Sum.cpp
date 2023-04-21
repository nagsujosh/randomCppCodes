#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
long long int pf[N];

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        pf[i] = pf[i - 1] + x;
    }
    int t;
    cin >> t;
    while(t--){
        int l, r;
        cin >> l >> r;
        cout << pf[r] - pf[l - 1] << endl;
    }
}