/***************************
This program is an interpreter for the PAIN programming language

Copyright (C) 2020  Miles Potter

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; If not, see <http://www.gnu.org/licenses/>.

********************************/

#include <iostream>
#include <fstream>

int main(int argc, char* argv[]) //I would like to note that I chose C++ as the language for this interpeter because evil is most pure from evil roots
{
	if (argc > 2) //This is the current argument handler
	{
		std::out << "More arguments given then needed. All we need is the file name, and the interpreter takes care of the rest ;)" << std::endl;
		return 0;
	}
	ifstream mainFile; //opening the first file for reading
	mainFile.open(argv[1]);
	if(mainFile.is_open())
	{
		//preprocessing here
	} else std::out << "The file couldn't open so good fkn luck m8" << std::endl;
}
