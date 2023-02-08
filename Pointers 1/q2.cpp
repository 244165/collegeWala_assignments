#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    int *ptr = &num1, *ptr2 = &num2;
    int product = *ptr * *ptr2;
    cout << product;
    return 0;
}