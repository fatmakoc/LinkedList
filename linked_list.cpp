// linked_list.cpp : Defines the entry point for the console application.
//
#include <iostream>

using namespace std;

typedef struct Dugum{

	int data;
	Dugum *next;

}Dugum1;


Dugum1 *liste_basi = NULL, *liste_sonu = NULL;
Dugum1 *lb;


void addto_list(int x){


	if (liste_basi == NULL) {

		liste_basi = new Dugum1;
		liste_basi->data = x;
		lb = liste_basi;
		liste_basi->next = NULL;

	}

	else
	{
		liste_sonu = new Dugum1;
		liste_sonu->data = x;
		liste_basi->next = liste_sonu;
		liste_sonu->next = NULL;
		liste_basi = liste_sonu;
		liste_sonu = liste_sonu->next;
	}
}

void write_list(){


	while (lb != NULL){

		cout << lb->data <<endl;
		lb = lb->next;

	}

}

int main(int argc, int* argv[])
{

	addto_list(12);
	addto_list(7);
	addto_list(58);

	write_list();

	system("pause");
	return 0;
}
