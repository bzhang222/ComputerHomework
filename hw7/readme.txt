/**
* src is the src string, which has at least bufLen bytes; pos is the place to insert the char, c is to char to be inserted
* into the string
*/

char* insertChar(char* src, int bufLen, int pos, char c)
{
    
}


char buf[120];
strcpy(buf,"This is a line");
insertChar(buf,120, 9, 'b');
insertChar(buf,120, 10, 'i');
insertChar(buf,120, 11, 'g');
insertChar(buf,120, 12, ' ');


printf("%s", buf); needs to show a "this is a big line"
