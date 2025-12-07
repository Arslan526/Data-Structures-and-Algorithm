#include<iostream>
#include<queue>
#include<string>
using namespace std;
int main(int argc, const char** argv) {
    //cout<<"It is "<< (-1) %  (1) << endl;
    // Answer is 0
    //queue<int> q;
    deque<int>q ;

    q.push_front(12);
    q.push_back(13);
    q.pop_back();
    q.pop_front();
    q.push_front(10);
    q.push_back(131);
    cout<<"Size oif deque is " << q.size()<< endl;
    cout<< q.front()<< endl;
    cout<< q.back() << endl;
     q.pop_back();
    if(q.empty()){
        cout<<"Dqeue is not empty "<< endl;
    }
    else{
        cout<<"Dqeue is empty "<< endl;
    }

    /*queue<string>str;
    str.emplace("My name is arslan");
    str.emplace("My bro name is gufran");
    str.emplace("My Alder bro name is Moh: gulfam ");
    
    if(str.empty()){
        cout<<"String is not empty "<< endl;
    }
    cout<<"String is empty "<< endl;

    cout<<"str is contrains "<< endl;
    while(!str.empty()){
        cout<<"Front is ::::: " << str.front() << endl;
        str.pop();
    }
    cout<<"Back is ::::: "<< str.back()<< endl;
    q.push(15);
    q.push(16);
    q.push(17);
    q.push(11);
    q.push(13);
    q.push(14);

    m.push(151);
    m.push(161);
    m.push(171);
    m.push(111);
    m.push(131);
   

    if(q.empty()){
        cout<<"Queue is empty "<< endl;
    }
    else{
        cout<<"Queue if not empty"<< endl;
    }
    cout<<"Front element "<< q.front()<< endl;
    cout<<"BAck is "<< q.back()<< endl;
    cout<<"Size of q "<< q.size()<<endl;
    cout<<"Size of m "<< m.size() << endl;
    */
    return 0;
}