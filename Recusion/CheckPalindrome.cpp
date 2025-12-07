#include<iostream>
#include<string>
using namespace std;
// using two pointer approach

int Checkpalindrome(string& str , int i , int j){
    
    if(i > j)
    return true;
    if(str[i] != str[j])
    return false;
   else{
    return Checkpalindrome(str , i +1 , j -1);
   }

}
// using one pointer approach

/*int Checkpalindrome(string& str , int i ){
    cout<<"Print a Check palindrome "<< str <<endl;
       int size = str . length();
    if(i  == size / 2){
        return true;
    }
    if(str[i] != str[size - i - 1] ){
        return false;
    }
    
    Checkpalindrome(str , i+1 );
}
*/

int main(int argc, const char** argv) {

    string str = "abbcbba";
    int IsPalindrome  = Checkpalindrome(str , 0,0 );
    if(IsPalindrome){
        cout<<"Its a  palindrome "<< endl;
    }
    else{
        cout<<"Its a  not palindrome "<< endl;
       
    }
    return 0;
}