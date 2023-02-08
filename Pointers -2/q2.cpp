#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    int *ptr = a;
    for(int i = 0; i < n; ++i) {
        cin >> *ptr;
        ptr++;
    }
    ptr = a;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += *ptr;
        ptr++;
    }
    cout << sum;

    return 0;
}