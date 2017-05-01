// https://www.hackerrank.com/challenges/30-dictionaries-and-maps

#include <iostream>
#include <map>
#include <string>
#include "stdio.h"
using namespace std;


int main() {
	
	map<string, string> map;
	int names_count;
	string query;
	
	cin >> names_count;
	
	for (int i = 0; i < names_count; i++) {
		string name;
		string phone;
		cin >> name;
		cin >> phone;
		
		map[name] = phone;
	}
	
	// cin >> always leads a newline in the buffer, we can "flush" it with this.
	cin >> ws;
	
	while (getline(cin, query)) {
		if (map.find(query) == map.end()) {
			cout << "Not found\n";
		} else {
			printf("%s=%s\n", query.c_str(), map[query].c_str());
		}
	}
	
    return 0;
}
