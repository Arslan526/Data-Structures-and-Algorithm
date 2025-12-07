#include<iostream>
using namespace std;
class shop{
    public:

    int items[1000];
    int itemsprice[1000];
    int n  = 1000000;
    void inputAItmesAItmesPrice(){
        for(int i =0; i<n;i++){
        cout<<"Enter A price"<<endl;
        cin>>items[i];
        cout<<"Enter A Itmes Price"<<endl;
        cin>>itemsprice[i];
        
        }
        

    }
    void Display(){
        for(int i =0; i<= n;i++){
            cout<<items[i]<< " " << itemsprice[i]<<endl;
        }
    }

};

int main(){
    shop ob;
    
    ob.inputAItmesAItmesPrice();
    ob.Display();

}