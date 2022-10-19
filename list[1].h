#include <iostream>
#include <cctype>
#include <cstring>

//Khaled Esmail, 6/6/2022, CS163
//this is the header file where I have the structs and classes to manage the graph


class decision
{
	public:
	int create(char * copy_decision);
	int copy(decision & to_add);
	int match(char * key);
	int display();
	decision();
	~decision();
	
	private:
	char * decision_entry;
};


struct vertex
{
	decision * data;	
	struct node * head;
};

struct node
{
	vertex * adjacent;
	node * next;
};


const int SIZE = 25;

class table
{
	public:
	table(int size = 10);
	~table();
	int add_vertex(decision & to_add);
	int display_adj_path();
	int add_edge(char * key, char * to_attach);
	int find_location(char * key);


	private:
	vertex * adj_list;
	int list_size;
	int destructor(node *& head);
	int display_adj(node * head);
	 
};



