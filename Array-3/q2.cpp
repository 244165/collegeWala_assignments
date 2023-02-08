#include<bits/stdc++.h>
using namespace std;


int main()
{int i=0;
int j=n-1;
while(i<j)
{
if(arr[i]+arr[j]==x)
{
cout<<”Yes”;
break;
}else if(arr[i]+arr[j]>x)
{
j--;
}else{
i++;
}
}
cout<<”No”;
}
