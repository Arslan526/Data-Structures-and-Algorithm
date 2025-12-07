#include<iostream>
using namespace std;
class MyAcount{
    float num1 , num2 , num3 , num4 , num5 , num6 , num7 ,num8 , num9 , num10;
    public:
    MyAcount(float a , float b , float c , float d , float e , float f  , float g ,float h , float k , float l){
        num1 = a ;
        num2 = b;
        num3 = c;
        num4 = d;
        num5 = e;
        num6 = f;
        num7 = g;
        num8 = h;
        num9 = k;
        num10 = l;
    }
    void display(){
        cout<<"4000 - 3500 Gulfam bro  "<< num1 << endl;
        cout<<"Hostel fee ===========  "<< num2 << endl;
        cout<<"2000 - 1500 Gulfam bro  "<< num3 << endl;
        cout<<"ME ===================  "<< num4 << endl;
        cout<<"Bag ==================  "<< num5 << endl;
        cout<<"Gulfam bro ===========  "<< num6 << endl;
        cout<<"Gulfam bro ===========  "<< num7 << endl;
        cout<<"English fee sumbit ===  "<< num8 << endl;
        cout<<"Gulfam bro ===========  "<< num9 << endl; 
        cout<<"Laptop Reapring  =====  "<< num10 << endl;
        cout<< endl;
    }
    void Total(){
        int tot = num1 + num2 + num3  + num4 + num5 + num6 + num7 + num8 + num9 + num10 ;
        int RS = 54000 -  tot;
        cout<<"Total Amount Balance is  "<< RS <<" Rs "<< endl;
       
        cout<<"My Acount  left is       " << tot <<" Rs "<< endl;
        cout<<endl;
    }

};
int main(){
    MyAcount ob(4040 , 10100 , 2020 , 1010 ,  150 , 1500 , 6.520 , 2020 , 1520 ,2020  );
    ob.display();
    ob.Total();
    return 0;
}