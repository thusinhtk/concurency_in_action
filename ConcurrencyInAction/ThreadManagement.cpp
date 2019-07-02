#include "stdafx.h"
#include "ThreadManagement.h"
#include <iostream>

using namespace std;

namespace threadmanagement
{
	ThreadManagement::ThreadManagement()
	{
	}


	ThreadManagement::~ThreadManagement()
	{
	}

	void ThreadManagement::operator()() const
	{
		do_something();
		do_something_else();
	}

	void ThreadManagement::do_something()
	{
		cout << "Do something 1" << endl;
	}

	void ThreadManagement::do_something_else()
	{
		cout << "Do something else 2" << endl;
	}
	void ThreadManagement::do_something_else_3()
	{
		cout << "Do something else 3" << endl;
	}
}
