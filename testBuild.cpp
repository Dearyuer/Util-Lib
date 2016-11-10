#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include "utilLib.h"
using namespace std;

// int iteratee(const void* value){
// 	return (*(int*)value)*2;
// }
char iteratee(const void* value){
	return (*(char*)value)-1;
}
int main(){
	char arr[] = "tees";
	_::map<char>(arr,4,iteratee);
	// _.test();
	for(int i = 0; i < 4; i++){
		cout << arr[i] << endl;
	}
	return 0;
}