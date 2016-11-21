#include <iostream>
#include <string>
#include "Request_HTTP.h"
#include "Server.h"

using namespace std;

int main() {

	string URL;
	string IP;
	cin << URL;
	cin << IP;
	Server Data;
	Server.DoRequest();


	return 0;
}