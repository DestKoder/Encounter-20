#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


class FileWorker
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
				cout << str << endl;
			}
		}

};

