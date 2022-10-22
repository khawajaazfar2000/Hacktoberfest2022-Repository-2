using namespace std;
#include <iostream>

        ///////// FINDING PRIME NUMBERS BY ERATOSTHENES'S METHOD /////////

void primeEratosthenes(int n){
    // int n;
    // cin>>n;
    int arr[100]={0};
    

    for(int i=2;i<=n;++i){      // putting 1 at particular positions in an empty array
        if(arr[i]==0){
            for(int j=i*i;j<=n;j=j+i){
                arr[j]=1;
            }
        }
    }

    for(int i=0;i<n;++i){       // printing the the array made by the above process
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int m=0;
    cout<<"Prime numbers:- "<<endl;
    for(int i=2;i<=n;++i){    // printing the 'positions' in which i is equal to 1 in the array arr  
        if(arr[i]==0){
           
            cout<<i<<" ";
            m=m+1;
        }
        
    }
    
    cout<<endl;
    cout<<"Total no. of prime numbers: "<<m<<endl;
}

int main(){
    // int n;
    // cin>>n;
    primeEratosthenes(100);     // void function, so no need of calling or cout<<
    return 0;
}

    
