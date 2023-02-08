#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int minSum(int a[], int b[], int n)
{
int minA=INT_MAX,minB=INT_MAX,indexA=0,indexB=0;
int min2A=INT_MAX,min2B=INT_MAX;
for(int i=0;i<n;i++)
{
if(a[i]<minA)
{
min2A=minA;
minA=a[i];
indexA=i;
}
else if(a[i]<min2A)
min2A=a[i];
if(b[i]<minB)
{
min2B=minB;
minB=b[i];
indexB=i;
}
else if(b[i]<min2B)
min2B=b[i];
}
if(indexA!=indexB)
return minA+minB;
return min(min2A+minB,min2B+minA);
}


int main()
{
int n;
cout << "Enter number" << "\n";
cin >> n;
int a[n],b[n];
for (int i=0;i<n;i++){
    cin>>a[i];

}

for (int i=0;i<n;i++){
    cin>>b[i];

}
cout <<minSum(a,b,n) << "\n";
return 0;
}