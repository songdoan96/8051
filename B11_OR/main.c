#include <REGX52.H>


/*
	Phép or dùng ðê bat/tat 1bit mà không thay ðoi trang thai cua cac bit khac
	
	P2 = P2 |( 1<<n ); set bit n len muc 1
	
*/


void Delay_ms(unsigned int t){
	unsigned int i,j;
	for(j=0;j<t;j++)
		for(i=0;i<123;i++);
}
void viDu(){
	P2 = 0x2f; 
	Delay_ms(2000);
	P2 = P2 | (1<<6);  
	Delay_ms(5000);
}

void ledSangTraiPhai(){
	unsigned char i,j;
	P2 = 0x00;
	for(i=0;i<8;i++){
		Delay_ms(300);
		P2 = P2 << 1;
		P2 = P2|1;
	}
	
	P2 = 0x00;
	for(j=0;j<8;j++){
		Delay_ms(300);
		P2 = P2 >> 1;
		P2 = P2|0x80;
	}
}

void main(){
	while(1){
		viDu();
		ledSangTraiPhai();
		Delay_ms(5000);
	}
}