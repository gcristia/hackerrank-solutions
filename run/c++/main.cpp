//C++
#include <bits/stdc++.h>

//C
//#include <stdio.h>
//#include <string.h> (strlen)
//#include <cstdio>

//Quitar para C
using namespace std;

void miniMaxSum(vector<int> arr) {
    long long int min = 0, max = 0;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++) {
        if (i == 0) {
            min += arr[i];
        } else if (i == arr.size() - 1) {
            max += arr[i];
        } else {
            min += arr[i];
            max += arr[i];
        }
    }
    cout << min << " " << max << endl;
}

int main() {

    freopen("..\\in", "r", stdin);
    freopen("..\\out", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    //int T;

    //cin >> T;

    vector<int> arr(5);

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    miniMaxSum(arr);

    return 0;
}