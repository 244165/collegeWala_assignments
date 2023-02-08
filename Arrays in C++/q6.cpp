#include<bits/stdc++.h>
using namespace std;

int val(int arr[],int N)
{
int prefix[N];
int suffix[N];
prefix[0]=INT_MIN;
suffix[N-1]=INT_MAX;
for(int i;i<N;i++){
prefix[i]=max(prefix[i-1],arr[i-1]);
}
for(int i=N-2;i>=0;i--){
suffix[i]=min(suffix[i+1],arr[i+1]);
}
for(int i=0;i<N;i++){
if(prefix[i]<arr[i] && arr[i]<suffix[i]){
return arr[i];
}
}
return -1;
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
