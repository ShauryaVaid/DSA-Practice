#include<iostream>
#include<climits>
using namespace std;
void maxSubarr(int *nums,int n){
    int MaxSub=INT_MIN;
    for(int start=0; start<n; start++){
        for(int end=start; end<n; end++){
            int CurrSum=0;
            for(int i=start; i<=end; i++){   //time complex is O n^3
                CurrSum+=nums[i];
            }
            MaxSub=max(MaxSub,CurrSum);
        }
        cout<<endl;
    }
    cout<<"Output: "<<MaxSub<<endl;
}

void maxSubarr2(int *nums,int n){
    int MaxSub=INT_MIN;
    for(int start=0; start<n; start++){
        int CurrSum=0;
        for(int end=start; end<n; end++){    //time complex is O n^2
            CurrSum+=nums[end];
            }
            MaxSub=max(MaxSub,CurrSum);
    }
    cout<<"Output: "<<MaxSub<<endl;
}

int main(){
    int m=6;
    int nums[m];
    for(int i=0; i<m; i++){
        cin>>nums[i];
    }
    int n= sizeof(nums)/sizeof(int);
    maxSubarr2(nums, n);
    return 0;
}