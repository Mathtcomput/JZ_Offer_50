#  第三题  #
## 查找数组中指定元素 代码##
```cpp
#include<iostream>
#include<stdlib.h>
using namespace std;

bool IsHavenum(int Matrix[5][5],  int wantedNum){
	int m = 0;
	int n = 4;
	while (m<=4&&n>=0){
		if (Matrix[m][n] == wantedNum){
			return true;
		}
		else if (Matrix[m][n] > wantedNum){
			n--;
		}
		else {
			m++;
		}
	}
	return false;
}


int main(){
	int matrix[5][5] = { { 1, 2, 3, 5, 6 }, { 2, 3, 4, 6, 7 }, { 3, 4, 5, 7, 8 }, { 4, 5, 6, 8, 9 }, { 5, 6, 7, 9, 10 } };
	int num = 12;
	cout << IsHavenum(matrix, num) << endl;
	system("pause");
	return 0;
}
```

## 本题考点 ##
1. 二维数组在内存中占据连续的空间，按行存储
2. 分析问题的能力，从右上角开始分析。
## 注意事项 ##
