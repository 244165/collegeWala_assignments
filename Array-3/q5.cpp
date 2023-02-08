#include<bits/stdc++.h>
using namespace std;

vector<int>val(int nums[])
{
int count=0;
for(int i=0;i<nums.size();i++) //extra loop
{
int j=i+1;
int k=nums.size()-1;
int val=x-nums[i];
while(j<k) //normal two sum problem
{
int sum=nums[j]+nums[k];
if(sum<val)
{
j++;
}else if(sum>val){
k--;
}else{
vector<int> temp={nums[i],nums[j],nums[k]};
count++;
while(j<k && nums[j]==temp[1]) //doing this so that there are no same
triplets
{
j++;
}
while(j<k && nums[k]==temp[2]) // doing this so that one triplet is
counted once
{
k--;
}
}
}
while(i+1<nums.size() && nums[i]==nums[i+1]) // doing this so that one triplet
is counted once
{
i++;
}
}
return count;
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
int ans;
ans = val(a);
cout<<ans;
return 0;
}
