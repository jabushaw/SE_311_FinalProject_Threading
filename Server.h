#include "Request_HTTP.h"
#include <vector> 
#include <ActionThread.h>
#include <string>
#include <fstream>
#include <windows.h>
using namespace std;
class Server //removed friend class
{
private: 
	string IPAddress, URLAddress; // we don't need these here
	vector<string> log; //change this to a file method where every time it's called we add it too the file and update the file and then close it. 
	bool Parse(string IP, string URL, int threadID); //bool Parse(Request_HTTP&)
	vector<int> threadPool; //we want a vector of ActionThread* (action thread pointers)
	//we may need two vectors
	int errors; // added this variable for the critical sections
	//create requests variable - should count total amount of requests
	//create int activeThreads that starts at 0

	#ifdef SYNCHRONIZATION //REMOVE
		LPCRITICAL_SECTION done_cs, reqs_cs;
	#endif// REMOVE
public:
	Server();
	~Server();
	Server(string, string); // remove this constructor
	//need to include a copy 
	void doRequest(); //pass the class here again 
	void done(string IP, string URL); //either pass vector subscript or full HTTP class again
	void reqsLog(int threadID, string IP); //string that say's successfully sent it - his only job is to write to the log. Two parameters - String message and request_HTTP
	//reqs log needs to be a file, not in the code - that way if the code crashes we don't loose the request. 
	//outoput to ofstream file
	//reqs log will open it for pending and close it for every request
	//done and reqs log are gonna have to use critical sections - they're only called by other requests

};
#endif // DEBUG
