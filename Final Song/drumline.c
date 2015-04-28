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
	setTempo(120);
	setTime(4,4);
	setStride(0.05);
	setSustain(0.99995);
	setAmplitude(0.4);
	setKey(C);

	openOutput("drumline.rra",0,0);
	setTempo(100);
	drumkitHHOpen(1,1,"Xx----Xx----Xx--",SX);
	setTempo(105); 
	drumkitHHOpen(1,1,"Xx----Xx----XxxX",SX);
	setTempo(110);
	drumkitHHOpen(1,1,"xxxX--xxxX--xxxX",SX);
	setTempo(115);
	drumkitHHOpen(1,1,"XXx-XXx-XXx-XXx-",SX);
	setTempo(120);
	drumkitHHOpen(4,1,"XxxxXxxxXxxxXxXx",SX); 
	drumkitHHOpen(1,1,"XxXXxXXxXXxxXXxX",SX);
	spot = getLocation();
	drumkitHHOpen(8,1,"x-x-x-x-x-x-x-x-",SX); setLocation(spot);
	drumkitSnare(8,1,"X-------X-------",SX);
	spot = getLocation();
	drumkitHHOpen(1,1,"XxXXxXXxXXxxXXxX",SX);
	drumkitHHOpen(3,1,"XxxxXxxxXxxxXxXx",SX); 
	drumkitHHOpen(1,1,"XxXXxXXxXXxxXXxX",SX);
	spot = getLocation();
	drumkitHHOpen(8,1,"x-x-x-x-x-x-x-x-",SX); setLocation(spot);
	drumkitSnare(8,1,"X-------X-------",SX);
	drumkitHHOpen(1,1,"XxXXxXXxXXxxXXxX",SX);
	drumkitHHOpen(3,1,"XxxxXxxxXxxxXxXx",SX); 
	drumkitHHOpen(1,1,"XxXXxXXxXXxxXXxX",SX);
	spot = getLocation();
	drumkitHHOpen(8,1,"x-x-x-x-x-x-x-x-",SX); setLocation(spot);
	drumkitSnare(8,1,"X-------X-------",SX);
	spot = getLocation();
	drumkitHHOpen(1,1,"XxXXxXXxXXxxXXxX",SX);

	setTempo(90);
	rest(W);
	rest(W);
	rest(W);
	rest(W);
	setTempo(100);
	drumkitHHOpen(4,1,"XxxxXxxxXxxxXxXx",SX);
	drumkitHHOpen(1,1,"XxXXxXXxXXxxXXxX",SX);

	setTempo(120);
	spot = getLocation();
	drumkitHHOpen(15,1,"x-x-x-x-x-x-x-x-",SX); setLocation(spot);
	drumkitSnare(15,1,"X-------X-------",SX);
	drumkitHHOpen(1,1,"XxXXxXXxXXxxXXxX",SX);

	closeOutput();
	
	return 0;
}
