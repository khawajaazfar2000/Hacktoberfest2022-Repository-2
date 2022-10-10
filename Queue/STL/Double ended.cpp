#include<iostream>
#include<queue>
using namespace std;

int main(){
    deque<int> d;
// push operation
    d.push_back(33);
    d.push_front(23);

    cout<< d.back() <<endl;
    cout<< d.front() <<endl;

// pop operation
    d.pop_front();

    cout<< d.back() <<endl;
    cout<< d.front() <<endl;

    d.pop_back();

    if(d.empty()) {
        cout<< "Queue is empty" << endl;
    }
    else{
        cout<<" Queue is not empty" << endl;
    }




}