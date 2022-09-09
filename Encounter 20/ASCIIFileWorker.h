#pragma once
#include "FileWorker.h";

class ASCIIFileWorker : public FileWorker
{
	public:
		virtual void Display(const char* path) {
			ifstream in;

			in.open(path);

			if (!in.is_open()) {
				cout << "Error reading file";
			}

			string str;
			while (getline(in, str)) {

				for (int i = 0; i < str.length(); i++) {
					cout << (int)str[i] << " ";
				}

				cout << endl;
			}
		}
};

