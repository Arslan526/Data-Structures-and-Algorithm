#include<iostream>
using namespace std;
int score = 333;
void A(int & i){
    cout<< "This is a value is " << i << endl;
    cout<<score <<" In A Function"<< endl;
}
void B(int &j){
    cout<<"This is a values  is "<< j << endl;
    cout<<score <<" In B Function"<< endl;
}


int main(){
    int i = 90;
    cout<<score <<" In Main Function"<< endl;
    A(i);
    B(i);


    {
        // This is a local variable
        int j =89;
        //cout<< j << endl;
    }
    




    return 0;
}