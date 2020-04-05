#include "main.h"
#include "../my_lib/Delay.h"

sbit BTNnpn = P1^0;	
sbit BTNpnp = P1^1;	
sbit RLnpn = P2^0;
sbit RLpnp = P3^7;

void main()
{
	RLnpn = 0;
	RLpnp = 0;
	while(1)
	{
		if (BTNnpn==0){
			RLnpn = !RLnpn;
			while(BTNnpn==0);
		}
		if (BTNpnp==0){
			RLpnp = !RLpnp;
			while(BTNpnp==0);
		}
	}
}