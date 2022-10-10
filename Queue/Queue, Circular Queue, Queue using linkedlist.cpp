// The first Program is Simple Queue
#include<iostream>
#include<conio.h>
using namespace std;
class Queue{
private:
	int front;
	int rear;
	int arr[5];
public:
	Queue(){
		front = -1;
		rear = -1;
		for (int i = 0; i < 5; i++){
			arr[i] = 0;
		}
	}
	bool isEmpty(){
		if (front == -1 && rear == -1){
			return true;
		}
		else
			return false;
	}

	bool isFull(){
		if (rear == 4){
			return true;

		}
		else {
			return false;
		}
	}

	void EnQueue(int val){
		if (isFull()){
			cout << "Queue is Full" << endl;
			return;
		}
		else if (isEmpty()){
			rear = 0;
			front = 0;
			arr[rear] = val;
		}
		else {
			rear++;
			arr[rear] = val;
		}
	}

	int DeQueue(){
		int x;
		if (isEmpty()){
			cout << "Queue is Empty" << endl;
			return 0;
		}
		else if (front == rear){
			x = arr[front];
			arr[front] = 0;
			rear = -1;
			front = -1;
			return x;
		}
		else{
			x = arr[front];
			arr[front] = 0;
			front++;
			return x;
		}

	}
	int count(){
		return (rear - front + 1);
	}

	void display(){
		cout << "The values in the Queue are:" << endl;
		for (int i = 0; i < 5; i++){
			cout << arr[i]<<" ";
		}
		cout << endl;
	}
};
int main(){
	Queue q1;
	int option, value;
	do{

		cout << "What option do you want to perform\n";
		cout << "1. EnQueue()" << endl;
		cout << "2. DeQueue()" << endl;
		cout << "3. isEmpty()" << endl;
		cout << "4. isFull()" << endl;
		cout << "5. Count()" << endl;
		cout << "6. Display()" << endl;
		cout << "7. Clear Screen" << endl;
		cout << "Please Enter Your Valid Option\n";
		cin >> option;

		switch (option){
		case 1:
			cout << "Enqueue Operation\n Enter item that you want to enqueue to the Queue" << endl;
			cin >> value;
			q1.EnQueue(value);
			break;
		case 2:
			cout << "Dequee operation is called:" << q1.DeQueue() << endl;
			break;
		case 3:
			if (q1.isEmpty())
				cout << "Queue is Empty\n";
			else
				cout << "Queue is not Empty\n";
			break;
		case 4:
			if (q1.isFull())
				cout << "Queue is full\n";
			else
				cout << "Queue is not full\n";
		case 5:
			cout << "Count operation\n Count of itemes are :" << q1.count() << endl;
			break;
		case 6:
			cout << "Display function called\n";
			q1.display();
			break;
		case 7:
			system("cls");
			break;

		default:
			cout << "Enter valid Value\n";
			break;
		}
		} while (option != 0);

	
		_getch();
		return 0;
}


// Cricular Queue

#include<iostream>
#include<conio.h>
using namespace std;
class CircularQueue{
private:
	int front;
	int rear;
	int arr[5];
	int itemCount;
public:
	CircularQueue(){
		front = -1;
		rear = -1;
		itemCount = 0;
		for (int i = 0; i < 5; i++){
			arr[i] = 0;
		}
	}
	bool isEmpty(){
		if (front == -1 && rear == -1){
			return true;
		}
		else
			return false;
	}

	bool isFull(){
		if ((rear+1)%5==front){
			return true;

		}
		else {
			return false;
		}
	}

	void EnQueue(int val){
		if (isFull()){
			cout << "Queue is Full" << endl;
			return;
		}
		else if (isEmpty()){
			rear = 0;
			front = 0;
			arr[rear] = val;
			itemCount++;
		}
		else {
			rear = (rear + 1) % 5;
			arr[rear] = val;
			itemCount++;
		}
	}

	int DeQueue(){
		int x;
		if (isEmpty()){
			cout << "Queue is Empty" << endl;
			return 0;
		}
		else if (front == rear){
			

				x = arr[front];
			arr[front] = 0;
			rear = -1;
			front = -1;
			itemCount--;
			return x;
		}
		else{
			x = arr[front];
			arr[front] = 0;
			front = (front + 1) % 5;
			itemCount--;
			return x;
		}

	}
	int count(){
		return (itemCount);
	}

	void display(){
		cout << "The values in the Queue are:" << endl;
		for (int i = 0; i < 5; i++){
			cout << arr[i]<<" ";
		}
		cout << endl;
	}
};
int main(){
	CircularQueue q1;
	int option, value;
	do{

		cout << "What option do you want to perform\n";
		cout << "1. EnQueue()" << endl;
		cout << "2. DeQueue()" << endl;
		cout << "3. isEmpty()" << endl;
		cout << "4. isFull()" << endl;
		cout << "5. Count()" << endl;
		cout << "6. Display()" << endl;
		cout << "7. Clear Screen" << endl;
		cout << "Please Enter Your Valid Option\n";
		cin >> option;

		switch (option){
		case 1:
			cout << "Enqueue Operation\n Enter item that you want to enqueue to the Queue" << endl;
			cin >> value;
			q1.EnQueue(value);
			break;
		case 2:
			cout << "Dequee operation is called:" << q1.DeQueue() << endl;
			break;
		case 3:
			if (q1.isEmpty())
				cout << "Queue is Empty\n";
			else
				cout << "Queue is not Empty\n";
			break;
		case 4:
			if (q1.isFull())
				cout << "Queue is full\n";
			else
				cout << "Queue is not full\n";
		case 5:
			cout << "Count operation\n Count of itemes are :" << q1.count() << endl;
			break;
		case 6:
			cout << "Display function called\n";
			q1.display();
			break;
		case 7:
			system("cls");
			break;

		default:
			cout << "Enter valid Value\n";
			break;
		}
		} while (option != 0);

	
		_getch();
		return 0;
}
// Queue Using Linked List
#include<iostream>

using namespace std;

class Node {
  public:
   int key;
  	int data; /
  	Node * next;

  Node() {
    key = 0;
    data = 0;
    next = NULL;
  }
  Node(int k, int d) {
    key = k;
    data = d;
    next = NULL;
  }
};

class Queue 
{
  public:
  	Node *front;
  	Node *rear;
  	
    Queue() 
	 {
      front = NULL;
      rear = NULL;
    }
    
    bool isEmpty()
    {
    	if(front==NULL && rear==NULL)
    	{
    		return true;
		}
		else
		{
			return false;
		}
	 }
	 
	 bool checkIfNodeExist(Node *n)
	 {
	 	Node *temp = front;
	 	bool exist=false;
	 	while(temp!=NULL)
	 	{
	 		if(temp->key==n->key)
        	{
          		exist=true;
        		  break;
      	}
      	temp=temp->next;
		}
		return exist;
	 }
	 
	void enqueue(Node *n) 
   {
    if (isEmpty())
      {
        front = n;
        rear = n;
        cout<<"Node  ENQUEUED successfully"<<endl;
      }
    else if(checkIfNodeExist(n))
    {
      cout<<"Node already exist with this Key value." 
      <<"Enter different Key value"<<endl;
    }
    else
    {
      rear->next=n;
      rear=n;
      //top = n;
      cout<<"Node  ENQUEUED successfully"<<endl;
    }
    
   }
	
	Node* dequeue() 
    {
        Node *temp=NULL;
      if (isEmpty()) 
      {
          cout << "Queue is Empty" << endl;
          return NULL;
      } 
      else 
      {
        if(front==rear)
        {
          temp=front;
          front = NULL;
          rear = NULL;  
          return temp;
        }
        else
        {
          temp=front;
          front = front->next;  
          return temp;
        }
          
       }
    }
	 
	 int count() 
    {
      int count=0;
      Node *temp=front;
      while(temp!=NULL)
      {
        count++;
        temp=temp->next;
    	}
     return count;
    }
	 
	 void display() 
    {
      if(isEmpty())
      {
        cout << "Queue is Empty" << endl;
      }
    else
    {
      cout << "All values in the Queue are :" << endl;
        Node *temp=front;
        while(temp!=NULL)
        {
          cout<<"("<<temp->key<<","<<temp->data<<")"<<" -> ";
          temp=temp->next;
      	}
      cout<<endl;
    }
    
    }
	 
  	
};
 
int main() {
  Queue q;
  int option,key, data;
 
  do {
    cout << "What operation do you want to perform?"
	 <<"Select Option number. Enter 0 to exit." << endl;
    cout << "1. Enqueue()" << endl;
    cout << "2. Dequeue()" << endl;
    cout << "3. isEmpty()" << endl;
    cout << "4. count()" << endl;
    cout << "5. display()" << endl;
    cout << "6. Clear Screen" << endl << endl;
 	 cin >> option;
 	 
	  //Node n1 = new Node();
	 Node * new_node = new Node();
	 
    
    switch (option) {
    case 0:
      break;
    case 1:
    	cout << "ENQUEUE Function Called -" <<endl;
      cout << "Enter KEY and VALUE of NODE to ENQUEUE "
		<<"in the Queue"
		<<endl;
      cin >> key;
      cin >> data;
      new_node->key = key;
      new_node->data = data;
      q.enqueue(new_node);
      break;
    case 2:
      cout << "DEQUEUE Function Called - " <<endl;
      new_node = q.dequeue();
      cout<<"Dequeued Value is: ("<<new_node->key<<","<<new_node->data<<")";
      delete new_node;
		cout<<endl;
      
      break;
    case 3:
    	cout << "isEmpty Function Called - " << endl;
      if (q.isEmpty())
        cout << "Queue is Empty" << endl;
      else
        cout << "Queue is NOT Empty" << endl;
      break;
    case 4:
    	cout << "Count Function Called - " << endl;
      cout << "No of nodes in the Queue: " <<q.count()
		<<endl;
      break;
    case 5:
      cout << "Display Function Called - " << endl;
      q.display();
      cout << endl;
      break;
    
    case 6:
      system("cls");
      break;
    default:
      cout << "Enter Proper Option number " << endl;
    }
 
  } while (option != 0);
 
  return 0;
}