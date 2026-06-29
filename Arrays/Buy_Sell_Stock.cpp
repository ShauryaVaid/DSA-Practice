#include<iostream>
#include<climits>
using namespace std;
void maxSubarr(int *prices,int n){
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

int main(){
    int prices[6]={7, 1, 5, 3, 6, 4};
    int n= sizeof(prices)/sizeof(int);
    maxSubarr(prices, n);
    return 0;
}