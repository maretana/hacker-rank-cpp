// https://www.hackerrank.com/challenges/30-scope

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
	
	Difference(vector<int> elements) : elements(elements) {}
	
	void computeDifference() {
		this->maximumDifference = 0;
		for (unsigned int i=0; i < this->elements.size() - 1; i++) {
			for (unsigned int j=i+1; j < this->elements.size(); j++) {
				int difference = abs(this->elements[i] - this->elements[j]);
				this->maximumDifference = max(this->maximumDifference, difference);
			}
		}
		
		//Faster solution
//		int max = 1;
//		int min = 100;
//		for (unsigned int i=0; i < this->elements.size(); i++) {
//			int number = this->elements[i];
//			
//			if (number > max) {
//				max = number;
//			}
//			
//			if (number < min) {
//				min = number;
//			}
//		}
//		
//		this->maximumDifference = max - min;
	}
	
}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}

