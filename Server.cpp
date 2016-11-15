#include "Server.h"
#include <vector>



Server::Server(string IP,string URL)
{
	IPAddress = IP;//remove
	URLAddress = URL;//remove

}//remove


Server::~Server()
{
	#ifdef SYNCHRONIZATION//remove
		DeleteCriticalSection(done_cs);
		DeleteCriticalSection(reqs_cs
		//should also go through thread pool and delete everyone
		//may need to kill threads off first -
	#endif//remove
}

void Server::doRequest(IP, URL, threadID)
{
	parse(IP, URL, threadID); //parameter change
	reqsLog(threadID, IP);//parameter change
}

bool Server::Parse(IP, URL, threadID) // parses signature changes
{
	//increment requests
	//send request and get no response - die here
	if (IP == NULL || URL == NULL)
	{
		//increment error
		return false;
	}
	//make sure IP is not of incorrect length
	if (IP.length() > 15)
	{
		//increment errors
		return false;
	}
	else
	{
		//here is where we start at the URL and go backwards till you find the first single slash - 
		//empty string from the first slash and forward
		//http:/www.vcsu.edu/ ALL THIS GOES
		//empty string ->index.htm
		//requests, erorrs and activeThreads
		//declare how many threads are currently active
		//increment activeThreads
		return true;
	}
	
}

void Server::done(string thread)//no string - needs request HTTP or ID
{
	#ifdef SYNCHRONIZATION//remove
		EnterCriticalSection(done_cs);
	#endif//remove
		errors++;//remove
		//announce that thread such and such finished
	#ifdef SYNCHRONIZATION//remove
		LeaveCriticalSection(done_cs);
	#endif//remove
	
	//decrement activeThreads
}

void Server::reqsLog(string thread, string IP)
{
	#ifdef SYNCHRONIZATION//remove
		EnterCriticalSection(reqs_cs);
	#endif//remove
		errors++;//remove
	#ifdef SYNCHRONIZATION//remove
		LeaveCriticalSection(reqs_cs);
	#endif//remove
	log(thread, IP); 
	
	//log.open and write the message
	//apppend the id url and ip to the log file
}

void Server::threadPool() //REMOVE ENTIRE METHOD
{
	///we gonna create threads here
}
