#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <songlib/util.h>
#include <songlib/songlib.h>

#define dir "/usr/local/share/samples"
#define base "/drums-hihat/osd-open_"

char *PROGRAM_NAME = "drumline";
char *PROGRAM_VERSION = "0.01";



int main()
{
	int instrument;
	int octave = 2;
	int spot;
	songInit();
	
	instrument = readScale(dir,base);
//	pushFilter(instrument,myDiminish);
	setTempo(115);
	setTime(4,4);
	setStride(0.05);
	setSustain(0.99995);
	setAmplitude(0.4);
	setKey(C);

	openOutput("drumline.rra",0,0);
	/*drumkitHHOpen(1,1,"XxxxXxxxXxxxXxXx",SX);
	/drumkitHHOpen(1,1,"XxxxXxxxXxxxXxXx",SX);
	drumkitHHOpen(1,1,"XxxxXxxxXxxxXxXx",SX);
	drumkitHHOpen(1,1,"XxxxXxxxXxxxXxXx",SX);
	drumkitHHOpen(1,1,"XxxxXxxxXxxxXxXx",SX);
	drumkitHHOpen(1,1,"XxxxXxxxXxxxXxXx",SX);
	drumkitHHOpen(1,1,"XxxxXxxxXxxxXxXx",SX);
	drumkitHHOpen(1,1,"XxxxXxxxXxxxXxXx",SX);
	drumkitHHOpen(1,1,"XxxxXxxxXxxxXxXx",SX);
	*/
	drumkitHHOpen(1,1,"XxxxXxxxXxxxXxXx",SX);
	drumkitHHOpen(1,1,"XxxxXxxxXxxxXxXx",SX);
	drumkitHHOpen(1,1,"XxxxXxxxXxxxXxXx",SX);
	drumkitHHOpen(1,1,"XxXXxXXxXXxxXXxX",SX);
	drumkitHHOpen(1,1,"XxxxXxxxXxxxXxXx",SX);
	drumkitHHOpen(1,1,"XxxxXxxxXxxxXxXx",SX);
	drumkitHHOpen(1,1,"XxxxXxxxXxxxXxXx",SX);
	drumkitHHOpen(1,1,"XxxxXxxxXxxxXxXx",SX);
	drumkitHHOpen(1,1,"XxxxXxxxXxxxXxXx",SX);
	drumkitHHOpen(1,1,"XxXXxXXxXXxxXXxX",SX);
	drumkitHHOpen(1,1,"XxxxXxxxXxxxXxXx",SX);
	drumkitHHOpen(1,1,"XxxxXxxxXxxxXxXx",SX);
	drumkitHHOpen(1,1,"XxxxXxxxXxxxXxXx",SX);
	drumkitHHOpen(1,1,"XxXXxXXxXXxxXXxX",SX);
	drumkitHHOpen(1,1,"XxxxXxxxXxxxXxXx",SX);
	drumkitHHOpen(1,1,"XxxxXxxxXxxxXxXx",SX);
	drumkitHHOpen(1,1,"XxxxXxxxXxxxXxXx",SX);
	drumkitHHOpen(1,1,"XxXXxXXxXXxxXXxX",SX);
	closeOutput();
	
	return 0;
}
