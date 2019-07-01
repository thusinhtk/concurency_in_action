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

	void ThreadManagement::operator()()
	{
		do_something();
		do_something_else();
	}

	void ThreadManagement::do_something()
	{
		cout << "Do something" << endl;
	}

	void ThreadManagement::do_something_else()
	{
		cout << "Do something else" << endl;
	}
}
