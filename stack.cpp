 C++

struct Stack{
   struct Link{
   void * data;
   Link  * next;
   void initialize(void*dat,Link*nxt);
		}*head  ;
		void initialize();
		void push(void*dat);
		void* peek();
		void *pop();
		void cleanup();
};
Stack：：Link::initialize(void*dat,Link*nxt){
data =dat;
next= nxt;
}
void Stack::initialize(){head=0;}
void* Stack::push(void*dat){
	Link* newLink =new Link;
	newLink->initialize(dat,head);
	head= newLink;
}
void* Stack ::peak(){
	require(head!= 0,"Stack empty");
	return head->data;
}
void* Stack ::pop(){
	if(head==0) return 0 ;
	void* result = head->data;   //取出
	Link* OldHead =head;
	head = head->next;  //先变head 再删除
	delete oldHead;
	return result ; 
}
void  Stack::cleanup(){
	 require(head==0,"Stack not empty ");
} ///:~
