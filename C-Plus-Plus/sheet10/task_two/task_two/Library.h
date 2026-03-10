#ifndef LIBRARY_H
#define LIBRARY_H
#include "Book.h"
#include <vector>
class Library
{
	//aggregation
public:
	string state;
	vector<Book*> book;
};

#endif // !LIBRARY_H