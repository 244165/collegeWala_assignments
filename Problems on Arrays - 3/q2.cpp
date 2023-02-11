#include <iostream>
using namespace std;

int count(int arr[],int n)
{
    int height[n];
for(int i=1;i<n;i++)
{
height[i]+=height[i-1];
}
int ans=0; //initially the man is at height=0
for(int i=0;i<n;i++)
{
ans=max(ans,height[i]);
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