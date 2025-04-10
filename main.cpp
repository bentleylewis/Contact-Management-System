#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;



//create a contact class
class Contact {
    public:
    string name;
    string address;
    string phoneNumber;
    string serviceType;



    //constructor for contact
    Contact(string name, string address, string phoneNumber, string serviceType) {
        this->name = name;
        this->address = address;
        this->phoneNumber = phoneNumber;
        this->serviceType = serviceType;
        
    }
};

//hashtable class
class HashTable {
    private:
    vector<Contact*> table;
    int tableSize;
    int numElements;

    int hashCode(const string &name) {
        int hash = 0;
        for (char c: name)
        return hash % tableSize;
    }

    void rehash() {
        int oldSize = tableSize;
        tableSize *= 2;
        vector<Contact*> oldTable = table;

        table.clear();
        table.resize(tableSize, nullptr);
        numElements = 0;

        for (int i = 0; i < oldSize; i++) {
            if (oldTable[i] != nullptr) {
                insert(oldTable[i]);
                
            }
        }
    }
};