#pragma once
#include "FileWorker.h"
#include <bitset>
class BinaryFileWorker :  public FileWorker
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

				for (std::size_t i = 0; i < str.size(); ++i)
				{
					cout << bitset<8>(str.c_str()[i]) << endl;
				}

				cout << endl;
			}
		}

};

