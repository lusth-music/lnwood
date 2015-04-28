#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <songlib/util.h>
#include <songlib/songlib.h>

#define dir "/usr/local/share/samples"
#define base "/trumpet/t_"

char *PROGRAM_NAME = "song";
char *PROGRAM_VERSION = "0.01";



int main()
{
	int instrument;

	songInit();
	
	instrument = readScale(dir,base);
	setTempo(120);
	setTime(4,4);
	setStride(0.05);
	setSustain(0.9997);
	setAmplitude(0.4);
	setKey(C);
	int i;
	openOutput("trumpet.rra",0,0);
	setTempo(100);
	rest(W);
	setTempo(105);
	rest(W);
	setTempo(110);
	rest(W);
	setTempo(115);
	rest(W);
	setTempo(120);
	rest(W);
	nplay(Q,instrument,A2);
	nplay(I,instrument,F2);
	nplay(Q,instrument,G2);
	nplay(I,instrument,F2);
	nplay(I,instrument,G2);
	nplay(I,instrument,F2);
	//measure 
	nplay(Q,instrument,As2);
	nplay(I,instrument,F2);
	nplay(Q,instrument,G2);
	nplay(I,instrument,F2);
	nplay(I,instrument,G2);
	nplay(I,instrument,F2);
	//measure 3
	nplay(Q,instrument,C3);
	nplay(I,instrument,F2);
	nplay(Q,instrument,G2);
	nplay(I,instrument,F2);
	nplay(I,instrument,G2);
	nplay(I,instrument,F2);
	//measure 4
	nplay(Q,instrument,C3);
	nplay(Q,instrument,As2);
	nplay(Q,instrument,A2);
	nplay(Q,instrument,G2);

	for(i=0;i<9;i++){
	rest(W);}

	nplay(Q,instrument,A2);
	nplay(I,instrument,F2);
	nplay(Q,instrument,G2);
	nplay(I,instrument,F2);
	nplay(I,instrument,G2);
	nplay(I,instrument,F2);
	//measure 
	nplay(Q,instrument,As2);
	nplay(I,instrument,F2);
	nplay(Q,instrument,G2);
	nplay(I,instrument,F2);
	nplay(I,instrument,G2);
	nplay(I,instrument,F2);
	//measure
	nplay(Q,instrument,C3);
	nplay(I,instrument,F2);
	nplay(Q,instrument,G2);
	nplay(I,instrument,F2);
	nplay(I,instrument,G2);
	nplay(I,instrument,F2);
	//measure
	nplay(Q,instrument,C3);
	nplay(Q,instrument,As2);
	nplay(Q,instrument,A2);
	nplay(Q,instrument,G2);

	for(i=0;i<9;i++){
	rest(W);}

	nplay(Q,instrument,A2);
	nplay(I,instrument,F2);
	nplay(Q,instrument,G2);
	nplay(I,instrument,F2);
	nplay(I,instrument,G2);
	nplay(I,instrument,F2);
	//measure 
	nplay(Q,instrument,As2);
	nplay(I,instrument,F2);
	nplay(Q,instrument,G2);
	nplay(I,instrument,F2);
	nplay(I,instrument,G2);
	nplay(I,instrument,F2);
	//measure
	nplay(Q,instrument,C3);
	nplay(I,instrument,F2);
	nplay(Q,instrument,G2);
	nplay(I,instrument,F2);
	nplay(I,instrument,G2);
	nplay(I,instrument,F2);
	//measure
	nplay(Q,instrument,C3);
	nplay(Q,instrument,As2);
	nplay(Q,instrument,A2);
	nplay(Q,instrument,G2);



	for(i=0;i<9;i++)
	{
	rest(W);
	}

	setTempo(90);
	setSustain(0.99995);
	nplay(I,instrument,D3);
	nplay(I,instrument,E3);
	nplay(I,instrument,E3);
	nplay(I,instrument,C3);
	nplay(Q,instrument,E3);
	nplay(I,instrument,F3);
	nplay(I,instrument,E3);
	//measure 2
	nplay(I,instrument,B2);
	nplay(I,instrument,A2);
	nplay(Q,instrument,B2);
	nplay(I,instrument,C3);
	nplay(Q,instrument,A2);
	nplay(I,instrument,A2);
	//measure 3
	nplay(I,instrument,B2);
	nplay(I,instrument,A2);
	nplay(Q,instrument,B2);
	nplay(I,instrument,C3);
	nplay(Q,instrument,G2);
	nplay(I,instrument,F2);
	//measure 4
	nplay(I,instrument,G2);
	nplay(I,instrument,A2);
	nplay(I,instrument,A2);
	nplay(I,instrument,B2);
	nplay(I,instrument,C3);
	nplay(I,instrument,G2);	
	rest(Q);

	setTempo(100);
	rest(W);
	nplay(I,instrument,D3);
	nplay(I,instrument,E3);
	nplay(I,instrument,E3);
	nplay(I,instrument,C3);
	nplay(Q,instrument,E3);
	nplay(I,instrument,F3);
	nplay(I,instrument,E3);
	nplay(I,instrument,B2);
	nplay(I,instrument,A2);
	nplay(Q,instrument,B2);
	nplay(I,instrument,C3);
	nplay(Q,instrument,A2);
	nplay(I,instrument,A2);
	nplay(I,instrument,B2);
	nplay(I,instrument,A2);
	nplay(Q,instrument,B2);
	nplay(I,instrument,C3);
	nplay(Q,instrument,G2);
	nplay(I,instrument,F2);
	nplay(I,instrument,G2);
	nplay(I,instrument,A2);
	nplay(I,instrument,A2);
	nplay(I,instrument,B2);
	nplay(I,instrument,C3);
	nplay(I,instrument,G2);	






	closeOutput();
	
	return 0;
}
