#include <iostream>
using namespace std;

int count(int arr[],int l,int r)
{
for(int i=1;i<n;i++)
{
arr[i]+=arr[i-1];
}
int ans=arr[R]-arr[L-1];
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
int l,r;
cin>>l>>r;
cout <<count(a,l,r) << "\n";
return 0;
}