#include"list.h"  
#include"file.h"
#include<iostream>
template class list<int>;
template class list<struct file>;

template<typename T>
node<T>::node(void)
{
	content=nullptr;
}

template<typename T>
node<T>::node(const T o)
{
	content=new T(o);
}

template<typename T>
node<T>::node(T *o)
{
	content=o;
}
template<typename T>
void list<T>::delete_node(struct node<T>*n)
{

			if(n->pre !=nullptr)
				n->pre->suf=n->suf;
			if(n->suf !=nullptr)
				n->suf->pre=n->pre;
			if (n== head)
				head=n->suf;
			//printf("delete %d \n",o);
			delete n;
			num-=1;
}

template<typename T>
list<T>::list(void)
{
	num=0;
	head=end=nullptr;
}

template<typename T>
list<T>::list(list<T>*o)
{
	num=o->num;
	head=o->head;
	end=o->end;
	o->num=0;
	o->head=o->end=nullptr;
}

template<typename T>
void list<T>::do_all(void f(T&))
{
	node<T> *hi=head;
	while(hi!=nullptr)
	{
		f(*(hi->content));
		hi=hi->suf;
	}

}

template<typename t>
void list<t>::add(const t o)
{
	struct node<t> *n=new struct node<t>(o);
       	n->pre=end;
	if(num)
		end->suf=n;
	else
		head=n;
	end=n;
	num+=1;
}

template<typename t>
void list<t>::add(t* o)
{
	struct node<t> *n=new struct node<t>(o);
       	n->pre=end;
	if(num)
		end->suf=n;
	else
		head=n;
	end=n;
	num+=1;
}

template<typename t>
t* list<t>::pop(int o)
{
	struct node<t>*hi=head;
	t* save=nullptr;
	int i=0;
	while( i<o&& hi!=nullptr)
	{
		i++;
		hi=hi->suf;
	}
	if(hi!=nullptr)
	{

		delete_node(hi);
		save=new t(*(hi->content));

	}
	if (!num)
		end=nullptr;
	return save;

}

template<typename t>
void list<t>::remove(const t o)
{
	node<t>*n=head,*s;
	while(n!=nullptr)
	{
		s=n->suf;
		//puts("Here");
		if( *(n->content) == o)
			delete_node(n);
		n=s;
	}
	if(!num)
		end=nullptr;
}
template<typename t>
t* list<t>::seek(const t* o)
{
	node<t> * a=head;
	while(a!=nullptr)
	{

		if( *(a->content)==*o)
			return a->content;
		a=a->suf;
	}
	return nullptr;
	
}


template<typename t>
int list<t>::nums()
{
	return num;
}

template<typename t>
list<t>::~list()
{
	while(num)
	{
		end=head->suf;
		delete head;
		head=end;
		num-=1;
	}


}

	

	       


