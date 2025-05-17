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
