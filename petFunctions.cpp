# include "pet.h"
# include <iostream>
using namespace std;

// default constructor
Pet::Pet(){
    age = 0;
    name = "un-named";
}

// overloaded constructor
Pet::Pet(string petName, int petAge, string petType, double petWeight){
    name = petName;
    age = petAge;
    type = petType;
    weight = petWeight;
}

// setting up accessors
int Pet::getAge(){
    return age;
}
string Pet::getName(){
    return name;
}
double Pet::getWeight(){
    return weight;
}
string Pet::getType(){
    return type;
}

// setting up the mutators
void Pet::setAge(int petAge){
    age = petAge;
}
void Pet::setName(string petName){
    name = petName;
}
void Pet::setWeight(double petWeight){
    weight = petWeight;
}
void Pet::setType(string petType){
    type = petType;
}

// setting up print function to print to screen
void Pet::print(){
    cout << "Name: " << name << "." << endl;
    cout << "Age: " << age << "." << endl;
    cout << "Pet type: " << type << "." << endl;
    cout << "Weight: " << weight << "." << endl;
}
