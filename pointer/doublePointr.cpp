#include<iostream>
using namespace std;
void update(int *p2){
    //p2 = p2 + 1;
    // kuch change hua kiya -> No

    //*p2 = *p2 + 1;
    // kuch change hua kiya -> yes
}
int main(){
    int num = 90;
    int *p1 = &num;
    int **p2 = &p1;
    cout<<"Before print "<< num << endl;
    cout<<"Before print " << p1 << endl;
    cout<<"Before print " << p2 << endl;
    

    update(*p2);

    cout<<"AFTER print "<< num << endl;
    cout<<"AFTER print " << p1 << endl;
    cout<<"AFTER print " << p2 << endl;





    /*int num = 90;
    int *p = &num;
    int **p1 = &p;
    cout<<"1st  "<< num << endl;
    cout<<"2nd "<< p << endl;
    cout<<"3rd "<< p1 << endl;

    cout<< endl;

    cout<<"1st  "<< num << endl;
    cout<<"2nd "<< *p << endl;
    cout<<"3rd "<< **p1 << endl;

    cout<< endl;
    cout<<"1st  "<< &num << endl;
    cout<<"2nd "<< p << endl;
    cout<<"3rd "<< *p1 << endl;

    cout<< endl;
    cout<<"1st  "<< &p << endl;
    cout<<"2nd "<< p1 << endl;
   */



    return 0;
}