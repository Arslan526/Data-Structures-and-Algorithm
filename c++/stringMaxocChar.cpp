#include<iostream>
#include<string>
using namespace std;
char getocccharachter(string s){
    int arr[26] = {0};
    // creat an array bof count of charracter
    for(int i = 0; i<s.length(); i++){
        char ch = s[i];
         // lower case
         int number  = 0;
         if(ch >= 'a' && ch <= 'z'){
            number  = ch - 'a';
            
         }
         // upper case 
         else {
              number = ch - 'A';
         }
         arr[number]++;
    }
         // find maximum occ character 
         int maxi = -1;
         int ans = -1;
         for(int i  =0; i <26; i++){
            if(maxi < arr[i]){
                ans = i;
                maxi = arr[i];
            }
         }
        int finalAnswer = 'a' + ans;
   
    return finalAnswer;  
    }


    int main(){
    string s ;
    cout<<"Enter  the string "<<endl;
    cin>>s;
    cout<<getocccharachter(s) << endl;
    return 0;
    }