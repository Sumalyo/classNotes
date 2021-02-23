#include<stdio.h>
#include<stdlib.h>
//logical opertaor switch_case pointers arrays arguments preprocessors
//a long program by gem...an ode to inefficient programming
int main(int argc,char** argv)
{   //the usual declaration for command line arguments in c
    //this code accepts command line arguments amd does boring stuff
    printf("Switch Calculator in C:\n Code presentation");
    printf("use h for help [show this banner]\n");
    printf("-----------------------------------------------------------\n");
    printf("Usage ./program.exe [command] [params]\n");
    printf("\t\t\t\t s : to display some system information\n");
    printf("\t\t\t\t c [HEX_BYTE]: convert  0x00-0xFF to integer \n\n");
    //printf(" argv %d\n",argv[1][0]);

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
    
    case 'h':
    default:
    printf("Usage ./program.exe [command] [params]\n");
    printf("\t\t\t\t s : to display some system information\n");
    printf("\t\t\t\t c [HEX_BYTE]: convert  0x00-0xFF to integer\n");

        break;
    }
    return 0;

}
