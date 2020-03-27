#include<iostream>
#define N 5
using namespace std;

//Queue variables
int frontIndex = 0;
int backIndex = 0;
int head;
int End;


//Create or initialize a queue
void init(int tab[])
{for(int i = 0; i<N; i++) tab[i]=0;}


//functions for checking the state of the queue 
// function 1
int isTheQueuefull(int tab[])
{   int j=0;
    for(int i = 0; i<N; i++) if(tab[i])j++; if(j==N) return 1; return 0;}

//function 2
int isTheQueueEmpty(int tab[])
{ int j = 0;
  for(int i = 0; i<N; i++) if(tab[i]) j++; if(!j) return 1; return 0;
}


//insert an element into the queue
void enqueue(int tab[], int data)
{ 
    if(isTheQueuefull(tab)){ cout << "Overflow !" << endl;
        return;}
    tab[backIndex++ % N] = End = data; head = tab[frontIndex];
}


//display the elements of  the queue
void display(int tab[])
{  
    if(isTheQueueEmpty(tab)){ cout << "The queue is empty nothing to print" << endl; 
    return;
    }
    for(int i = 0 ; i<N; i++) cout << tab[i] << "   "; cout << "\n";
}

//remove an element from the queue
void dequeue(int tab[])
{
    tab[frontIndex % N] = 0; head = tab[++frontIndex % N];
}



int main()
{
    int tab[N];
    init(tab);
    
    return 0;
}

//g++ -std=c++17 circularQueue.cpp -o p