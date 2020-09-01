template<typename T>
struct node{
	struct node* pre=nullptr,*suf=nullptr;
	T * content;
	node(void);
	node(const T);
	node(T *);

};

//if it is ok for arbitrary type variable in one list?
template<typename T>
class list{

	 private:
		int num;
		struct node<T> *head,*end;
		void delete_node(struct node<T>*);
	 public:
		list(void);
		list(list*);
		void do_all(void f(T&));
		void add(const T );
		void add(T *);
		T* pop(int);
		void remove(const T);
		T* seek(const T*);
		
		int nums();
		~list();
 };

