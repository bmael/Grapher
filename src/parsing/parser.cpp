#include "parser.h"

using namespace std;

/**
*\brief Read the file 
*\param String file, the file to read.
*\param Map<String, Double> stats the map that have to contain  statistics
*\param String[] caption the TITLE SUBTILE NOTE
*/
void Parser::read(const string & file, map<string, double> & stats, string caption[]){

	 if(Parser::exist(file)) {
		cout << "Reading the file..." << endl;
		
		ifstream file( "fichier.txt" );

		while ( ! file.eof() )
		{
			string line;
            getline(file, line, ' ');
			cout << line << endl;
		}

	 }
	else{
		cout << "File does not exist..."
	}

}  
	
/**
*\brief Test the existence of a file.
*\param String file, the file to test.
*\return true if the file exists, false otherwise.
*/
bool Parser::exist(const string & file){

	std::ifstream fichier( file.c_str() ); 
    return !fichier.fail(); 

}
