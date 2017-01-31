#include "ReadFile.h"
#include <iostream>
#include <string>

/*ReadFile* createReadFile(const char* file_name)
{
   ReadFile* rf = new ReadFile;

   rf->input_file.open(file_name);
   rf->closed = false;
   rf->_eof = false;

   return rf;
}*/
ReadFile::ReadFile(const char* file_name)
{
   input_file.open(file_name);
   closed = false;
   _eof = false;
}	

/*void destroyReadFile(ReadFile* rf)
{
   close(rf);
   delete rf;
}*/
ReadFile::~ReadFile()
{
   close();
}

/*bool eof(ReadFile* rf)
{
   return rf->_eof;
}*/
bool ReadFile::eof()
{
   return _eof;
}

/*void close(ReadFile* rf)
{
   if (!rf->closed)
   {
      rf->input_file.close();
      rf->closed = true;
   }
}*/
void ReadFile::close()
{
   if (!closed)
   {
      input_file.close();
      closed = true;
   }
}

/*String* readLine(ReadFile* rf)
{
   if (rf->closed) return NULL;
   if (rf->_eof) return NULL;

   string text;
   rf->_eof = !(getline(rf->input_file, text));

   String* str = new String((const char*) text.c_str());
   return str;
}*/
String* ReadFile::readLine()
{
   if (closed) return NULL;
   if (_eof) return NULL;

   string text;
   _eof = !(getline(input_file, text));

   String* str = new String((const char*) text.c_str());
   return str;
}
