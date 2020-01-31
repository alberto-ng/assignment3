# include <iostream>
# include <string>

using namespace std;


/*
Create a class called Pet with all the necessary files (.h , .cpp, etc.)

This class should have member variables:
    -name (string)
    -age (int)
    -type ([‘dog’, ‘cat’]) (string)
    -weight (double).

include:
    -accessor (getters)
    -mutator (setters)

create two instances of Pet and print their details to console output.
 */

class Pet{
    public:
        Pet(); // default constructor
        // overloaded constructor
        Pet(string petName, int petAge, string petType, double petWeight);

        // all the accessors needed
        int getAge();
        string getName();
        double getWeight();
        string getType();

        // all the mutators needed
        void setAge(int petAge);
        void setName(string petName);
        void setWeight(double petWeight);
        void setType(string petType);

        // print function to print information to screen
        void print();

    private:
        // variavbles needed for the accessors/mutators/more
        string name;
        int age;
        string type;
        double weight;

};
