#include "Request_HTTP.h"



Request_HTTP::Request_HTTP()
{
	URL = " ";
	IP = " ";
}

Request_HTTP::Request_HTTP(string newIP, string newURL)
{
	IP = newIP;
	URL = newURL;
	Server stuff; //kill these 2 lines
	stuff(IP, URL);// kill these 2 lines
	//set threadID to negative by default
}


Request_HTTP::~Request_HTTP()
{
}
