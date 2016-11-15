#pragma once // don't need
#include <string>
#include <thread> // don't need
#include "Server.h" //don't need
using namespace std;
class Request_HTTP
{
private:
	string URL;
	string IP;
	int threadID; /// change the name to something else JR and set it too something negative -- change name to index
	//threadID is subscript in vecotr of subclass and negative suggests it's not a valid value

public:
	Request_HTTP();//move the default to private
	Request_HTTP(string, string);
	~Request_HTTP();
		//get string URL
	// get String IP
	//get ThreadID
	//set thread ID
	//complete these 4 ^^ in the header
};

//the only one who can set the id should be the listener class