#include<iostream>
using namespace std;

//Sentinel search for an array of size 5
int SentinelSearch(int A[5], int key){
    //int n = sizeof(A) / sizeof(A[0]);

    int last;
    last = A[5-1];
    A[5-1] = key;

    int i=0;
    while(A[i] != key){
        i++;
    }

    A[5-1] = last;

    if(i < 5-1 || key == A[5-1]){
        return i;
    }else {
        return -1;
    }
}

int main(){
    int A[5] = {70 ,34, 52, 35, 47};
    int k;
    cout<<"Enter key: ";
    cin>>k;

    int result = SentinelSearch(A, k);

    if(result == -1){
        cout<<"Not found";
    } else {
        cout<<"Found at index: "<<result;
    }
}
