#include "Nodes.h"
#include <iostream>
using namespace std;
Nodes::Nodes(char Letter) {
	letter = Letter;
	next = nullptr;
}
Nodes::Nodes() {

}

int Nodes::Length(Nodes *&start) {
	int l = 0;
	for(start; start!=nullptr ; start = start -> next , ++l);
	return l;
}

void Nodes::Search(char letter, Nodes *&start) {

}

void Nodes::Delete(char letter, Nodes *& start) {

}

void Nodes::Add(char pre, char letter, Nodes *&start) {

}

void Nodes::UPPERCASE(Nodes *&start) {

}

void Nodes::lowercase(Nodes *&start) {

}

void Nodes::Print(Nodes *start) {
	while(start != nullptr){
		cout << start -> letter;
		start -> Print(start -> next);
	}
}

void Nodes::reversedPrint(Nodes *start) {
	while(start != nullptr){
		start -> reversedPrint(start -> next);
		cout << start -> letter;
	}
}


