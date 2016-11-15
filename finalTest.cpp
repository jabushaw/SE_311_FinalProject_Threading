#include "Thread.h"// need file name
#include "Thread.h"//need file name
#include <iostream>
using namespace std;
CppUnit::Test * ThreadTest::suite(){
	CppUnit::TestSuite * suiteOfTests = 
	       new CppUnit::TestSuite("Testing the ThreadTest class");
    suiteOfTests->addTest(new CppUnit::TestCaller<ThreadTest>("ServerTest", &ThreadTest::ServerTest));
	suiteOfTests->addTest(new CppUnit::TestCaller<ThreadTest>("ServerTest2", &ThreadTest::ServerTest2));
	suiteOfTests->addTest(new CppUnit::TestCaller<ThreadTest>("ThreadOK", &ThreadTest::ThreadOK));
	suiteOfTests->addTest(new CppUnit::TestCaller<ThreadTest>("ParseTest", &ThreadTest::ParseTest));
	suiteOfTests->addTest(new CppUnit::TestCaller<ThreadTest>("ReqsTest", &ThreadTest::ReqsTest));
	suiteOfTests->addTest(new CppUnit::TestCaller<ThreadTest>("doRequestTest", &ThreadTest::doRequestTest));
	suiteOfTests->addTest(new CppUnit::TestCaller<ThreadTest>("doneTest", &ThreadTest::doneTest));
	suiteOfTests->addTest(new CppUnit::TestCaller<ThreadTest>("criticalSectionTest", &ThreadTest::criticalSectionTest));
	//empty URL
	//empty IP
	//empty thread
    return suiteOfTests;
}

void ThreadTest::ServerTest(

}

void ThreadTest::ServerTest2(){
	
}

void ThreadTest::ThreadOK(){
	
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