#include "types.h"
#include "stat.h"
#include "user.h"

int main(void) 
{
    //Declaring a character pointer to which 4000 bytes of memory is being allocated
    char *buffer=malloc(4000);
    //numOfChars is the number of chararcters in the ascii art image which will be returned by the draw system call
    int numOfChars=draw((void *)buffer,(uint)4000);
    if(numOfChars==-1){
    //if number of characters is equal to -1 then either buffer size is less than the ascii art's size or tried to access some memory which was out of the address space of the process
    	printf(1,"Error: Either buffer size is too low or memory access was out of the address space of the process\n");
    }
    else{
    //printing the buffer using the printf defined in xv6
    	printf(1,"%s\n\n",buffer);
    }
    //free the space allocated to the buffer
    free(buffer);
    exit();
}
