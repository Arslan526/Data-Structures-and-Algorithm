#include<iostream>
using namespace std;
/*void update(int *p){
   // p = p + 1;
   // kuch hua kiy  _> no change 
   // cout<<"Inside of p "<< p << endl;
    *p = *p + 1;
   // kuch hua kiy  _> yes  change 
    cout<<"Inside of p "<< p << endl;
    }

*/
 

 int PrintSum(int *arr, int n){
    int sum =0;
    for(int i =0; i<n;i++){
        sum += arr[i];
    }
    return sum;
 }


 int main(int argc, const char** argv) {
    /*char ch[9] = "abcde";
    cout<< ch << endl;
    char *p = &ch[0];
    cout<< p << endl;
    cout<< *p << endl;
    char temp = 'z';
    char *p1 = &temp;
    cout<< p1 << endl;
    
    int num = 4;
    int *p = &num;
    cout<<"Befor print "<< num << endl;
    cout<<"Befor print "<< p << endl;
    update(p);
    cout<<"After print " << num<< endl;
    cout<<"after print " << p << endl;
   */
   

     int arr[7] = {1 ,4 , 6, 9, 4 , 6 , 2};
     int ans = PrintSum(arr + 4 , 3);
     cout<<"Sum of "<< ans << endl;


    return 0;
}
