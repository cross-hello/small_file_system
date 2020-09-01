#include<unistd.h>
//#include"string.h"
#include<iostream>
using namespace std;
//char pace[100];
//string *PATH;

struct file{
//	string path;     // /usr/hi/
	string  name;     // hello.ooo
	//char * owerner;  // root
	//char right;      // 0777
	string content;   // Hello\n, welcome come to here.\0
//	int pointer=0;
	file(const string names,const string  contents/*, char *owener=nullptr,char right=0777*/);
	void rename(const string names);
	void write(string array,char mode=1);//write 0 append 1 
	char operator==( const struct file &) const;
};

