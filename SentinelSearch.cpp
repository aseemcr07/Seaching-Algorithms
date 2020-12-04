#include<iostream>
using namespace std;

//Sentinel search for an array with n elements
int SentinelSearch(int A[], int n, int key){

    int last;
    last = A[n-1];
    A[n-1] = key;

    int i=0;
    while(A[i] != key){
        i++;
    }

    A[n-1] = last;

    if(i < n-1 || key == A[n-1]){
        return i;
    }else {
        return -1;
    }
}

int main(){
    int A[] = {70 ,34, 52, 35, 47};
    int k;
    cout<<"Enter key: ";
    cin>>k;
    int len = sizeof(A)/sizeof(A[0]);
    int result = SentinelSearch(A, len, k);

    if(result == -1){
        cout<<"Not found";
    } else {
        cout<<"Found at index: "<<result;
    }
}
