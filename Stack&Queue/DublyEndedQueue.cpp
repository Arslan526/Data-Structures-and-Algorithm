class Deque
{
    vector<int> dq;
    int front, rear;
    int n;

public:
    // Initialize your data structure.
    Deque(int size)
    {
        n = size;
        dq = vector<int>(n);
        front = rear = -1;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        if (isFull() == true)
        {
            // Deque is full.
            return false;
        }

        if (isEmpty() == true)
        {
            // Deque is empty.
            front = rear = 0;
        }
        else
        {
            // Deque is NOT empty. So, decrement 'front' by 1.
            if (front == 0)
            {
                front = n - 1;
            }
            else
            {
                --front;
            }
        }

        // Insert the element at the front of deque.
        dq[front] = x;

        return true;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        if (isFull() == true)
        {
            // Deque is full.
            return false;
        }

        if (isEmpty() == true)
        {
            // Deque is empty.
            front = rear = 0;
        }
        else
        {
            // Deque is NOT empty. So, increment 'rear' by 1.
            if (rear == n - 1)
            {
                rear = 0;
            }
            else
            {
                ++rear;
            }
        }

        // Insert the element at the end of deque.
        dq[rear] = x;

        return true;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
        if (isEmpty() == true)
        {
            // Deque is empty.
            return -1;
        }

        int item = dq[front];

        if (front == rear)
        {
            // Deque has only one element.
            front = rear = -1;
        }
        else
        {
            // Increment 'front' by 1.
            if (front == n - 1)
            {
                front = 0;
            }
            else
            {
                ++front;
            }
        }

        return item;
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
        if (isEmpty() == true)
        {
            // Deque is empty.
            return -1;
        }

        int item = dq[rear];

        if (front == rear)
        {
            // Deque has only one element.
            front = rear = -1;
        }
        else
        {
            // Decrement 'rear' by 1.
            if (rear == 0)
            {
                rear = n - 1;
            }
            else
            {
                --rear;
            }
        }

        return item;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        if (isEmpty() == true)
        {
            // Deque is empty.
            return -1;
        }

        return dq[front];
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        if (isEmpty() == true)
        {
            // Deque is empty.
            return -1;
        }

        return dq[rear];
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        if (front == -1)
        {
            return true;
        }
        return false;
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
        if ((front == 0 && rear == n - 1) || (front == rear + 1))
        {
            return true;
        }
        return false;
    }
};