#include"file.h"
int main(void)
{
	string name="test.cpp", content="Hello";
	file test(name,content);
	cout<<"test'd name is "<<test.name<<endl;
	cout<<"test's content is "<<test.content<<endl;
	cout<<"rename"<<endl;
	test.rename("Hello");
	cout<<"test'd name is "<<test.name<<endl;
	cout<<"Add content to the file"<<endl;
	string add=", Where are you come from?";
	test.write(add,1);
	cout<<"test's content is "<<test.content<<endl;
	cout<<"Check the == method"<<endl;
	file hi("Hello","");
	if(test==hi)
	cout<<"Yes, they are same"<<endl;
	else
	{
	cout<<"No, soome problem here"<<endl;
	cout<<"hi.name:"<<hi.name;
	if(hi.name!=test.name)
		cout<<"why"<<endl;
	}
	return 0;



}
