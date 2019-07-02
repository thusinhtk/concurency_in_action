// ConcurrencyInAction.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <thread>
#include <chrono>         // std::chrono::seconds

#include "ThreadManagement.h"

using namespace std;
using namespace threadmanagement;

int main()
{
#pragma region Launching a thread

	// -------- Way 1 - Pass an instance of a class  --------------
	ThreadManagement m_thread_class;
	std::thread my_Thread1(m_thread_class);
	//std::thread my_Thread(ThreadManagement()); // => Wrong, because it will create std::thread object rather than a new thread.
	my_Thread1.detach(); // Need to join before exiting to avoid error

	// -------- Way 2 - Using lambda expression  --------------
	std::thread my_Thread2([]{
		ThreadManagement::do_something_else_3();
		ThreadManagement::do_something_else();
	});

	my_Thread2.detach();

	std::this_thread::sleep_for(std::chrono::seconds(1));

#pragma endregion

    return 0;
}
