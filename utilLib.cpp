#include <iostream>
#include <cstdio>
#include "utilLib.h"

using namespace std;

void test(){
	cout << "test" << endl;
}

// _::_(){
// }

// _::~_(){
// }

template <class Type>
void _::map(Type arr[], unsigned int len, Type (*iteratee)(const void* value)){
	for(int i = 0; i < len; i++){
		arr[i] = iteratee((void*)&arr[i]);
	}
}



// template <class A_Type> A_Type calc<A_Type>::multiply(A_Type x,A_Type y)
// {
//   return x*y;
// }
// template <class A_Type> A_Type calc<A_Type>::add(A_Type x, A_Type y)
// {
//   return x+y;
// }