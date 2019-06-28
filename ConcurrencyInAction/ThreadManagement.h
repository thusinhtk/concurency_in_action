#pragma once
class ThreadManagement
{
public:
	ThreadManagement();
	virtual ~ThreadManagement();

#pragma region Launching a thread

	void operator()() const;
	void do_something();
	void do_something_else();

#pragma endregion

};

