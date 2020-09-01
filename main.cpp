#include"list.h"
#include"file.h"
void cp(list<file>&a,string &  s,string& name)
{
	file *o=new file(s,"");
	file *ss=a.seek(o);
	if (ss==nullptr)
	{
		cout<<"No file "+s<<endl;
		return ;
	}

	file *oo=new file(name, ss->content);
	a.add(oo);

	delete o;

}

void f(file & o)
{
	cout<<o.name<<endl;
	//cout<<o.content<<endl;

}

void ls(list<file>&a)
{
	putchar('\n');
 	a.do_all(f);
	if(a.nums()==0)
		cout<<"Not file"<<endl;
}
void rm(list<file>&a,string& name)
{
	file* o=new file(name,"");
	a.remove(*o);
	delete o;

}
void set(list<file>&a,string& name)
{
	static char space[100];
	string content="";
//	while(getchar()!='\n')
//		continue;
	//cout<<"Enter file content"<<endl;
	//while((getline(cin,in))&&in[0]!='\n')
	char re=0;
	putchar('\n');
	while(fgets(space,100,stdin))
	{
		if(space[0]=='\n')
			re+=1;
		else
			re=0;

		if(re==2)
			break;
		//cout<<"accept:"<<space<<endl;
		content+=space;
	}
	
	file *oo=new file(name,content);
	a.add(oo);
	
	/*
	//test
	puts("I am here");
	cout<<endl;
	cout<<"File name:"<<oo->name<<endl;
	cout<<"File content:"<<oo->content<<endl;
	cout<<"List num:"<<a.nums()<<endl;


*/
	//cout<<oo->content;
	cout<<endl<<"Set up "<<name<<endl<<endl;
//	a.do_all(f);


}	

void read(list<file>&a,string& name)
{
	file * o=new file(name,""),*d;
	d=a.seek(o);
	if(d!=NULL)
	{
		//cout<<"content:"<<endl;
		cout<<endl<<d->content<<endl;
	}
	else
		cout<<"not "<<name<<" file\n";
	delete o;

}
void in(string &o)
{
	cin>>o;
	while(getchar()!='\n')
		continue;
}
int main(void)
{
	string room,name;
        string command[]={"cp","rm","set","read","ls"};
	list<file> sys;
	char i,re;
	while(1)
	{
		i=0;
		cin>>room;
		re=sizeof(command)/sizeof(string);
		for(i=0;i<re;i++)
			if (command[i]==room)
				break;
	//	printf("i=%d\n",i);
		switch(i){
			case 0:{
				cin>>name;
				string name1;
				in(name1);
				cp(sys,name,name1);
				break;
			       }
			case 1:
			       in(name);
				rm(sys,name);
				break;
			case 2:
			//	puts("I am in");
			       in(name);
			  //     puts("I am here");
			       set(sys, name);
			    //   cout<<"Hello, I return."<<endl;
			       break;

			case 3:
			       in(name);
			       read(sys,name);
			       break;
			case 4:
			       ls(sys);
			       break;
			default:
			       printf("cp source_name destination_name\n\nrm file_name\n\nset file_name\n\nread file_name\n\nls\n\n");
		};
		//while(getchar()!='\n')
		//		continue;
		//cout<<"new start"<<endl;

	}
}




		 
