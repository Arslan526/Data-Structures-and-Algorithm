#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
vector<double> solve(double  num){
    vector<double>ans;
    ans.push_back(num);
    while(num != 1){
        if(fmod(num ,2)  == 0){
            num =  pow(num , 0.5);
        }
        else {
            num =  pow(num , 1.5);
        }
         ans.push_back(num);

         if(num == 1) break;
    }
    return ans;

}
int main(){
    double num;
    cout<<"Enter number "<<endl;
    cin>>num;
    vector<double> ans = solve(num);
    for(double val : ans){
      cout<<val<<" ";
    }
    cout<<endl;

}