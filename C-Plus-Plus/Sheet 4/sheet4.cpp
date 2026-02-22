#include <iostream>
#include <string>
using namespace std;



// Q2

int main() 
{
	float num, min, max, sum = 0;

	cout << "Enter 10 float numbers: " << endl;
	cin >> num;

	max = num;
	min = num;
	sum = sum + num;

	for (int i = 1; i < 10; i++) {
		cin >> num;
		sum = sum + num;

		if (num > max) {
			max = num;
		}

		if (num < min) {
			min = num;
		}
	}
	float avg = sum / 10;

	cout << "Maximum is: " << max << endl;
	cout << "Minimum is: " << min << endl;
	cout << "Avarage is: " << avg;

	return 0;
}




// Q3

int main() {

	float num, count = 0, sum = 0, sumSqr = 0;

	cout << "Enter some of float values (and press ctrl + z if you finish): " << endl;

	while (cin >> num) {
		count++;
		sum += num;
		sumSqr += num * num;
	}

	if (count < 2) {
		cout << "Not enough numbers to calc the standard deviation!" << endl;
		return 0;
	}

	float avg = sum / count;

	float stdDev = sqrt((sumSqr - (sum * sum) / count) / (count - 1));

	cout << "count is: " << count << endl;
	cout << "avarage is: " << avg << endl;
	cout << "standard deviation is : " << stdDev << endl;

	return 0;
}




// Q4

int countOccurrences(string searchFor, string searchInto) 
{
	int count = 0;
	int targetLength = searchFor.length();
	int sentenceLength = searchInto.length();

	for (int i = 0; i <= sentenceLength - targetLength; i++) {
		bool match = true;

		for (int j = 0; j < targetLength; j++) {
			if (searchInto[i + j] != searchFor[j]) {
				match = false;
				break;
			}
		}

		if (match) {
			count++;
		}
	}

	return count;
}

int main() {
	string filterString = "the";
	string sentence = "the students are working hard in the faculty of Engineering because they love it";

	int result = countOccurrences(filterString, sentence);

	cout << "This string repeated " << result << " Times." << endl;
	return 0;
}




// Q5

void sort(int arr[], int n, bool ascending) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (ascending ? (arr[j] > arr[j + 1]) : (arr[j] < arr[j + 1])) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main() {
	int numbers[15];
	cout << "Enter 15 integers: ";
	for (int i = 0; i < 15; i++) {
		cin >> numbers[i];
	}

	sort(numbers, 15, true);
	cout << "Ascending: ";
	for (int i = 0; i < 15; i++) cout << numbers[i] << " ";
	cout << endl;

	sort(numbers, 15, false);
	cout << "Descending: ";
	for (int i = 0; i < 15; i++) cout << numbers[i] << " ";
}




// Q6

int main() {
	string word;
	cout << "enter the word you want to reverse: ";
	cin >> word;

	cout << "the reversed word: ";
	for (int i = word.length() - 1; i >= 0; i--) {
		cout << word[i];
	}
	cout << endl;

	return 0;
}
