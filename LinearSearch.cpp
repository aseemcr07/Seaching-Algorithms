#include<iostream>
using namespace std;

int LinearSearch(int nums[], int n, int key)
{
    int i;
    for (i=0; i<n; i++){
        if (nums[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
	int n;
	cout<<"Enter num of elements in array: ";
	cin>>n;
	int A[n];
	cout<<"Enter elements:"<<endl;
	for(int i=0; i<n; i++){
		cin>>A[i];
	}
	int key;
	cout<<"Enter element to be found: ";
	cin>>key;

	int result = LinearSearch(A, n, key);
	if(result == -1){
		cout<<"Not found";
	}else{
		cout<<"Found at index: "<<result;
	}
}
