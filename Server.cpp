#include "Server.h"
#include <vector>


//RJ removed string, string constuctor
Server::~Server()
{
		DeleteCriticalSection(done_cs);
		DeleteCriticalSection(reqs_cs); 
		threadPool.clear(); //RJ clear the thread pool
		activeThreads.clear(); //RJ clear the thread pool
		//may need to kill threads off first -
}

void Server::doRequest(Request_HTTP&)//RJ Changed to class call
{
	parse(Request_HTTP&); //RJ change to Request_HTTP&
	reqsLog(message, Request_HTTP&);//RJ change parameters
}

bool Server::Parse(Request_HTTP&) // RJ change to Request_HTTP&
{
	requests++; 
	//send request and get no response - die here
	if (IP == NULL || URL == NULL)
	{
		errors++; 
		return false;
	}
	//make sure IP is not of incorrect length
	if (IP.length() > 15)
	{
		errors++; 
		return false;
	}
	else
	{
		int x = URL.length(); 
		for(int i = x; i >=0; i--)
		{
			if(URL[i] == "\") 
			{
				
			}//ASK CURT ABOUT LONG URL'S
		}
			
		//here is where we start at the URL and go backwards till you find the first single slash - 
		//empty string from the first slash and forward
		//http:/www.vcsu.edu/ ALL THIS GOES
		//empty string ->index.htm
		//requests, erorrs and activeThreads
		activeThreads++; 
		cout << "Active Threads: " << activeThreads << "\n"; 
		return true;
	}
	
}

void Server::done(Request_HTTP&)//RJ changed to class call
{
	EnterCriticalSection(done_cs);
	cout << "Thread " << ID << "has finished. \n"; 
	LeaveCriticalSection(done_cs);
	--activeThreads; 
}

void Server::reqsLog(string thread, string IP)
{
	EnterCriticalSection(reqs_cs);
	LeaveCriticalSection(reqs_cs);
	log(thread, IP); 
	
	//log.open and write the message
	//apppend the id url and ip to the log file
}
