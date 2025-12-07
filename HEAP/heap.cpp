#include<iostream>
using namespace std;
class Heap{
    public:
    int arr[100];
    int size;
    Heap(){
        arr[0] = -1;
        size = 0;
    }
    void insert(int val){
        size++;
        int index = size;
        arr[index] = val;
        while(index > 1){
            int parent = index/2;
            if(arr[parent] < arr[index]){
                swap(arr[parent] , arr[index]);
                index =  parent;
            }
            else{
                return;
            }
        }
    }
    void print(){
        for(int i =1; i<= size; i++){
            cout<<arr[i] << " ";
        }cout<<endl;
    }
    void DeletefromHeap(){
        if(size ==  0){
            cout<<"Noting to delete "<< endl;
            return;
        }
        arr[1]  = arr[size];
        size--;
        int i  =1;
        while( i < 1 ){
            int left = 2 * i;
            int right = 2*i +1;
            if(left < size && arr[i] < arr[left] ){
                swap(arr[i] , arr[left]);
                i = left;
            }
            else if(right < size && arr[i] < arr[right]){
                swap(arr[i] , arr[right]);
                i = right;
            }
            else{
                return;
            }
        }
    }
};

void Heapify(int * arr , int n , int i){
   int largest   = i;
   int left =  2* i;
   int right = 2 * i +1;
   if(left <= n && arr[largest ] < arr[left]){
    largest = left;
   }
   if(right <= n && arr[largest] < arr[right]){
    largest = right;
   }
   if(largest != i){
    swap(arr[largest] , arr[i]);
    Heapify(arr , n , largest);
   }
}
void HeapSort(int arr[] , int n ){
    int t = n;
    while(t >1){
        swap(arr[t] , arr[1]);
        t--;
        Heapify(arr , t , 1);
    }
}
int main(){
    priority_queue<int>pq;
    /*Heap h;
    h.insert(34);
    h.insert(32);
    h.insert(14);
    h.insert(89);
    h.insert(24);
    h.insert(14);
    h.print();
    h.DeletefromHeap();
    h.print();
    int arr[13] = {-1 , 54 , 53 , 52 , 50 ,2 ,1 ,2,9 ,89,78,67,56};
    int n = 12;
    for(int i = n /2; i> 0;i--){
        Heapify(arr , n , i);
    }
    cout<<"Pritnting the array now "<< endl;
     
        for(int i = 1; i<=n; i++){
        cout<<arr[i] << " ";
    }
        cout<<endl;
        HeapSort(arr , n);
        cout<<"Heap Sort  "<< endl;
     
        for(int i = 1; i<n; i++){
            cout<<arr[i] << " ";
        }cout<<endl;
        */
    
    return 0;
}