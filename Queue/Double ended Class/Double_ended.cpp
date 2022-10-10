#include<iostream>
#include<queue>
using namespace std;

class Deque{
    public:
    int arr[10];
    int front = -1;
    int rear = -1;
    int n;


// Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque
 bool pushFront(int x){
    if (isFull()){
        return  false;
    }
    else if(isEmpty()){
        front = rear = 0;
    }
    else if (front == 0 && rear != n-1){
        front = n-1;
    }
    else{
        front--;
    }
    arr[front] = x;
    return true;
 }

 // Pushes 'X' in the back of deque, returns -1 if deque is empty
bool popRear(){
    if (isEmpty()){ // check queue is empty or not 
      return  -1;
    }
    int ans = arr[rear];
    arr[rear] = -1;
    if (front == rear){
        front = rear = -1;
        
    }
    else if (rear==0){
        rear = n-1; // to maintain cyclic nature
    }
    else
    {// normal flow
       rear--;
    
    }
    return ans;
}
// Returns the last element of the deque, if the deque is empty , it returns -1.
int getRear(){
    if (isEmpty()){
        return -1;
    }
    return arr[rear];
}
//Returns true if the deque is empty , otherwise returns false
bool isEmpty(){
    if (front == -1)
        return true;
    else 
        return false;
    
}
    // Returns true if the deque is full , otherwise returns false
    bool (isFull()){
      if((front == 0 && rear == n-1) || rear == (front-1)%(n-1)){
        return true;
      }
      else {
        return false;
      }

    }
};