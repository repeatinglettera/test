#if !defined WRITE_FILE
#define WRITE_FILE

#include "Text.h"

#include <fstream>
using namespace std;

//! Class that recieves a filename and writes the file.
/*!
 * Constructor takes in a filename as a parameter.
 * Destructor makes sure that the file is closed.
 */

class WriteFile
{
	private:
		ofstream output_file;
		bool closed;
	public:
//! The constructor accepts a file name and opens that file.
		WriteFile(const char* file_name);
//! The destructor makes sure the file is closed.
		~WriteFile();
//! Takes in lines and writes them to the output file.
		void writeLine(String* line);
//! If the file is not closed, it closes the file.
		void close();
};

#endif
