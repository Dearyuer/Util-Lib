#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

// class Underscore{
// private:
// 	int hp;

// public:
// 	void printHp(){
// 		hp = 100;
// 		cout << hp << endl;
// 	}

// };

// int main(){
// 	Underscore _;
// 	_.printHp();
// 	return 0;
// }
class _{
public:
	// _();
	// ~_();
	template <class Type> static void map(Type arr[], unsigned int len,  Type (*iteratee)(const void* value));
};

template <class Type> void _::map(Type arr[], unsigned int len, Type (*iteratee)(const void* value)){
	for(int i = 0; i < len; i++){
		arr[i] = iteratee((void*)&arr[i]);
	}
}


int iteratee(const void* value){
	return (*(int*)value)*2;
}

// int iteratee(const void* value){
// 	return (*(int*)value)*2;
// }

int main(){
	// test();
	int arr[] = {1,2,3,4};
	_::map<int>(arr,4,iteratee);
	// _.test();
	for(int i = 0; i < 4; i++){
		cout << arr[i] << endl;
	}
	return 0;
}