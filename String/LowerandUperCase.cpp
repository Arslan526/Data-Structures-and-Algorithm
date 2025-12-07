#include <iostream>
using namespace std;

// Function to check if character is alphanumeric
bool Valid(char ch) {
    return (ch >= 'a' && ch <= 'z') ||
           (ch >= 'A' && ch <= 'Z') ||
           (ch >= '0' && ch <= '9') ||
           (ch == '@' || ch == '#' || ch == '%' || ch == '&' || ch == '*' || ch == '!' || ch == '?' || ch == ' ' || ch == '-' || ch == '+' || ch == '=' || ch == '/' || ch == '\\' || ch == '.' || ch == ',' || ch == ';' || ch == ':');

}

// Function to convert character to lowercase
char convertToLowerCase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch - 'A' + 'a';
    }
    return ch;
}

// Function to convert character to uppercase
char convertToUpperCase(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch - 'a' + 'A';
    }
    return ch;
}

// Function to check if string is a palindrome
bool CheckPalindrome(string s) {
    int s1 = 0;
    int e = s.size() - 1;
    while (s1 <= e) {
        if (s[s1] != s[e]) {
            return false;
        }
        s1++;
        e--;
    }
    return true;
}

int main() {
    string s = "ArslanAnsari112!!#$%$%^%&#$%$%^";
    string temp = "";
    cout<<"Lowercase: ";
    for(int i =0; i<s.size(); i++){
        temp.push_back(convertToLowerCase(s[i]));
    }
    cout<<temp<<endl;

    temp = "";
    cout<<"Uppercase: ";
    for(int i =0; i<s.size(); i++){
        temp.push_back(convertToUpperCase(s[i]));
    }
    cout<<temp<<endl;
    bool  Validchater = Valid(s[0]);
    for(int i = 1; i < s.size(); i++) {
        if (!Valid(s[i])) {
            Validchater = false;
            break;
        }
    }

    if(Validchater){
    cout<<"It is A valid  character"<<endl;
    }
    else{
        cout<<"It is Not A valid character"<<endl;
    }

//     // Remove non-alphanumeric characters
//     for (int i = 0; i < s.size(); i++) {
//         if (Valid(s[i])) {
//             temp.push_back(convertToLowerCase(s[i]));
//         }
//     }

//     // Check for palindrome
//     if (CheckPalindrome(temp)) {
//         cout << "Palindrome" << endl;
//     } else {
//         cout << "Not a Palindrome" << endl;
//     }

//     return 0;
}
