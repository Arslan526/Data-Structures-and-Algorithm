#include<iostream>
using namespace std;

int main(){
    int player1 = 0;
    int player2 = 0;
    int winner = 0;
    int maxlead = 0;
    int n =0;
    cout<<"Enter the number "<<endl;
    cin>>n;
    cout<<"Enter the palyers "<<endl;
    for(int i =0; i<n;i++){
        int play1;
        int play2;
        cin>>play1 >> play2;
        player1 +=play1;
        player2 +=play2;
        int lead = abs(player1 - player2);
        cout<<"Diff "<< lead<<endl;
        if(lead > maxlead){
            maxlead =  lead;
           if(player1 > player2) {
            winner =1;
           }
           else{
            winner =2;
           }
        }
    }
    cout << winner << " " << maxlead << endl;

    
}