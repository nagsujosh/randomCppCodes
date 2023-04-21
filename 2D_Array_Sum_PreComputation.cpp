#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
long long int arr[N][N];

int main()
{
    int row, column;
    cin >> row >> column;

    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= column; j++){
            int num;
            cin >> num;
            arr[i][j] = num + arr[i - 1][j] + arr[i][j - 1] - arr[i - 1][j - 1];
        }
    }

    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;

    cout << arr[r2][c2] - arr[r1 - 1][c2] - arr[r2][c1 - 1] + arr[r1 - 1][c1 - 1];
}