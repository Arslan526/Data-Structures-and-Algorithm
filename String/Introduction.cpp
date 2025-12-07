#include<iostream>
using namespace std;
int FindLenght(char name[]){
    int count = 0;
    for(int i =0; name[i]!= '\0';i++){
        count++;

    }
    return count;
}
void Reverse(char name[] , int n){
    int s = 0;
    int e = n -1;
    while(s<=e){
        swap(name[s] , name[e]);
        s++;
        e--;
    }
}
bool IsAlphaNumaric(char ch){
    if((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && (tolower(ch) <= 'z'))){
        return true;
    }
    return false;
}
bool CheckPalinDrome(char name[], int len){
    int s = 0;
    int e =  len -1;
    while(s<e){
       if(IsAlphaNumaric(name[s])){
        s++;
        continue;
       }

       if(IsAlphaNumaric(name[e])){
        e--;
        continue;
       }

       if(tolower(name[s] != tolower(name[e]))){
        return false;
       }
       s++;
       e--;

    }
    return true;
}
int main(){
    char name[20];
    cout<<"Enter the name is "<<endl;
    cin>>name;
    // name[9000] = '\0';
    // cout<<"Now name is "<< name << endl;
    int len = FindLenght(name);
    // cout<<"Lenght is : "<< len <<endl;
     cout<<"Reverse The String "<<endl;
     Reverse(name , len);
    cout<<name<<endl;
    int check = CheckPalinDrome(name , len);
    if(check){
        cout<<"It is palinDremo "<<endl;

    }
    else{
        cout<<"It is Not palinDrome "<<endl;
    }
    
    return 0;
}