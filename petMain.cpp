# include "pet.h"

# include <iostream>
using namespace std;

int main() {
    Pet pet1, pet2;

    pet1 = Pet("Wonka", 4, "dog", 10.4);
    pet2 = Pet("Bonka", 3, "cat", 7.4);

    pet1.print();
    pet2.print();

    return 0;
}
