<<<<<<< HEAD
#include <string>
using namespace std;
class Request_HTTP
{
private:
	string URL;
	string IP;
	int ID; //RJ changed from threadID to ID
	//threadID is subscript in vecotr of subclass and negative suggests it's not a valid value
	Request_HTTP();
public:
	Request_HTTP(string, string);
	~Request_HTTP();
	string getURL(){return URL;};
	string getIP(){return IP;};
	string getID(){return ID;};
	void setID(int threadNumber)
	{
		ID = threadNumber; 
	};
	//may need a set URL
};

=======
#include <string>
using namespace std;
class Request_HTTP
{
private:
	string URL;
	string IP;
	int ID; //RJ changed from threadID to ID
	//threadID is subscript in vecotr of subclass and negative suggests it's not a valid value
	Request_HTTP();
public:
	Request_HTTP(string, string);
	~Request_HTTP();
	string getURL(){return URL;};
	string getIP(){return IP;};
	string getID(){return ID;};
	void setID(int threadNumber)
	{
		ID = threadNumber; 
	};
	//may need a set URL
};

>>>>>>> refs/remotes/origin/Take_4
//the only one who can set the id should be the listener class