#include <iostream>
using namespace std;

const int TABLE_SIZE = 5;
int hash_Table[TABLE_SIZE]; // Creation of hash table

int hash_function(int key)
{
    return key % TABLE_SIZE;
}

void insert(int key)
{
    int hv = hash_function(key);
    if (hash_Table[hv] == 0) {
        // If the slot is empty, insert the key
        hash_Table[hv] = key;
    } else {
        // Quadratic probing: find the next available slot
        int i = 1;
        while (true) {
            int new_hv = (hv + i * i) % TABLE_SIZE;
            if (hash_Table[new_hv] == 0) 
            {
                // Found an empty slot, insert the key
                hash_Table[new_hv] = key;
                return;
            }
            i++;
        }
    }
}
void search(int key) {
    int hv = hash_function(key);
    if (hash_Table[hv] == key) {
        cout << key << " is found at location " << hv << " in the Hash Table." << endl;
    } else {
        // Quadratic probing for search as well
        int i = 1;
        while (true) {
            int new_hv = (hv + i * i) % TABLE_SIZE;
            if (hash_Table[new_hv] == key) 
            {
                cout << key << " is found at location " << new_hv << " in the Hash Table." << endl;
                return;
            }
            if (hash_Table[new_hv] == 0) 
            {
                cout << key << " is not found in the Hash Table." << endl;
                return;
            }
            i++;
        }
    }
}

int main() 
{
    insert(11);
    insert(21);
    insert(61);
    insert(74);
    insert(91);
    cout << " Hash Value\t Key" << endl;
    for(int i = 0; i < TABLE_SIZE; i++) 
    {
        cout << " " << i << " \t\t " << hash_Table[i] << endl;
    }
    search(34);
    search(55);
    return 0;
}
