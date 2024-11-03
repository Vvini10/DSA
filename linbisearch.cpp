#include<iostream>
#include<algorithm>
using namespace std;
int linearsearch(int a[],int key,int n){
    for(int i=0;i<n;i++){
        if(a[i]==key){
            return i;
        }
    }
    return -1;
}
int binarysearch(int a[],int key,int n){
    sort(a,a+n);
    cout<<"Sorted array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
    int high=n-1;
    int low=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}

int main(){
    int n,choice,ele,key,x;
    cout<<"*************************MENU*************************\n1. Linear Search\n2. Binry Search\n3. Exit\n";
    cout<<"Enter the size of list: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
            cin>>arr[i];
    }
    do{
        cout<<"Enter your choice: ";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1:
                cout<<"Enter the target element: ";
                cin>>key;
                x=linearsearch(arr,key,n);
                if(x!=-1){
                    cout<<"Element found at index "<<x<<endl;
                }
                else{
                    cout<<"Element not in list"<<endl;
                }
                break;
            case 2:
                cout<<"Enter the target element: ";
                cin>>key;
                x=binarysearch(arr,key,n);
                if(x!=-1){
                    cout<<"Element found at index "<<x<<endl;
                }
                else{
                    cout<<"Element not in list"<<endl;
                }
                break;
            case 3:
                cout<<"EXIT"<<endl;
                break;
            default:
                cout<<"INVALID choice\n";
        }
    }while(choice!=3);
    return 0;
}