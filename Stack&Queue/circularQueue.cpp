
class CircularQueue{
    // Initialise front and rear of the queue.
    int rear, front;

    // Size of the queue.
    int d;

    // Array To be used for the implementation.
    vector<int> arr;

public:
    // Initialize the circular queue.
    CircularQueue(int n){
        d = n;

        // For a circular queue the front and rear both start as empty.
        front = rear = -1;

        // Create the arrays.
        arr = vector<int>(d);
    }

    // Enqueues 'X' into the Queue. Returns true if it gets enqueued into the queue, and false otherwise..
    bool enqueue(int value){
        if ((front == 0 && rear == d - 1) || (rear == (front - 1) % (d - 1))) {
            /* 
               If the queue is full, no more elements can be added so return false.
               Queue will be full if front is at 1st element and rear is at last element.
               OR if rear is equal to front - 1.
            */
            return false; 
        } 
        else if (front == -1) { 
            // Queue is empty, hence insert the first element.
            front = rear = 0; 
            arr[rear] = value; 
        } 
        else if (rear == d - 1 && front != 0) { 
            // If rear reaches end of queue but the first element is empty.
            rear = 0; 
            arr[rear] = value; 
        } 
        else{ 
            // Otherwise simply enqueue the element.
            rear ++; 
            arr[rear] = value; 
        } 
        return true;
    }

    // Dequeues top element from the Queue. Returns -1 if the queue is empty, otherwise returns the dequeued element.
    int dequeue(){
        if (front == -1) {
            // If queue is empty.
            return -1; 
        } 
  
        // Initialise element to store dequeud element.
        int data = arr[front]; 
        arr[front] = -1; 
        
        if (front == rear) {
            // If the queue has only one element.
            front = -1; 
            rear = -1; 
        } 
        else if (front == d - 1){
            // If front is the last element of the queue.
            front = 0; 
        }
        else{
            // In all other cases simply dequeue.
            front++; 
        }
        // Return the dequeued element.
        return data; 
    }
};