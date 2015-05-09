#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main( int argc, char* argv[])
{
    ifstream input( argv[1], ios::in);
    ofstream output( "±K¹q.txt", ios::out) ;
    //char oup[200];
    char data[1000];
    if( !input )
    {
        cerr<< "File not found" <<endl;
        exit(1);
    }
    
    while(input.getline(data,1000))
    {
        char oup[1000] = {0};
        
			size_t length = strlen(data);
            for(int i=0; i< length ; i++)
            {
				oup[i] = data[i] + 2;
				data[i] = ' ';
            }
			 
			 
        
        length = 0;

        output << oup <<endl;
    }


}
        

