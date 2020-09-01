#include"file.h"
#include<iostream>
//using std namespace;
//extern char *PATH;

//char space[100];
//getwcd(pace,100);
//PATH=new string(pace);
file::file(const string names, const string contents/*, char *owerner, char right*/)
{
        //getcwd(space,100);
	//path=space;
	name=names;
	content=contents;
}

void file::rename(const string names)
{
	name=names;
}

void file::write(string array,char mode)
{
	if(mode)
		content+=array;
	else
		content=array;
}

char file::operator==(const struct file &o)const
{
	return o.name==name;
}
