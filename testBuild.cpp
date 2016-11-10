#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include "utilLib.h"
using namespace std;

int iteratee(const void* value){
	return (*(int*)value)*2;
}

int main(){
	test();
	int arr[] = {1,2,3,4};
	_ test;
	test.map(arr,4,iteratee);
	// _::map(arr,4,iteratee);
	// _.test();
	for(int i = 0; i < 4; i++){
		cout << arr[i] << endl;
	}
	return 0;
}