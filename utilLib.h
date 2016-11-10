class _{
public:
	template <class Type> static void map(Type arr[], unsigned int len,  Type (*iteratee)(const void* value));
};
#include "utilLib.cpp"