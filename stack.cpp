#include<iostream>
using namespace std;
int n=20,stack[20],top=-1;
//Push operation
void push(int val){
    if (top>=n-1){
        cout<<"Stack Overflow"<<endl;
    }
    else{
        top++;
        stack[top]=val;
        cout<<"Element inserted!"<<endl;
    }
}
//POP operation
void pop(){
    if (top<=-1){
        cout<<"Stack Underflow"<<endl;
    }
    else{
        top--;
        cout<<"Element popped!"<<endl;
    }
}
//Display Function

void display(){
    if (top>=0){
        for(int i=top;i>=0;i--){
            cout<<stack[i]<<endl;
        }
    }
    else{
        cout<<"Stack is empty!"<<endl;
    }
}

int main(){
    int value,choice;
    cout<<"*******************MENU*******************\n1. Push Operation\n2. Pop Operation\n3. Display Elements\n4. Exit"<<endl;
    do{
        cout<<"Enter choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter element to be pushed: ";
                cin>>value;
                push(value);
                break;
                
            case 2:
                pop();
                break;
                
            case 3:
                display();
                break;
                
            case 4:
                cout<<"EXIT!"<<endl;
                break;
            
            default:
                cout<<"INVALID Choice!"<<endl;
    }}while(choice!=4);
    return 0;
}