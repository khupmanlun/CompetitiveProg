//Find the greatest sum from the given array pairs
//Using Kadance Algorithm
//Dated: 16/06/1997
#include<iostream>
using namespace std;
#define MAX 30
int max(int A,int B){
    return A>B?A:B;
}
int main(void){
    int Arr[MAX],testNo,testlen,i,j;
    cin>>testNo;
    //for(i=0;i<testNo;i++){
        //cin>>testlen;
        for(i=0;i<testNo;i++){
            cin>>Arr[i];
        }
        int CurrentMax,GlobalMax ;
        CurrentMax = GlobalMax = Arr[0];
        for(j=1;j<testNo;j++){
            int CurrentMax = max(Arr[j],GlobalMax + Arr[j]);
            if(CurrentMax>GlobalMax){
                GlobalMax = CurrentMax;
            }            
        }
        cout<<"The max subarray value is "<<GlobalMax;
    //}
}
