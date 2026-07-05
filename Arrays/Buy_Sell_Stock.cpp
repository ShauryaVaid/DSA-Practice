#include<iostream>
#include<climits>
using namespace std;
/*void maxSubarr(int *prices,int n){
    int Bestbuy[100000];
    Bestbuy[0]=INT_MAX;
    for(int i=1; i<n; i++){
        Bestbuy[i]= min(Bestbuy[i-1], prices[i-1]);
    }

    int Maxprofit=0;
    for(int i=0; i<n; i++){
        int CurrProfit= prices[i] - Bestbuy[i];
        Maxprofit= max(Maxprofit, CurrProfit);
    }
    cout<<"profit: "<<Maxprofit;
}
//tapwater question added too.
void TRAPWATER(int *prices,int n){
    //consider prices array as a height array.
    int leftMax[20000];
    leftMax[0]=prices[0];
    for(int i=1; i<n; i++){
        leftMax[i]= max(leftMax[i-1], prices[i]);
    }

    int rightMax[20000];
    rightMax[n-1]=prices[n-1];
    for(int i=n-2; i>=0; i--){
        rightMax[i]= max(rightMax[i+1], prices[i]);
    }

    int WaterTraped=0;
    for(int i=0; i<n; i++){
        int currWater= (min(leftMax[i], rightMax[i]))-prices[i];
        if(currWater > 0){
            WaterTraped+= currWater;
        }
    }
    cout<<"WaterTraped= "<<WaterTraped<<endl;

}
*/
//Majority Element question added too.
void MajElement(int *prices,int n){
    //consider prices array as a nums array.

    for(int i=0; i<n; i++){
        int count=0;
        for(int j=0; j<n; j++){
            if(prices[i]==prices[j]){
                count++;
            }
        }
        if(count>(n/2)){
            cout<<prices[i]<<endl;
        }
    }
}

int main(){
    int prices[3]={3, 2, 3};
    int n= sizeof(prices)/sizeof(int);
    MajElement(prices, n);
    return 0;
}