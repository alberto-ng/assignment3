# include "pet.h"

# include <iostream>
using namespace std;

// main function to do what the assignment promted
int main() {
    //initialize
    Pet pet1, pet2;

    // calling the overloaded constructor
    pet1 = Pet("Wonka", 4, "dog", 10.4);
    pet2 = Pet("Bonka", 3, "cat", 7.4);

    // print information to screen  
    pet1.print();
    pet2.print();

    return 0;
}
