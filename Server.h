#include "Request_HTTP.h"
#include <vector> 
#include <ActionThread.h>
#include <string>
#include <fstream>
#include <windows.h>
using namespace std;
class Server
{
private: 
	vector<string> log; //change this to a file method where every time it's called we add it too the file and update the file and then close it. 
	bool Parse(Request_HTTP&); //RJ changed to class call
	vector<int> threadPool; 
	vector<ActionThread*> actionthreads; //RJ added actionthread* vector
	int errors; 
	int requests; 
	int activeThreads = 0; 

	LPCRITICAL_SECTION done_cs, reqs_cs;

public:
	Server();
	~Server();
	//need to include a copy 
	void doRequest(Request_HTTP&); //RJ added Request_HTTP parameter
	void done(Request_HTTP&); //either pass vector subscript or full HTTP class again
	void reqsLog(string message,Request_HTTP&); //RJ changed to string to write to log and class call
	//reqs log needs to be a file, not in the code - that way if the code crashes we don't loose the request. 
	//outoput to ofstream file
	//reqs log will open it for pending and close it for every request
	//done and reqs log are gonna have to use critical sections - they're only called by other requests

};
#endif // DEBUG
