// Oo Hello there son! I am the GateKeeper, I had been guarding the gates for my entire life time.
// Im getting old now and i think by memory power in diminishing as well ; And due to that i forgot what the key(key1) value was
// But i still remember the checker it is 812509(semi-prime)
// The lock works in a way given below(code)
// You look like a brilliant young guy; Could you find the key for me?

#include<stdio.h>
void main()
{
    int key1 = 53, key2;
    const int checker =813509;
    printf("Tell me the Access-Code : ");
    scanf("%d",&key2);
    if(key1*key2 == checker && key1 != 1 && key2 != 1)
    {
        printf("Entry granted!!!!");
    }
    else
        printf("Wrong key!!!!");
}