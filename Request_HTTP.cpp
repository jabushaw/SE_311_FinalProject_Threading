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
	ID = -2; //RJ added negative standard
}


Request_HTTP::~Request_HTTP()
{
}
