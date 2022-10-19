#include "list.h"

using namespace std;

//Khaled Esmail, CS163, 6/6/2022
//this is where I get the info from the user and call the functions and pass the info in.

int main()
{
	table my_table;
	decision to_add;
	char copy_decision[SIZE];	
	char copy_attach[SIZE];
	bool stop = true;
	char option = ' ';
	while(stop)
	{
		cout<<"Please choose what to do"<<endl;
		cout<<"1.Add a decision"<<endl<<"2.Connect with previously added decision"<<endl<<"3.Display list"<<endl<<"4.Quit"<<endl;
		cin >> option;
		cin.ignore(100, '\n');
		switch(option)
		{
			case'1':
				cout<<"Please enter your decision"<<endl;
				cin.get(copy_decision, SIZE, '\n');
				cin.ignore(100, '\n');
				to_add.create(copy_decision);
				my_table.add_vertex(to_add);
				break;
			case'2':
				cout<<"Please enter your decision"<<endl;
				cin.get(copy_decision, SIZE, '\n');
				cin.ignore(100, '\n');
				cout<<"Please enter your decision"<<endl;
				cin.get(copy_attach, SIZE, '\n');
				cin.ignore(100, '\n');
				my_table.add_edge(copy_decision, copy_attach);
				break;
			case'3':
				my_table.display_adj_path();
				break;
			case'4':
				stop = false;
				break;


		}


	}	











	return 0;
}
