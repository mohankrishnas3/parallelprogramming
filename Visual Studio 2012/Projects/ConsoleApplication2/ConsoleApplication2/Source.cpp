#include<iostream>
#include "mpi.h"

using namespace std;

void main(int argc, char *args[] )
{
	MPI_Init(&argc ,&args);
	cout<<"hello world";
	MPI_Finalize();

}