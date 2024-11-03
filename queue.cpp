#include<iostream>
using namespace std;
int n=20,queue[20],rear=-1,front=-1;

//enqueue operation
void enqueue(int val){
    if (rear>=n-1){
        cout<<"Queue overflow"<<endl;
    }
    else{
        if(front==-1){
            front=0;
        }
        rear++;            
        queue[rear]=val;
    }
}

//dequeue operation
void dequeue(){
    if(front==-1||front>rear){
        cout<<"Queue Underflow"<<endl;
    }
    else{
        front++;
        cout<<"Element Removed!"<<endl;
    }
}

//Display function
void Display(){
    if(front==-1){
        cout<<"Queue is empty"<<endl;
    }
    else{
        for(int i=front;i<=rear;i++){
            cout<<queue[i]<<endl;
        }
    }
}

int main(){
    int choice,value;
    cout<<"*************************MENU*************************\n1. Enqueue Operation\n2. Dequeue Operation\n3. Display Elements\n4. Exit"<<endl;
    do{
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter element: ";
                cin>>value;
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                Display();
                break;
            case 4:
                cout<<"EXIT"<<endl;
                break;
            default:
                cout<<"INVALID Choice!"<<endl;
        }
    }while(choice!=4);
    return 0;
}