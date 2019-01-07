#include <iostream>
#include "lottery.h"
using namespace std;
 
int main(){

    Lottery list;
    
     const int SIZE = 5;
    int lottery[SIZE]; // array of randomized lottery numbers with a size of 5
    bool nummatch = true;
    int input;
    int numbers;
    
 


    
    cout<<"MARYLAND LOTTERY!"<<endl;
    cout<<"info: enter a 5 numbers of you're selection, if the numbers entered don't match, you lose if your number selection and lottery numbers match, you'll win $100,000,000!"<<endl;
    cout<<"-------------------------------------------------\t";
    
    for(int i=0;i<SIZE;i++)
    {
        cout<<endl;
        cout<<"enter a number #"<<i+1<<" : ";
        cin>>input;
        list.insertNode(input, input, input, input, input); // call insert node from user input
    }
    
     
    cout<<endl;
    
       srand(static_cast<unsigned>(time(0))); //random number generator
                                              //gets the system's time
    for(int count=0;count<SIZE;count++)
    {
        lottery[count] = rand()%9+1;  // displays random numbers no higher than 9
    
    }
    
    cout<<"the winning numbers are:\n";
    for(int count=0;count<SIZE;count++)
    {
        cout<<" "<<lottery[count];
       
    }
    
        for(int count=0;count<SIZE;count++)
    {
        if(input!=lottery[count])
         nummatch=false;
        
        
        }
        
        cout<<endl;
    
    cout<<"your number selection:"<<endl;
    
    list.displayList();
    
    if(nummatch)
    {
    
        cout<<"congratulations you've won one million dollars!!!\n";
     
    }
    
    else
    {   cout<<endl;
        cout<<"sorry you've lost"<<endl;
        
    }
    
    
    
    
    
 



 
 

return 0;
}