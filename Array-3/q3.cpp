#include<bits/stdc++.h>
using namespace std;


int main()
{int i=0;
int j=1;
while(i<size && j<size)
{
if((arr[j]-arr[i])==(n))
{
cout<”Yes”;
}else if((arr[j]-arr[i] )< (n))
{
j++;
}else{
i++;
}
}
cout<<”No”;
}
