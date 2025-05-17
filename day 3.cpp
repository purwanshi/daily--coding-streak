day 3✅ problem Given an array of strictly the characters 'R', 'G', and 'B', segregate the values of the array so that all the Rs come first, the Gs come second, and the Bs come last. You can only swap elements of the array.
For example, given the array ['G', 'B', 'R', 'R', 'B', 'R', 'G'], it should become ['R', 'R', 'R', 'G', 'G', 'B', 'B']💥
	
#include<iostream>
#include<string>
using namespace std;

void rgb(char arr[],int size){
	int low=0;
	int mid=0;
	int high=size-1;
	
	while(mid<=high){
		if(arr[mid]=='R')
		{
			swap(arr[low],arr[mid]);
			low++;
			mid++;
		}
		else if(arr[mid]=='G'){
			mid++;
		}
		else if(arr[mid]=='B'){
			swap(arr[mid],arr[high]);
			high--;
		}
	}
}

int main(){
	char c[]={'G','R','B','R','B','G'};
	int size = sizeof(c)/sizeof(c[0]);
	rgb(c,size);
	for(int i=0;i<size;i++){
		cout<<c[i]<<"";
	}
	cout<<endl;
	return 0;
}
