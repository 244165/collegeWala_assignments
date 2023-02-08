#include<bits/stdc++.h>
using namespace std;

vector<int>val(int arr1[],int arr2[],int m,int n)
{
int i=m-1; //first pointer
int j=n-1; //second pointer
int k=m+n-1;
int arr[m+n];
while(i>=0 && j>=0)
{
if(arr1[i]<arr2[j]) 
{
arr[k--]=arr1[j--];
}else{
arr[k--]=arr2[i--];
}
}
while(j>=0)
{
arr[k--]=arr2[j--];
}
while(i>=0)
{
arr[k--]=arr1[i--];
}
return arr;
}

int main()
{
int m;
cout << "Enter number" << "\n";
cin >> m;
int a[m];
for (int i=0;i<m;i++){
    cin>>a[i];

}
int n;
cin>>n;
int b[n];
for (int i=0;i<n;i++){
    cin>>b[i];
}
vector<int>ans;
ans = val(a,b,m,n);
for (int i=0;i<n;i++){
    cin>>ans[i];

}
return 0;
}
