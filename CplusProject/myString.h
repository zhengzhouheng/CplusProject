#pragma once
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

class myString:public std::string
{
public:
	myString() :string() {}
	~myString();


private:

};

myString::myString()
{
}

myString::~myString()
{
}