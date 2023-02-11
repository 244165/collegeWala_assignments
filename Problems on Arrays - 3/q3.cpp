#include <iostream>
using namespace std;

int count(int arr[],int n)
{
int ans = 0;
int height= 0;
for (int i=0;i<gain.size();i++) {
height = height + gain[i];
if(ans>height)
{
ans=height;
}
}
return ans;
}

int main()
{
int n;
cout << "Enter number" << "\n";
cin >> n;
int a[n];
for (int i=0;i<n;i++){
    cin>>a[i];

}
cout <<count(a,n) << "\n";
return 0;
}