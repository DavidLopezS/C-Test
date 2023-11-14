#include <iostream>
#include <string>
#include "header.hpp"
#include <vector>
#include <algorithm>


/*
std::string stringReverser(std::string myString){
    std::string reversedString;
    reversedString.reserve(myString.size());
    for (size_t i = myString.length(); i > 0; --i){
        reversedString += myString[i-1];
    }
    return reversedString;
}


typedef std::vector<int> ARRAY; 

template<typename T>
T multiply_array_elements(T a, int n)
{ 
    T tempTest;
	for (auto el : a) {

		el *= n;
        tempTest.push_back(el);
	}
    return tempTest;
}

int distinct(int a[], int length) {
    if(length == 0 || length == 1) 
        return 0;
    
    int temp[length];
    int tempRep;
    int b = 0;

    std::sort(a, a + length);
    for (int i = 0; i < length; ++i) {
        if (a[i] != a[i+1]) 
            temp[b++] = a[i];
        else if(a[i] == 1)
            tempRep = a[i];      
    }

    temp[b++] = tempRep;

    for (int i = 0; i < b; ++i) {
        a[i] = temp[i];
    }
    return b;
}

bool isArraySortedAndNotDuplicated(int a[], int length) {
    if(length == 0 || length == 1) 
        return true;
    
    for (int i = 0; i < length; ++i) {
        if (a[i] == a[i+1] || a[i] > a[i+1]){ 
                if(a[i] == 1 && a[i+1] == 1)
                return false;
        }
    }
    return true;
}

int main() {

	int test[] = {3,3,1,1,9}; 
    int length = sizeof(test)/sizeof(test[0]);
    length = distinct(test, length);
    bool isSorted = isArraySortedAndNotDuplicated(test, length);
    for(int i = 0; i < length; ++i) {
        std::cout  << test[i] << std::endl;
    }
    if(isSorted)
        std::cout << "Array is sorted and not duplicated" << std::endl;
    else
        std::cout << "Array is not sorted and/or duplicated" << std::endl;

    return 0;
}
*/

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
class LinkedListNode{
public:
    int val;
    LinkedListNode *next;

    LinkedListNode(int node_value) {
        val = node_value;
        next = NULL;
    }
};

LinkedListNode* _insert_node_into_singlylinkedlist(LinkedListNode *head, int val){
    if(head == NULL) {
        head = new LinkedListNode(val);
    }
    else {
        LinkedListNode *end = head;
        while (end->next != NULL) {
            end = end->next;
        }
        LinkedListNode *node = new LinkedListNode(val);
        end->next = node;
    }
    return head;
}


void removeAll(int val, LinkedListNode **list) {
    auto prevElement = list;
    auto temp = list;
    
    while(*temp != NULL) {
        if((*temp)->val == val) {
            if(temp == list)
                list = &(*list)->next;
            else
            (*prevElement)->next = (*temp)->next;
        } else {
            prevElement = temp;
            temp = &(*temp)->next;
        }
    }
}

int main() {
    int _val;
    cin >> _val;

    int _list_size;
    int _list_item;
    LinkedListNode* _list = NULL;
    cin >> _list_size;
    int _list_i;
    for(_list_i = 0; _list_i < _list_size; _list_i++) { 
        cin >> _list_item;
		_list = _insert_node_into_singlylinkedlist(_list, _list_item);
    }
  
    removeAll(_val, &_list);
    
	LinkedListNode* _current = _list;
  	while (_current != NULL)
    {
      cout << _current->val << " ";
      _current = _current->next;
    }
  
    return 0;
}
