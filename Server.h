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
	bool Parse(Request_HTTP&);
	vector<int> threadPool; 
	vector<ActionThread*> actionthreads; 
	int errors; 
	int requests; 
	int activeThreads = 0; 

	LPCRITICAL_SECTION done_cs, reqs_cs;

public:
	Server();
	~Server();
	Server(const Request_HTTP&);//NJ copy constructor?  
	void doRequest(Request_HTTP&); 
	void done(Request_HTTP&); 
	void reqsLog(string message,Request_HTTP&); //NJ edited 11/16

};
#endif // DEBUG
