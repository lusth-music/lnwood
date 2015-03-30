#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <songlib/util.h>
#include <songlib/songlib.h>

#define dir "/usr/local/share/samples"
#define base "/piano/bright_"

char *PROGRAM_NAME = "song";
char *PROGRAM_VERSION = "0.01";



int main()
{
	int instrument;

	songInit();

	int octave = 4;	
	instrument = readScale(dir,base);
//	pushFilter(instrument,myDiminish);
	setTempo(115);
	setTime(4,4);
	setStride(0.05);
	setSustain(0.99995);
	setAmplitude(0.4);
	setKey(C);

	openOutput("rpiano.rra",0,0);
/*	
	nplay(Q,instrument,A2);
	nplay(Qd,instrument,A2);
	rest(Qd);
	nplay(Q,instrument,As2);
	nplay(Qd,instrument,As2);
	rest(Qd);
	nplay(Q,instrument,C3);
	nplay(Qd,instrument,C3);
	rest(Qd);
	nplay(Q,instrument,C3);
	nplay(Q,instrument,As2);
	nplay(Q,instrument,G2);
	nplay(Q,instrument,A2);
*/
	rest(W);
	rest(W);
	rest(W);
	rest(W);
	rest(H);

	nplay(H,instrument,A2);
	nplay(Q,instrument,F2);
	nplay(H,instrument,G2);
	nplay(Q,instrument,F2);
	nplay(Q,instrument,G2);
	nplay(Q,instrument,F2);
	nplay(H,instrument,As2);
	nplay(Q,instrument,F2);
	nplay(H,instrument,G2);
	nplay(Q,instrument,F2);
	nplay(Q,instrument,G2);
	nplay(Q,instrument,F2);
	nplay(H,instrument,C3);
	nplay(Q,instrument,F2);
	nplay(H,instrument,G2);
	nplay(Q,instrument,F2);
	nplay(Q,instrument,G2);
	nplay(Q,instrument,F2);

/*	nplay(Q,instrument,A2);
	nplay(I,instrument,F2);
	nplay(Q,instrument,G2);
	nplay(I,instrument,F2);
	nplay(I,instrument,G2);
	nplay(I,instrument,F2);
	nplay(Q,instrument,As2);
	nplay(I,instrument,F2);
	nplay(Q,instrument,G2);
	nplay(I,instrument,F2);
	nplay(I,instrument,G2);
	nplay(I,instrument,F2);
	nplay(Q,instrument,C3);
	nplay(I,instrument,F2);
	nplay(Q,instrument,G2);
	nplay(I,instrument,F2);
	nplay(I,instrument,G2);
	nplay(I,instrument,F2);
*/

/*	rest(W);
	rest(W);
	rest(W);
	rest(W);	
*/
//	c(4,I,instrument,octave-1);
//	c(4,Q,instrument,octave-1);

	nplay(H,instrument,C3);
	nplay(H,instrument,As2);
	nplay(H,instrument,A2);
	nplay(H,instrument,G2);

/*	nplay(H,instrument,A3);
	nplay(H,instrument,G3);
	nplay(H,instrument,As3);
	nplay(H,instrument,G3);
	nplay(H,instrument,C4);
	nplay(H,instrument,G3);
*/
/*	nplay(Q,instrument,A2);
	nplay(I,instrument,A2);
	nplay(Q,instrument,A2);
	nplay(I,instrument,A2);
	nplay(I,instrument,A2);
	nplay(I,instrument,A2);
	nplay(Q,instrument,As2);
	nplay(I,instrument,As2);
	nplay(Q,instrument,As2);
	nplay(I,instrument,As2);
	nplay(I,instrument,As2);
	nplay(I,instrument,As2);
	nplay(Q,instrument,C3);
	nplay(I,instrument,C3);
	nplay(Q,instrument,C3);
	nplay(I,instrument,C3);
	nplay(I,instrument,C3);
	nplay(I,instrument,C3);
	nplay(Q,instrument,C3);
	nplay(Q,instrument,C3);
	nplay(Q,instrument,C3);
	nplay(Q,instrument,C3);
*/

	/*rest(W);
	nplay(Q,instrument,G2);
	nplay(Q,instrument,A2);
	nplay(I,instrument,G2);
	rest(W);
	nplay(I,instrument,E2);
	nplay(I,instrument,G2);
	rest(W);
	nplay(Q,instrument,A2);
	rest(I);
	nplay(Q,instrument,G2);
	rest(I);
	rest(I);
	rest(I);
	nplay(Q,instrument,As2);
	rest(I);
	nplay(Q,instrument,G2);
	rest(I);
	rest(I);
	rest(I);
	nplay(Q,instrument,C3);
	rest(I);
	nplay(Q,instrument,G2);
	rest(I);
	rest(I);
	rest(I);
	nplay(Q,instrument,C3);
	nplay(Q,instrument,As2);
	nplay(Q,instrument,G2);
	nplay(Q,instrument,A2);
	rest(I);*/
	closeOutput();
	
	return 0;
}
