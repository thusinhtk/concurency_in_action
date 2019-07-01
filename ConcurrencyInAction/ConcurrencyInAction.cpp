// ConcurrencyInAction.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <thread>

#include "ThreadManagement.h"

using namespace std;
using namespace threadmanagement;

int main()
{
#pragma region Launching a thread

	ThreadManagement m_thread;
	std::thread my_Thread(m_thread);

	//my_Threadmy_Thread.join(); // Need to join before exiting to avoid error

#pragma endregion

    return 0;
}

