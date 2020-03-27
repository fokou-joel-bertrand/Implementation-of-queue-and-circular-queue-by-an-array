#include<iostream>
#define N 5
using namespace std;

//queue variables
int frontIndex = 0;
int backIndex = 0;
int head = 0;
int End = 0;

//Create or initialize a queue
void init(int tab[])
{
    for(int i = 0; i<N; i++) tab[i] = 0;
}


//functions for checking the state of the queue 
// function 1
int is_the_queue_full(int tab[])
{ 
    if(tab[N-1]) return 1; return 0;
}
//function 2
int is_the_queue_empty(int tab[])
{   
    int j = 0;
    for(int i = 0; i<N; i++) if(tab[i]) j++; if(!j) return 1; return 0;
}


//insert an element into the queue
void enqueue(int tab[], int data)
{
    if(is_the_queue_full(tab)) cout << "Overflow Overflow !!!!!" << endl;
    else
    tab[backIndex++] = End = data;  head = tab[frontIndex];
}

//remove an element from the queue
void dequeue(int tab[])
{
    if(is_the_queue_empty(tab)) cout << "The queue is empty nothing to pop" << endl;
     else
     {tab[frontIndex] = 0; head = tab[++frontIndex];}
}

//display the elements of  the queue
void display(int tab[])
{
    if(is_the_queue_empty(tab)) cout << "The queue is empty nothing to display" << endl;
    else
    for(int i = frontIndex; i<backIndex; i++) cout << tab[i] << "  ";
}


int main(void)
{
    int tab[N];
    init(tab);

    return 0; 
}

// g++ -std=c++17 Queue.cpp -o p
