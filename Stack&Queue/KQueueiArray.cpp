#include<iostream>
using namespace std;
class KQueue{
   public:
   int n;
   int k;
   int freeSpot;
   int * front;
   int * arr ;
   int * rear;
   int * next;

   public:

   KQueue(int n ,int k){
    this-> n = n;
    this-> k = k;
    front = new int[k];
    rear = new int[k];
    for(int i = 0; i< k; i++){
        front[i] = -1;
        rear[i] = -1;
    }
    next = new int[n];
    for(int i = 0; i< n;i++){
        next[i] = i + 1;
    }
    next[n -1] = -1;
    arr = new int[n];
    freeSpot = 0;
   }

   void PuhsQuene(int data , int qn){
    // ovreflow
    if(freeSpot == -1){
        cout<<"No empty space is present"<< endl;
        return ;
    }

    //find forst free index;
    int index = freeSpot;

    //Update freeSpot
    freeSpot = next[index];

    //cheack wither the first element
    if(front[qn -1] == -1){
        front[qn -1] = index;
    }
    else{
        //link new  element to prev element 
        next[rear[qn -1]] = index;
    }
    //Update next
    next[index] = -1; 
    

    //updtae rear
    rear[qn - 1] = index;

    //push element
    arr[index] = data; 
   }
   
   int POPQueue(int qn){
    // Uderflow 
    if(front[qn - 1] == -1){
        cout<<"Queue uderflow "<< endl;
        return -1;
    }

    //find index to pop
    int index =  front[qn -1];

    // front ko aage badho
    front[qn -1] = next[index];

    //freeSpot ko manage karo
    next[index] = freeSpot;
    freeSpot =  index;
    return arr[index];
   }
};
int main(){
    KQueue q(10 , 3);
    q.PuhsQuene(10 , 1);
    q.PuhsQuene(14 , 1);
    q.PuhsQuene(15 , 2);
    q.PuhsQuene(11 , 2);

    cout<< q.POPQueue(1) << endl;
    cout<< q.POPQueue(2) << endl;
    cout<< q.POPQueue(2) << endl;
    cout<< q.POPQueue(1) << endl;
   
}