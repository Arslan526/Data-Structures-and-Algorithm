#include<iostream>
using namespace std;
class Queue{
    int *arr;
    int size;
    int rear;
    int qfront;
    public:
    Queue(){
        int size =  100000000;
        arr =  new int[size];
        rear = 0;
        qfront = 0;
    }
    bool Empty(){
        if(rear == size){
            return true;
        }
        else
        {
            return false;
        }
    }
    void EnqueuePush(int data){

       if(rear == size){
        cout<<"Queue is full "<< endl
       }
       else{
        arr[rear] = data;
        rear++;
       }
    }
    int popQueue(){
        if(qfront == size){
            cout<<"Queue is empty"<< endl;
        }
        else{
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront == rear){
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
    }
    int front(){
        if(qfront == rear ){
            return -1;
        }
        else
        {
            return arr[qfront];
        }
    }

};
using namespace std;
int main(int argc, const char** argv) {
    Queue ob();
    ob.EnqueuePush(3);

    ob.EnqueuePush(4);
    ob.EnqueuePush(5);

    ob.popQueue();
    ob.front();
    return 0;
}