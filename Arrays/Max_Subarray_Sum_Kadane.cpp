#include<iostream>
#include<climits>
using namespace std;
void maxSubarr(int *nums,int n){
    int currSum=0;
    int maxSum=INT_MIN;
    for(int i=0; i<n; i++){
        currSum=nums[i];
        maxSum= max(maxSum, currSum);


    }
    cout<<"Output: "<<maxSum<<endl;
}

int main(){
    int m=4;
    int nums[m];
    for(int i=0; i<m; i++){
        cin>>nums[i];
    }
    int n= sizeof(nums)/sizeof(int);
    maxSubarr(nums, n);
    return 0;
}