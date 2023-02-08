#include<bits/stdc++.h>
using namespace std;

int val(int arr[],int n)
{
int missing=-1;
int sum=0;
for(int i=0;i<n;i++)
{
sum+=arr[i];
}
int range_sum=(n)*(n+1)/2;
missing=range_sum-sum;
return missing;
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
cout <<val(a,n) << "\n";
return 0;
}
