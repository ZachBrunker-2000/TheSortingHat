#pragma once
#include <iostream>
#include <string>


using namespace std;


template <class TBD>

int minlocation(TBD userList[], int first, int last) {
	int minIndex;

	minIndex = first;

	for (int i = first + 1; i <= last; i++) {
		if (userList[i] < userList[minIndex]) {
			minIndex = i;

		}

	}

	return minIndex;

	
}

template <class TBD>

void swap(TBD userList[],int first, int second) {
	TBD temp;

	temp = userList[first];
	userList[first] = userList[second];
	userList[second] = temp;

}


template <class TBD>

void selectionSort(TBD userList[], int length) {

	int minIndex;

	for (int i = 0; i < length; i++) {
		minIndex = minlocation(userList, i, length - 1);
		swap(userList, i, minIndex);
		cout << "Updated list:" << endl;
		for (int i = 0; i < length; i++) {
			
			cout << userList[i] << " ";
		}
		cout << endl;
	}
}