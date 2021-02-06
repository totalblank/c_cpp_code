#include <bits/stdc++.h>
#include <iostream>
#include <string>
#define ll long long
#define LIMIT 10

using namespace std;

int is_long(string word);

int main() {
	int word_count;
	cin >> word_count;
	string word_list[word_count];

	for (int i = 0; i < word_count; i++)
		cin >> word_list[i];

	for (int i = 0; i < word_count; i++) {
		if (is_long(word_list[i])) {
			cout << word_list[i][0] << word_list[i].length() - 2 << word_list[i][word_list[i].length() - 1] << endl;
		} else {
			cout << word_list[i] << endl;
		}
	}

	return 0;
}

int is_long(string word) {
	int len = 0;
	for (int i = 0; word[i] != '\0'; ++i)
		len++;
	if (len > LIMIT) {
		return true;
	} else {
		return false;
	}
}

