#include "Request_HTTP.h"
#include <vector> 
#include <ActionThread.h>
#include <string>
#include <fstream>
#include <windows.h>
using namespace std;
//create a defined constant for the vector here #DEFINE VECUPDATE = 1
class Server
{
private: 
	vector<string> log; //REMOVE THIS and replace with a ofstream 
	bool Parse(Request_HTTP& //we need a variable here);
	vector<int> threadPool; //remove this and name the second vector threadPool
	vector<ActionThread*> actionthreads; 
	int errors; 
	int requests; 
	int activeThreads = 0; //change initialization to constructor
	//bool startThread(ActionThread* thread); 

	LPCRITICAL_SECTION done_cs, reqs_cs;

public:
	Server();
	~Server();
	Server(const Request_HTTP&);//Remove this
	bool doRequest(Request_HTTP&); 
	void done(Request_HTTP&); 
	void reqsLog(string message,Request_HTTP&); //NJ edited 11/16
	void reqsLog(string message); //
	
};
#endif // DEBUG
