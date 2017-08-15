#include <stdio.h>
#include <sstream>
using namespace std;
int main( int argc, char *argv[]){
	if(argc < 2){
	
		for(int i = 1; i!=32; i++){
			printf("%d = %c	%d = %c	%d = %c	%d = %c	%d = %c	%d = %c	%d = %c	%d = %c \n", i, i, i+32, i+32, i+64, i+64, i+96, i+96, i+128, i+128, i+160, i+160, i+192, i+192, i+224, i+224);
		}
	}else{
		
        istringstream iss( argv[1] );
        int col;
        if ((iss >> col) && iss.eof())
        {
            int fil = 256/col;
			for(int i = 0; i<fil; i++){
				for(int j = 0; j<col; j++){
					printf("%d = %c	", i+(fil*j), i+(fil*j));
				}
				printf("\n");
			}
			
        }else{
			printf("Ingrese como argumento un numero valido");
		}
	}
	return 0;
}
