#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    try{
        if(num==1){
            throw num;
        }else if(num==0){
            throw 'A';

        }
        else if(num==-1)
        {
          throw 8.9;  
        }
        
    }
    catch(int num){
        cout<<"Caught integer exception:"<<endl;
    }
    catch(char num){
        cout<<"Caugth char excepetion:"<<endl;
    }
    catch(double num){
        cout<<"Caugth double excepation:"<<endl;
    }
}