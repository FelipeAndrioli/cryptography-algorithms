#include <iostream>
#include <cstring>

using namespace std;

string CaesarCypherEncode(string message, int swap) {
	string encoded_message;

	encoded_message = message + " " + "Encoding";

	return encoded_message;
}

string CaesarCypherDecode(string message, int swap) {
	string decoded_message;

	decoded_message = message + " " + "Decoding";

	return decoded_message;
}

int main(int argc, char* argv[]) {

	string arg;
	string message;
	int swap = 0;

	arg = argv[1];

	if(argc > 2) {
		if(arg == "-e") {
			cout << "Encoding..." << endl;
			message = argv[2];
			swap = (int)argv[3];
			cout << CaesarCypherEncode(message) << endl;
		} else if (arg == "-d") {
			cout << "Decoding..." << endl;
			message = argv[2];
			swap = (int)argv[3];
			cout << CaesarCypherDecode(message) << endl;
		} else {
			cout << "Need to be a valid argument" << endl;
		}
	} else {
		cout << "There is not enought arguments" << endl;
	}

	return 0;
}
