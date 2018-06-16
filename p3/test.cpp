#include <iostream>
#include "Search_tree.h"

int main() {

	Search_tree<int> tree;
	tree.insert(51);
	tree.insert(30);
	tree.insert(69);
	tree.insert(18);
	tree.insert(42);
	tree.insert(63);

	tree.insert(87);
	tree.insert(12);
	tree.insert(24);
	tree.insert(36);
	tree.insert(45);
	tree.insert(57);
	tree.insert(66);
	tree.insert(81);

	tree.insert(93);
	tree.insert(15);
	tree.insert(21);
	tree.insert(27);
	tree.insert(33);
	tree.insert(39);

	tree.insert(48);
	tree.insert(54);
	tree.insert(60);
	tree.insert(75);
	tree.insert(84);
	tree.insert(90);
	tree.insert(96);
	tree.insert(72);
	tree.insert(78);
	
	
	tree.insert(73);
	std::cout << "Height:  " << tree.height() << " <- this will change for an AVL tree" << std::endl;
	for (Search_tree<int>::Iterator itr = tree.begin(); itr != tree.end(); ++itr) {
		std::cout << *itr << " ";
	}
	std::cout << std::endl;
	
	tree.insert(77);
	std::cout << "Height:  " << tree.height() << " <- this will change for an AVL tree" << std::endl;
	for (Search_tree<int>::Iterator itr = tree.begin(); itr != tree.end(); ++itr) {
		std::cout << *itr << " ";
	}
	std::cout << std::endl;

	tree.insert(76);
	std::cout << "Height:  " << tree.height() << " <- this will change for an AVL tree" << std::endl;
	for (Search_tree<int>::Iterator itr = tree.begin(); itr != tree.end(); ++itr) {
		std::cout << *itr << " ";
	}
	std::cout << std::endl;

	tree.insert(80);
	std::cout << "Height:  " << tree.height() << " <- this will change for an AVL tree" << std::endl;
	for (Search_tree<int>::Iterator itr = tree.begin(); itr != tree.end(); ++itr) {
		std::cout << *itr << " ";
	}
	std::cout << std::endl;
	
	tree.insert(74);
	std::cout << "Height:  " << tree.height() << " <- this will change for an AVL tree" << std::endl;
	for (Search_tree<int>::Iterator itr = tree.begin(); itr != tree.end(); ++itr) {
		std::cout << *itr << " ";
	}
	std::cout << std::endl;


	tree.insert(64);
	std::cout << "Height:  " << tree.height() << " <- this will change for an AVL tree" << std::endl;
	for (Search_tree<int>::Iterator itr = tree.begin(); itr != tree.end(); ++itr) {
		std::cout << *itr << " ";
	}
	std::cout << std::endl;
	

	tree.insert(55);
	std::cout << "Height:  " << tree.height() << " <- this will change for an AVL tree" << std::endl;
	for (Search_tree<int>::Iterator itr = tree.begin(); itr != tree.end(); ++itr) {
		std::cout << *itr << " ";
	}
	std::cout << std::endl;

	tree.erase(51);

	std::cout << std::endl;
	std::cout << "Front:   " << tree.front() << std::endl;
	std::cout << "Back:    " << tree.back() << std::endl;
	std::cout << "Height:  " << tree.height() << " <- this will change for an AVL tree" << std::endl;
	for (Search_tree<int>::Iterator itr = tree.begin(); itr != tree.end(); ++itr) {
		std::cout << *itr << " ";
	}
	std::cout << std::endl;

	//std::cout << tree.Root_node << std::endl;

	/*tree.insert(76);

	std::cout << std::endl;
	std::cout << "Front:   " << tree.front() << std::endl;
	std::cout << "Back:    " << tree.back() << std::endl;
	std::cout << "Height:  " << tree.height() << " <- this will change for an AVL tree" << std::endl;
	std::cout << "--> ";
	for (Search_tree<int>::Iterator itr = tree.begin(); itr != tree.end(); ++itr) {
		std::cout << *itr << " ";
	}*/
	
	/*Search_tree<int> tree;
	for ( int i = 1; i <= 30; ++i ) {
		std::cout << tree.insert((83 * i) % 30);
	}
	std::cout << std::endl;
	for ( int i = 1; i <= 30; ++i ) {
		std::cout << tree.insert((97 * i) % 30);
	}
	std::cout << std::endl;
	std::cout << "Front:   " << tree.front()   << std::endl;
	std::cout << "Back:    " << tree.back()    << std::endl;
	std::cout << "Height:  " << tree.height()  << " <- this will change for an AVL tree" << std::endl;
	std::cout << "--> ";
	for ( Search_tree<int>::Iterator itr = tree.begin(); itr != tree.end(); ++itr ) {
		std::cout << *itr << " ";
	}
	std::cout << std::endl;
	std::cout << "--> ";
	for ( Search_tree<int>::Iterator itr = tree.rbegin(); itr != tree.rend(); --itr ) {
		std::cout << *itr << " ";
	}
	std::cout << std::endl;
	tree.clear();
	std::cout << "--> ";
	for ( Search_tree<int>::Iterator itr = tree.begin(); itr != tree.end(); ++itr ) {
		std::cout << *itr << " ";
	}
	std::cout << std::endl;
	return 0;*/
}