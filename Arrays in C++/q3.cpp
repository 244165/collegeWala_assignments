#include<bits/stdc++.h>
using namespace std;

void rev(int arr[],int n)
{
int start=0;
int end=n-1;
while(start<end)
{
int temp=arr[start];
arr[start]=arr[end];
arr[end]=temp;
start++;
end--;
}
for(int i=0;i<n;i++)
{
cout<<arr[i]<<" ";
}
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
rev(a,n);
for(int i=0;i<n;i++)
{
    cout<<a[i];
}
}
