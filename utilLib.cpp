#include <iostream>
#include <cstdio>
#include "utilLib.h"

using namespace std;

// underscore::underscore(){
// 	cout << "Ctor" << endl;
// }

// underscore::~underscore(){
// 	cout << "dCtor" << endl;
// }

template<class type>
void underscore<type>::map(type arr[], unsigned int len, type (*iteratee)(const void* value)){
	for(int i = 0; i < len; i++){
		arr[i] = iteratee((void*)&arr[i]);
	}
}