#include "Request_HTTP.h"
#include <vector> 
#include <ActionThread.h>
#include <string>
#include <fstream>
#include <windows.h>
#include <ctime>
using namespace std;
#DEFINE VECUPDATE  1

class Server
{
private: 
	bool Parse(Request_HTTP& doMe);
	vector<ActionThread*> threadPool; 
	int errors; 
	int requests; 
	int activeThreads; //changed initialization to constructor nw rg 11/17/16
	//bool startThread(ActionThread* thread); 

	LPCRITICAL_SECTION done_cs, reqs_cs;

public:
	Server();
	~Server();
	bool doRequest(Request_HTTP&); 
	void done(Request_HTTP&); 
	void reqsLog(string message,Request_HTTP&); //NJ edited 11/16
	string getTime();
	
};
#endif // DEBUG
