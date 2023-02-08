#include<bits/stdc++.h>
using namespace std;

int sum(int arr[],int n)
{
int max_val=INT_MIN;
int min_val=INT_MAX;
for(int i=0;i<n;i++)
{
max_val=max(max_val,arr[i]);
min_val=min(min_val,arr[i]);
}
int ans=max_val+min_val;
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
cout <<sum(a,n) << "\n";
return 0;
}
