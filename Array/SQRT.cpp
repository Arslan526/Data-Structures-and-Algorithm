#include<iostream>
using namespace std;
int  SQRT(int num){
    int s =0;
    int e =  num;
    int mid = (s +e)/2;
    int ans = -1;
    while(s <= e){
        int squre = mid * mid;
        if(squre == num){
            return mid;
        }
        else if(squre < num){
            s = mid +1;
        }
        else{
            e = mid -1;
        }
        mid = (s + e)/2;
    }
    return ans;
}
// double Morepricision(int num  , int pre , int tempsol){
//     double factor = 1;
//     double ans = tempsol;
//     for(int i = 0; i<pre; i++){
//         factor = factor / 10;
    
//     for(double j = ans; j * j < num; j = j + factor){
//         ans = j;
//     }
//  }
//     return ans;
// }
int main(){
    int num;
    cout<<"Enter the number "<<endl;
    cin>>num;
    cout<<"Answer (SQRT) is "<< SQRT(num) << endl;
    
    // int tempsol = SQRT(num);
    
    // cout<<"Answer (SQRT) More pricision is " <<  Morepricision(num , 5 , tempsol) << endl;
    // return 0;
}