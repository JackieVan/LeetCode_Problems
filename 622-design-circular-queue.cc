// author: Jackie
// time: 22-8-10
// leetcode link: https://leetcode.cn/problems/design-circular-queue/submissions/

class MyCircularQueue {
private:
    int *ptr;
    int front;
    int rear;
    int size;
public:
    MyCircularQueue(int k) {
        ptr = new int[k + 1]();
        front = rear = 0;
        size = k + 1;
        for (int i = 0; i <= k; ++i)
        {
            ptr[i] = -1;
        }
    }
    
    bool enQueue(int value) {
        if (isFull())
        {
            return false;
        }
        ptr[rear] = value;
        rear = (rear + 1) % size;
        return true;
    }
    
    bool deQueue() {
        if (isEmpty())
        {
            return false;
        }
        ptr[front] = -1;
        front = (front + 1) % size;
        return true;
    }
    
    int Front() {
        return ptr[front];
    }
    
    int Rear() {
        if (rear == 0)
        {
            return ptr[size - 1];
        }
        return ptr[rear - 1];
    }
    
    bool isEmpty() {
        return front == rear;
    }
    
    bool isFull() {
        return (rear + 1) % size == front;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */