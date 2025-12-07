#include<iostream>
#include<string>
using namespace std;
// Using Double poiunter 
/*int Reverse(string& str, int i , int j){
     cout << "call recieved for " << str << endl;

    // Base case
    if(i > j)
      return 1;
    swap(str[i] , str[j]);
    i++;
    j--;
    //Recurves call
    Reverse(str , i , j);
}*/

// Using single pointer 
void  Reverse1(string &str , int i ){
  cout<<"Call recieved for  " << str << endl;
  int size = str.length();
  if(i == size / 2)
  return ;

    swap(str[i] , str[size - i - 1]);
    Reverse1(str , i +1);
}

int main(int argc, const char** argv) {

    string name = " a b c d e f ";
    Reverse1(name ,0);
    
    cout<<"Reverse a string "<<name << endl;



    return 0;
}
