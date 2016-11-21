//action thread

#include "Request_HTTP.h"
#include <vector> 
#include <ActionThread.h>
#include <string>
#include <fstream>
#include <windows.h>
#include <ctime>
using namespace std;

class ActionThread
{
	private: 
	bool status; //are the threads wating or not waiting
	public: 
		ActionThread(); 
		~ActionThread(); 
};
#endif // DEBUG


	bool waiting or not waiting 
	thread handle and ID
	

constructor
	creates threads
	saves thread handle and thread ID (Not the same as ID)
	
getfile

doStatus

stand alone function
	when API returns Dword
	while (true) - infinite loop
		do something
		wait.... this is what RESUME terminates in Server
		if(done)
				return