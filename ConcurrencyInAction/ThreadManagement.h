#ifndef THREADMANAGEMENT_H_
#define THREADMANAGEMENT_H_

namespace threadmanagement
{
	class ThreadManagement
	{
	public:
		ThreadManagement();
		virtual ~ThreadManagement();

#pragma region Launching a thread

		void operator()();
		void do_something();
		void do_something_else();

#pragma endregion

	};
} // !threadmanagement

#endif // !THREADMANAGEMENT_H_


