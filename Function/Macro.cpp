#include<iostream>
using namespace std;
// Macro Difinition
#define Pi 3.14
#define Area(l , b) (l *b)
// object like
#define Date 31
// Chain Macro
#define Instagram Followers
#define Followers 321
// Malti line Macro
#define Ansari 1,\
               2, \
               3, \
               4 
// funcrtion Like 
#define min(a , b)  (((a) < (b)) ? (a) : (b))


int main(){
   /* int r = 6;
    //double Pi = 3.14;
    double Area = Pi *  r * r;
    cout<<"Area is "<< Area<< endl;
    
    cout<<"The values of Pi "<< Pi << endl;
    
    int l = 11 , b = 9;
    cout<<"Area of Rectangle " << Area(l , b) << endl; 
    

    // Tpye of Macro 
    // 1. Object like Macro
    cout<<"Lacdown will be extended"
        <<" Upto " << Date 
        <<"-MAy-2020";
        
    //2. Chain Macro
    cout<<"My Followers "
        <<Instagram << "K hi"<< endl;


    // Malti Line Macro
    int arr[] = {Ansari};
    cout<<"Printig the Array" << endl;
    for(int i = 1; i<= 4; i++){
        cout<<arr [Ansari] << " ";
    }
    cout<<endl;
    */
    //Function like  Macro
    int a = 90; 
    int b = 9;
    cout<<"Minimum values is a and b "<< endl;
    min( a , b);







    return 0;
}