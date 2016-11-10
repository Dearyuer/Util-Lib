#ifndef UNDERSCORE_H
#define UNDERSCORE_H
template<class type>
class underscore{
public:
	// underscore();
	// ~underscore();
	void map(type arr[], unsigned int len, type (*iteratee)(const void* value));
};
#endif