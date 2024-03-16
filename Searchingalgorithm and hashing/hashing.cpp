#include <iostream>
using namespace std;

int hash_Table[5];//creation of hash table

int hash_function(int key)
{
    return key % 5;
}

void insert(int key)
{
    int hv = hash_function(key);
    hash_Table[hv] = key;
}

void search(int key) {
    int hv = hash_function(key);
    if (hash_Table[hv] == key) {
        cout << key << " is found at location " << hv << " in the Hash Table." << endl;
    } else {
        cout << key << " is not found in the Hash Table." << endl;
    }
}

int main() {
    insert(23);
    insert(12);
    insert(15);
    insert(34);
    insert(26);
    cout << " Hash Value\t Key" << endl;
    for(int i = 0; i < 5; i++) {
        cout << " " << i << " \t\t " << hash_Table[i] << endl;
    }
    search(34);
    search(55);
    return 0;
}
