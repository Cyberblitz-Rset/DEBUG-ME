// Ahh hello there Soldier!!!My name is Hermann Aubin
// We are in Big trouble there were 2 messages that I recived this afternoon
// But i lost the key(offset) after i decoded the first one 
// Here is the first decoded message 
// Coded message : Fvmxmwl$xvsstw$irxivih$Gy|lezir$ex$5844$sr$:$Qe}$11$jvsq$rs{$sr$epp$vehms$xvejjmg${mpp$giewi$11${mwlmrk$}sy$epp$xli$fiwx2$Px$Oyroip
// Decoded message : British troops entered Cuxhaven at 1400 on 6 May -- from now on all radio traffic will cease -- wishing you all the best. Lt Kunkel
// could u find the key for me?


#include<stdio.h>
void main()
{
    int offset = 4,i=0;
    char message[] =  "Gpswmrk$hs{r$jsviziv$11$epp$xli$fiwx$11$ksshf}i";
    for(i=0;message[i]!='\0';i++)
    {
        message[i] = (message[i] - offset);
    }
    printf("%s",message);
}
