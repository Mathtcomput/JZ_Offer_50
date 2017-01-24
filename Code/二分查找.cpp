#include<iostream>
#include<stdlib.h>
#include<Stack>
using namespace std;

//二分查找
bool BinaryResearch(int *data, int num,int size){
	int low = 0;
	int high = size - 1;

	//注意这个临界条件；

	while (low <= high){
		int mid = (low + high) / 2;
		if (num == data[mid]){
			return true;
		}
		else if (num > data[mid]){
			low++;
		}
		else{
			high--;
		}
	}
	return false;
}



int main(){
	int data[10] = { 1, 3, 5, 7, 9, 10, 12, 13, 15, 16 };
	if (BinaryResearch(data, 10, 10)){
		cout << "找到所找的值" << endl;
	}
	system("pause");
	return 0;
}
