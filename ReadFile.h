#if !defined READ_FILE
#define READ_FILE

#include "Text.h"

#include <fstream>
using namespace std;

//! Class that recieves a filename and reads the file.
/*!
 * Recieves an input file through ifstream.
 * Constructor takes in a filename as a parameter.
 * Destructor makes sure that the file is closed.
 */
 
class ReadFile
{
	private:
		ifstream input_file;
		bool _eof;
		bool closed;
	public:
//! The constructor accepts a filename and opens that file. Sets the closed and the _eof bools equal to false.
		ReadFile(const char* file_name);
//! The destructor makes sure the file is closed.
		~ReadFile ();
//! Returns a string.
		String* readLine();
//! Returns _eof.
		bool eof();
//! Closes the input file and sets the bool closed equal to true.
		void close();
		
};

#endif
