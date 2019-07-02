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

		void operator()() const;
		static void do_something();
		static void do_something_else();
		static void do_something_else_3();

#pragma endregion

	};
} // !threadmanagement

#endif // !THREADMANAGEMENT_H_


