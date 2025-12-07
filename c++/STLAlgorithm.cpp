#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
   vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(9);
    v.push_back(10);
     v.push_back(11);
     cout<<"Binary search is "<< binary_search(v.begin() , v.end() , 10)<< endl;


     cout<<"Lower bound "<<lower_bound(v.begin() , v.end() , 2) - v.begin()<< endl;


     cout<<"upper  bound "<<upper_bound(v.begin() , v.end() , 11) - v.begin()<< endl;
     int a = 9;
     int b = 11;
     cout<<"Max "<< max(a , b)<< endl;
     cout<<"Mini "<< min(a , b)<< endl;


     swap(a , b);

      cout<<"a is "<< a << endl;
      cout<<"b is "<< b << endl;

      string abcd = "abcd";
      reverse(abcd.begin() , abcd.end());
      cout<<"String "<< abcd << endl;

      rotate(v.begin() , v.begin() +1, v.end());
      cout<<"After rotate "<<endl;
      for(int i : v){
            cout<<i <<" ";
      }


   
   
}