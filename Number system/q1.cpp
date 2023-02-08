#include <iostream>
using namespace std;
int main()
{
int sum=0;
for(int i=1;i<=5;i++){
sum=sum+i;
}
int ans = 0;
int pw = 1;
while (sum > 0) {
int parity = sum % 2;
ans += pw * parity;
pw *= 10;
sum /= 2;
}
cout << ans << endl;
}