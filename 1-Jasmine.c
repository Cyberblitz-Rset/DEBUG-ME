// Hi there my name is Jasmine , My creator had taugh me to thank everyone who activates me(compile and run).
// Usually i thank everyone using 5 lines but unfortunately i forgot how many characters(no_per_line) i used to put on a line  
// Silly me!
// Could you fix me young guy? I could use some help :)

#include<stdio.h>
#include<string.h>
void main()
{
    char message[] = "#####  #   #    #    #   #  #   #      #   #  #    #   #   # #   ##  #  # #        #   #  #    #####  #####  # # #  ##         #   #  #    #   #  #   #  #  ##  # #        #   #  #    #   #  #   #  #   #  #   #      #####";
    int j=0, no_per_line = 22;
    for(j=0;j<strlen(message);j++)
    {
        printf("%c",message[j]);
        if((j+1)%no_per_line == 0)
            printf("\n");
    }
}