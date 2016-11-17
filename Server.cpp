#include "Server.h"
#include <vector>

//need to build a constuctor again.....
//set activeThreads, requests and errors to 0 here
//initialize activethread vector to size 16
//go through loop and intialize it to 0-15
//constructor should call critical sections and THEN reqslog



Server::~Server()
{
		DeleteCriticalSection(done_cs);
		DeleteCriticalSection(reqs_cs); 
		threadPool.clear(); 
		activeThreads.clear(); 
		//may need to kill threads off first -
}

void Server::doRequest(Request_HTTP&)
{
	parse(Request_HTTP&);
	//if parse call request log and call startThread and return true
	//if(parse(Request_HTTP&)) {start thread return true}
	
	string message = "Thread ID: " << ID  << "URL: " << URL << "IP: " << IP << " \n"; //NJ added 11/16
	reqsLog(message, Request_HTTP&);
	//return false
}

bool Server::Parse(Request_HTTP&) 
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
	else //remove else 
	{
		int x = URL.length(); 
		for(int i = x-1; i >=0; i--)
		{
			if(URL[i] == "/" ) 
			{
				
			}//ASK CURT ABOUT LONG URL'S
			
			//sample URL http://goober.vcsu.edu/
			//start loop at character 8 and find the first forward slash
			//substring from forward slash (x,500); 
		}
			
		//here is where we start at the URL and go backwards till you find the first single slash - 
		//empty string from the first slash and forward
		//http:/www.vcsu.edu/ ALL THIS GOES
		//empty string ->index.htm
		//requests, erorrs and activeThreads
		//call startThread and move last two lines to startThread method
		activeThreads++; 
		cout << "Active Threads: " << activeThreads << "\n"; 
		return true;
	}
	
}

void Server::done(Request_HTTP&)
{
	EnterCriticalSection(done_cs);
	cout << "Thread " << ID << "has finished. \n"; //Does visual studio use concatenation instead of puto? 
	// we need to cast ID as a string. 
	--activeThreads; 
	LeaveCriticalSection(done_cs);
}

void Server::reqsLog(message, Request_HTTP&)
{
	EnterCriticalSection(reqs_cs);
	LeaveCriticalSection(reqs_cs);//move to the bottom of this method
	log(thread, IP); //Delete this....
	
	//NJ added 11/16
	ofstream logFile; //have to open for append
	//figure out how to add a date and time stamp before the message and then like 6 blank spaces
	logFile.open("ThreadLog.txt"); 
	logFile << message ; 
	logFile.close(); 
}

void Server::reqsLog(message)
{
	// This is where the constructor should call when its originally opening up
	//should append date and time and then the message here
	EnterCriticalSection(reqs_cs);
	LeaveCriticalSection(reqs_cs);//move to the bottom of this method
	log(thread, IP); //Delete this....
	
	//NJ added 11/16
	ofstream logFile; //have to open for append
	//figure out how to add a date and time stamp
	logFile.open("ThreadLog.txt"); 
	logFile << message ; 
	logFile.close(); 
}

//action thread
//search threadPool for idle thread
//look through vector
//call method in ActionThread that say's "You busy?" first one he finds that isn't then it gets sent 
//if all threads are busy then who cares? - abort it
//call an intialization routine - not intializing the threads but call ActionThread.getStatus or doStatus
//Resume

