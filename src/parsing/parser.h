#ifndef __PARSER_H
#define __PARSER_H


#include <string>
#include <map>

/**
* \class Parser parser.h
* \author Maël BARBIN
*
* Parser provides tools for parsing formated file. 
**/
class Parser {
  
	public:
		static void read(const std::string & file, std::map<std::string, double> & stats, std::string caption[]);  // read a file.
		
	private:
		bool exist(const std::string & file); //return the existence of the file.


};
#endif
