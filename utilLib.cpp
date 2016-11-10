template <class Type> void _::map(Type arr[], unsigned int len, Type (*iteratee)(const void* value)){
	for(int i = 0; i < len; i++){
		arr[i] = iteratee((void*)&arr[i]);
	}
}