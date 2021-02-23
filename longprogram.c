#include<stdio.h>
#include<stdlib.h>
int main(int argc,char** argv)
{   //the usual declaration for command line arguments in c
    //this code accepts command line arguments amd does boring stuff
    printf("Switch Calculator in C:\n Code presentation");
    printf("use h for help [show this banner]\n");
    printf("-----------------------------------------------------------\n");
    printf("Usage ./program.exe [command] [params]\n");
    printf("\t\t\t\t s : to display some system information\n");
    printf("\t\t\t\t c [HEX_BYTE]: convert  0x00-0xFF to integer \n");
    printf("\t\t\t\t a [HEX] [HEX]: to display the sum of any two hex expressions\n");
    printf("\t\t\t\t p [HEX] [HEX]: to multiply two HEX expressions\n");
    printf("\t\t\t\t m [HEX1] [HEX2]: to substract two HEX expressions HEX1 - HEX2\n\n");


    int x=0;int y1,y2,y;char tmp[16];
    switch (argv[1][0])
    {
    case 's' :
    printf("This computer %s\tis running on %s\n",getenv("COMPUTERNAME"),getenv("OS"));
    printf("-----------CPU INFO---------------\n");
    printf("Processor %s\tCores %s Level %s Revision %s\n",getenv("PROCESSOR_IDENTIFIER"),getenv("NUMBER_OF_PROCESSORS"),
    getenv("PROCESSOR_REVISION"),getenv("PROCESSOR_LEVEL"));
    printf("-----------------------------------\n");
    printf("Current user: %s \n",getenv("USERNAME"));
    break;
    case 'c':
   
    switch(argv[2][0])
    {
        case '0':x+=0; break;
        case '1':x+=1; break;
        case '2':x+=2; break;
        case '3':x+=3; break;
        case '4':x+=4; break;
        case '5':x+=5; break;
        case '6':x+=6; break;
        case '7':x+=7; break;
        case '8':x+=8; break;
        case '9':x+=9; break;
        case 'A': case 'a':x+=10; break;
        case 'B': case 'b':x+=11; break;
        case 'C': case 'c':x+=12; break;
        case 'D': case 'd':x+=13; break;
        case 'E': case 'e':x+=14; break;
        case 'F': case 'f':x+=15;break;
    }
        switch(argv[2][1])
    {
        case '0':x+=0; break;
        case '1':x+=16; break;
        case '2':x+=16*2; break;
        case '3':x+=16*3; break;
        case '4':x+=16*4; break;
        case '5':x+=16*5; break;
        case '6':x+=16*6; break;
        case '7':x+=16*7; break;
        case '8':x+=16*8; break;
        case '9':x+=16*9; break;
        case 'A': case 'a':x+=16*10; break;
        case 'B': case 'b':x+=16*11; break;
        case 'C': case 'c':x+=16*12; break;
        case 'D': case 'd':x+=16*13; break;
        case 'E': case 'e':x+=16*14; break;
        case 'F': case 'f':x+=16*15;break;
    }
    printf("The decimal value of %s is %d",argv[2],x);
    break;
    case 'a':
    y1 =(int)strtol(argv[2],NULL,16);
    y2 = (int)strtol(argv[3],NULL,16);
    y = y1+y2;
    itoa(y,tmp,16);
    printf("The sum is %s tmp (decimal value %d)",tmp,y);
    break;
       case 'p':
    y1 =(int)strtol(argv[2],NULL,16);
    y2 = (int)strtol(argv[3],NULL,16);
    y = y1*y2;
    itoa(y,tmp,16);
    printf("The sum is %s tmp (decimal value %d)",tmp,y);
    break;
       case 'm':
    y1 =(int)strtol(argv[2],NULL,16);
    y2 = (int)strtol(argv[3],NULL,16);
    y = y1-y2;
    itoa(y,tmp,16);
    printf("The sum is %s tmp (decimal value %d)",tmp,y);
    break;

    case 'h':
    default:
    printf("Usage ./program.exe [command] [params]\n");
    printf("\t\t\t\t s : to display some system information\n");
    printf("\t\t\t\t c [HEX_BYTE]: convert  0x00-0xFF to integer\n");

        break;
    }
    return 0;

}
