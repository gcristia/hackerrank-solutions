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