#include <iostream>
#include <string>
#include <vector>
#include<intilizer list>
using namespace std;
template<typename K, typename V>
class KeyValuePair{
public:
    K key;
    V value;
};

template<typename K, typename V>
class Dictionary{
private:
    vector<KeyValuePair<K, V>> keyValuePair;

public:
    void add(K key, V value){
        KeyValuePair<K, V> kvp;
        kvp.key = key;
        kvp.value = value;
        keyValuePair.push_back(kvp);
    }

    V operator[](K key){
        for (const auto& kvp : keyValuePair){
            if (kvp.key == key) {
                return kvp.value;
            }
        }
        throw runtime_error("Key not found");
    }
};

int main() {
    Dictionary<string, string> stringMap;
    stringMap.add("BLR", "Bengaluru");
    stringMap.add("CHN", "Chennai");
    string value = stringMap["BLR"];
    cout << value << endl;

    Dictionary<string, int> stringToIntMap;
    stringToIntMap.add("One", 1);
    stringToIntMap.add("Two", 2);
    int number = stringToIntMap["One"];
    cout << number << endl;
    return 0;
}




