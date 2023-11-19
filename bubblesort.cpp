#include <iostream>
using namespace std;
int main(){
    int n;
    int large ,pos;
    cout << "enter the no. of elements: ";
    cin>> n;
    int arr[n];
    for ( int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "the array you entered: ";
    for ( int i=0; i<n;i++){
        cout << arr[i];
    }
    cout << endl;
    cout << "1.bubble sort."<< endl;
    cout << "2.selection sort."<< endl;
    cout << "3.insertion sort."<<endl;
    int x;
    cout << "enter the opion: ";
    cin >> x;
    //bubble sort
    if (x==1){
        int temp;
        for ( int i =0;i<n-1;i++){
            for (int j =i+1;j<n;j++){
                if (arr[i]>arr[j]){
                    temp=arr[j];
                    arr[j]=arr[i];
                    arr[i]=temp;
                }
            }
        }
        cout << "after bubble sort: ";
        for ( int i=0; i<n;i++){
            cout << arr[i];
        }
    }
    //selection sort
    else if (x==2){
        for ( int i=n-1;i>=0;i--){
            large=arr[0];
            pos=0;
            for ( int j=0;j<=i-1;j++){
                if (arr[j]>large){
                    large = arr[j];
                    pos=j;
                }
                arr[pos]=arr[i];
                arr[i]=large;
            }
        }
        cout << "after selection sort: ";
        for ( int i=0; i<n;i++){
            cout << arr[i];
        }
    }
    //insretion sort 
    else if (x==3){
        int small,key;
        for (int i=1;i<n;i++){
            key=arr[i];
            for (int j=i-1;j>=0;j--){
                if (arr[j]>key){
                    small=arr[i];
                    arr[i]=arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=small;
                }
            }
        }
        cout << endl;
        cout << "after insertion sort: ";
        for ( int i=0; i<n;i++){
            cout << arr[i];
        }
    }
}
