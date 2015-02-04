#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <songlib/util.h>
#include <songlib/songlib.h>

#define dir "/usr/local/share/samples"
#define base "/piano/bright_"

char *PROGRAM_NAME = "chordprog";
char *PROGRAM_VERSION = "0.01";

static void rightHand(int instrument, int octave)
{
	int i;
	for(i=0;i<2;i++)
	{
/*	nplay(I,instrument,C4);	
	nplay(I,instrument,D4);	
	nplay(I,instrument,E4);	
	nplay(I,instrument,F4);	
	nplay(I,instrument,G4);	
	nplay(S,instrument,F4);
	nplay(I,instrument,G4);
	nplay(S,instrument,F4);
	nplay(I,instrument,G4);	
*/
	c(1,I,instrument,octave+1);	
	c(2,I,instrument,octave+1);	
	c(3,I,instrument,octave+1);	
	c(4,I,instrument,octave+1);	
	c(5,I,instrument,octave+1);	
	c(4,S,instrument,octave+1);
	c(5,I,instrument,octave+1);
	c(4,S,instrument,octave+1);
	c(5,I,instrument,octave+1);	


/*	nplay(I,instrument,C4);	
	nplay(I,instrument,D4);	
	nplay(I,instrument,E4);	
	nplay(I,instrument,F4);	
	nplay(I,instrument,G4);
	c(4,T,instrument,octave+1);
	nplay(I,instrument,G4);
	c(4,T,instrument,octave+1);
	nplay(I,instrument,G4);
*/	

	}//3
	
	for(i=0;i<2;i++)
	{
/*	nplay(I,instrument,C4);	
	nplay(I,instrument,D4);	
	nplay(I,instrument,E4);	
	nplay(I,instrument,F4);	
	nplay(I,instrument,A4);	
	nplay(S,instrument,G4);
	nplay(I,instrument,A4);
	nplay(S,instrument,G4);
	nplay(I,instrument,A4);	
*/
	c(1,I,instrument,octave+1);	
	c(2,I,instrument,octave+1);	
	c(3,I,instrument,octave+1);	
	c(4,I,instrument,octave+1);	
	c(6,I,instrument,octave+1);	
	c(5,S,instrument,octave+1);
	c(6,I,instrument,octave+1);
	c(5,S,instrument,octave+1);
	c(6,I,instrument,octave+1);	
/*	

	nplay(I,instrument,C4);	
	nplay(I,instrument,D4);	
	nplay(I,instrument,E4);	
	nplay(I,instrument,F4);	
	nplay(I,instrument,A4);
	c(5,S,instrument,octave+1);
	nplay(I,instrument,A4);
	c(5,S,instrument,octave+1);
	nplay(I,instrument,A4);
*/
	}//3
	


	c(6,I,instrument,octave+1);	
	c(5,S,instrument,octave+1);	
	c(4,I,instrument,octave+1);	
	c(3,S,instrument,octave+1);	
	c(2,I,instrument,octave+1);	
	c(2,I,instrument,octave+1);
	c(3,S,instrument,octave+1);
	c(2,I,instrument,octave+1);
	c(1,S,instrument,octave+1);	
	c(2,I,instrument,octave+1);	

	c(2,H,instrument,octave+1);	
	c(2,S,instrument,octave+1);	
	c(2,I,instrument,octave+1);	
	c(1,S,instrument,octave+1);	
	c(2,I,instrument,octave+1);
	c(3,S,instrument,octave+1);
	c(2,S,instrument,octave+1);
	c(2,H,instrument,octave+1);	



}


int main()
{
	int instrument;
	int octave = 2;

	songInit();
	
	instrument = readScale(dir,base);

	setTempo(100);
	setTime(4,4);
	setStride(0.05);
	setSustain(0.99995);
	setAmplitude(0.4);
	setKey(C);

	openOutput("chordprog.rra",0,0);


	rightHand(instrument,octave);



	closeOutput();
	
	return 0;
}
