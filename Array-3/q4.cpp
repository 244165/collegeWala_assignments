#include<bits/stdc++.h>
using namespace std;

vector<int>val(int arr[])
{
int i=0;
int j=arr.size()-1;
vector<int> ans(nums.size(),0);
int ind=nums.size()-1;
while(i<=j && ind>=0)
{
if(abs(nums[i])>abs(nums[j])) 
{
ans[ind]=arr[i]*arr[i];
ind--;
i++;
}else{
ans[ind]=arr[j]*arr[j];
ind--;
j--;
}
}
return ans;
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
vector<int>ans;
ans = val(a);
for (int i=0;i<m;i++){
    cin>>ans[i];

}
return 0;
}
