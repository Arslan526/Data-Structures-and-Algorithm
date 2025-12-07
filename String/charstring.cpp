#include<iostream>
#include<string>
using namespace std;
char ToLowercase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool checkPalidorme(char a[] , int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        if(ToLowercase(a[s] ) != ToLowercase(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
void revese(char name[] , int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        swap(name[s++] , name[e--]);
    }
}
int getlegth(char name[]){
    int count = 0;
    for(int i = 0; name[i]!= '\0'; i++){
      count++;
    }
    return count ;
}
bool canCanvert(string str1 , string str2){
    int i = str1.length() - 1;
    int j = str2.length() - 1;
    if(i >= 0 && j >= 0){
        if(str1[i] == str2[j]){
            i--;
            j--;
        }
        else{
            j--;
        }
    }
    if(i < 0){
        return true;
    }
}
bool rotateString(string str1 , string str2){
    if(str1.length() != str2.length()){
        return false;
    }
    string temp = str1 + str1;
    if(temp.find(str2) != string::npos){
        return true;
    }
    return false;
}

int main(){
    string str1 = "Arslan";
    string str2 = "Firoz Ansari";
    bool ans = canCanvert(str1 , str2);
    if(ans){
        cout<<"Yes"<< endl;
    }
    else{
        cout<<"No"<< endl;
    }

    
    /*
    char name[20];
    cout<<"Enter your name is "<< endl;
    cin>> name;
    int len =  getlegth(name );
    
    cout<<"Legth is "<< len << endl;
   
    revese(name , len);
    cout << "Revese of name " << name << endl;
    cout << "Palindrome or not " << checkPalidorme (name , len) << endl;
    
    cout << "Charetrer case " << ToLowercase('b') << endl;
    cout << "Charetrer case " << ToLowercase('B') << endl;
    


string str("ARSLAN ANSARI BOY");
for(string::iterator it=str.begin(); it!=str.end(); ++it){
    cout<<* it <<" ";  
   
}cout<<endl;
     cout<<"Size of "<< str.size() << endl;
     cout<<"Length is  "<< str.length() <<endl;
     cout<<"capacity is "<< str.capacity() << endl;
     cout<<"Maxi _ size of " << str.max_size()<< endl;*/


    return 0;
}