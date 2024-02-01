#include<bits/stdc++.h>
using namespace std;
int fun(int i,int j,vector<vector<int>>&mat, int n,vector<vector<int>>&dp){
  if(i>=n){
    return 0;
  }
  if(dp[i][j]!=-1){
    return dp[i][j];
  }
  int a=0;
  int b=0;
  int c=0;
  
  if(j==0){
    a=mat[i][j]+max(fun(i+1,j+1,mat,n,dp),fun(i+1,j+2,mat,n,dp));
  }
  if(j==1){
    b=mat[i][j]+max(fun(i+1,j+1,mat,n,dp),fun(i+1,j-1,mat,n,dp));
  }
  if(j==2){
    c=mat[i][j]+max(fun(i+1,j-1,mat,n,dp),fun(i+1,j-2,mat,n,dp));
  }
  return dp[i][j]=max(a,max(b,c));
}
int main(){
  int n;
  cin>>n;
  vector<vector<int>>mat(n,vector<int>(3,0));
  for(int i=0;i<n;i++){
    for(int j=0;j<3;j++){
      cin>>mat[i][j];
    }
  }
  int res=INT_MIN;
  vector<vector<int>>dp(n+1,vector<int>(4,-1));
  for(int j=0;j<3;j++){
    res=max(res,fun(0,j,mat,n,dp));
  }
  cout <<res;
}
