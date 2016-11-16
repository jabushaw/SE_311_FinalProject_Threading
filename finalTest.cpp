#include "Server.h"
#include <iostream>
using namespace std;
CppUnit::Test * ThreadTest::suite(){
	CppUnit::TestSuite * suiteOfTests = 
	       new CppUnit::TestSuite("Testing the ThreadTest class");
    suiteOfTests->addTest(new CppUnit::TestCaller<ThreadTest>("ServerTest", &ThreadTest::ServerTest));
	suiteOfTests->addTest(new CppUnit::TestCaller<ThreadTest>("ServerTest2", &ThreadTest::ServerTest2));
	suiteOfTests->addTest(new CppUnit::TestCaller<ThreadTest>("ParseTest", &ThreadTest::ParseTest));
	suiteOfTests->addTest(new CppUnit::TestCaller<ThreadTest>("ReqsTest", &ThreadTest::ReqsTest));
	suiteOfTests->addTest(new CppUnit::TestCaller<ThreadTest>("doRequestTest", &ThreadTest::doRequestTest));
	suiteOfTests->addTest(new CppUnit::TestCaller<ThreadTest>("doneTest", &ThreadTest::doneTest));
	suiteOfTests->addTest(new CppUnit::TestCaller<ThreadTest>("criticalSectionTest", &ThreadTest::criticalSectionTest));
	suiteOfTests->addTest(new CppUnit::TestCaller<ThreadTest>("EmptyIPAddress", &ThreadTest::emptyIP));
	suiteOfTests->addTest(new CppUnit::TestCaller<ThreadTest>("FullIP", &ThreadTest::fullIP));
	suiteOfTests->addTest(new CppUnit::TestCaller<ThreadTest>("EmptyURL", &ThreadTest::emptyURL));
	suiteOfTests->addTest(new CppUnit::TestCaller<ThreadTest>("FullURL", &ThreadTest::fullURL));
	suiteOfTests->addTest(new CppUnit::TestCaller<ThreadTest>("EmptyThread", &ThreadTest::emptyThread));
	suiteOfTests->addTest(new CppUnit::TestCaller<ThreadTest>("FullThread", &ThreadTest::fullThread));

    return suiteOfTests;
}

void ThreadTest::ServerTest(

}

void ThreadTest::ServerTest2(){
	
}

void ThreadTest::ParseTest(){
	
}

void ThreadTest::ReqsTest(){
	
}

void ThreadTest::doRequestTest(){
	
}

void ThreadTest::doneTest(){
	
}

void ThreadTest::cricitcalSectionTest(){
	
}


//NJ Added IP, URL, and Thread tests to ensure none were empty (or that they were....)
void ThreadTest::emptyIP(
	CPPUNIT_ASSERT(IP == "" || IP == NULL);
}

void ThreadTest::fullIP(
	CPPUNIT_ASSERT(IP != "" || IP != NULL);
}

void ThreadTest::emptyURL(
	CPPUNIT_ASSERT(URL == "" || URL == NULL);
}

void ThreadTest::fullURL(
	CPPUNIT_ASSERT(URL != "" || URL != NULL);
}

void ThreadTest::emptyThread(
	CPPUNIT_ASSERT(ID = -2);
}

void ThreadTest::fullThread(
	CPPUNIT_ASSERT(ID != -2);
}