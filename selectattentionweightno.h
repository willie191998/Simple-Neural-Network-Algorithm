#ifndef SELECTATTENTIONWEIGHTNO_H
#define SELECTATTENTIONWEIGHTNO_H

#include"header.h"

/*
 this function, uses data input to select attention weight. 
 */

int FGLOBAL_SELECT_ATTENTION_WEIGHT_NO (int fninputsize,int fninput1,int fninput2,int fninput3,int fninput4,int fninput5, int fninput6, int fninput7, int fninput8) {
	
	int fnweightno;
	
	if (fninputsize == 6) {
		fninput1=-1;
		fninput2=-1; }
	
/*	std::cout<<"inputs "<<fninputsize<<fninput1<<fninput2<<fninput3<<fninput4<<fninput5<<fninput6<<fninput7<<fninput8<<std::endl; */

// 1
  if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==-1)&&(fninput4==-1)&&(fninput5==-1)&&(fninput6==-1)&&(fninput7==-1)&&(fninput8==-1)) {
  	
  	fnweightno=0;
  }
// 2
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==-1)&&(fninput4==-1)&&(fninput5==-1)&&(fninput6==-1)&&(fninput7==-1)&&(fninput8==1)) {
  	
  	fnweightno=1;
  }
// 3
   else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==-1)&&(fninput4==-1)&&(fninput5==-1)&&(fninput6==-1)&&(fninput7==1)&&(fninput8==-1)) {
  	
  	fnweightno=2;
  }
// 4 
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==-1)&&(fninput4==-1)&&(fninput5==-1)&&(fninput6==-1)&&(fninput7==1)&&(fninput8==1)) {
  	
  	fnweightno=3;
  }
// 5
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==-1)&&(fninput4==-1)&&(fninput5==-1)&&(fninput6==1)&&(fninput7==-1)&&(fninput8==-1)) {
  	
  	fnweightno=4;
  }
// 6
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==-1)&&(fninput4==-1)&&(fninput5==-1)&&(fninput6==1)&&(fninput7==-1)&&(fninput8==1)) {
  	
  	fnweightno=5;
  }
// 7
   else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==-1)&&(fninput4==-1)&&(fninput5==-1)&&(fninput6==1)&&(fninput7==1)&&(fninput8==-1)) {
  	
  	fnweightno=6;
  }
// 8
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==-1)&&(fninput4==-1)&&(fninput5==-1)&&(fninput6==1)&&(fninput7==1)&&(fninput8==1)) {
  	
  	fnweightno=7;
  }
  
// 9
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==-1)&&(fninput4==-1)&&(fninput5==1)&&(fninput6==-1)&&(fninput7==-1)&&(fninput8==-1)) {
  	
  	fnweightno=8;
  }
// 10
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==-1)&&(fninput4==-1)&&(fninput5==1)&&(fninput6==-1)&&(fninput7==-1)&&(fninput8==1)) {
  	
  	fnweightno=9;
  }
// 11
   else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==-1)&&(fninput4==-1)&&(fninput5==1)&&(fninput6==-1)&&(fninput7==1)&&(fninput8==-1)) {
  	
  	fnweightno=10;
  }
// 12
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==-1)&&(fninput4==-1)&&(fninput5==1)&&(fninput6==-1)&&(fninput7==1)&&(fninput8==1)) {
  	
  	fnweightno=11;
  }
// 13
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==-1)&&(fninput4==-1)&&(fninput5==1)&&(fninput6==1)&&(fninput7==-1)&&(fninput8==-1)) {
  	
  	fnweightno=12;
  }
// 14
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==-1)&&(fninput4==-1)&&(fninput5==1)&&(fninput6==1)&&(fninput7==-1)&&(fninput8==1)) {
  	
  	fnweightno=13;
  }
// 15
   else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==-1)&&(fninput4==-1)&&(fninput5==1)&&(fninput6==1)&&(fninput7==1)&&(fninput8==-1)) {
  	
  	fnweightno=14;
  }
// 16
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==-1)&&(fninput4==-1)&&(fninput5==1)&&(fninput6==1)&&(fninput7==1)&&(fninput8==1)) {
  	
  	fnweightno=15;
  }
// 17
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==-1)&&(fninput4==1)&&(fninput5==-1)&&(fninput6==-1)&&(fninput7==-1)&&(fninput8==-1)) {
  	
  	fnweightno=16;
  }
// 18
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==-1)&&(fninput4==1)&&(fninput5==-1)&&(fninput6==-1)&&(fninput7==-1)&&(fninput8==1)) {
  	
  	fnweightno=17;
  }
// 19
   else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==-1)&&(fninput4==1)&&(fninput5==-1)&&(fninput6==-1)&&(fninput7==1)&&(fninput8==-1)) {
  	
  	fnweightno=18;
  }
// 20
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==-1)&&(fninput4==1)&&(fninput5==-1)&&(fninput6==-1)&&(fninput7==1)&&(fninput8==1)) {
  	
  	fnweightno=19;
  }
// 21
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==-1)&&(fninput4==1)&&(fninput5==-1)&&(fninput6==1)&&(fninput7==-1)&&(fninput8==-1)) {
  	
  	fnweightno=20;
  }
// 22
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==-1)&&(fninput4==1)&&(fninput5==-1)&&(fninput6==1)&&(fninput7==-1)&&(fninput8==1)) {
  	
  	fnweightno=21;
  }
// 23
   else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==-1)&&(fninput4==1)&&(fninput5==-1)&&(fninput6==1)&&(fninput7==1)&&(fninput8==-1)) {
  	
  	fnweightno=22;
  }
// 24
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==-1)&&(fninput4==1)&&(fninput5==-1)&&(fninput6==1)&&(fninput7==1)&&(fninput8==1)) {
  	
  	fnweightno=23;
  }
  
// 25
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==-1)&&(fninput4==1)&&(fninput5==1)&&(fninput6==-1)&&(fninput7==-1)&&(fninput8==-1)) {
  	
  	fnweightno=24;
  }
// 26
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==-1)&&(fninput4==1)&&(fninput5==1)&&(fninput6==-1)&&(fninput7==-1)&&(fninput8==1)) {
  	
  	fnweightno=25;
  }
// 27
   else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==-1)&&(fninput4==1)&&(fninput5==1)&&(fninput6==-1)&&(fninput7==1)&&(fninput8==-1)) {
  	
  	fnweightno=26;
  }
// 28
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==-1)&&(fninput4==1)&&(fninput5==1)&&(fninput6==-1)&&(fninput7==1)&&(fninput8==1)) {
  	
  	fnweightno=27;
  }
// 29
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==-1)&&(fninput4==1)&&(fninput5==1)&&(fninput6==1)&&(fninput7==-1)&&(fninput8==-1)) {
  	
  	fnweightno=28;
  }
// 30
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==-1)&&(fninput4==1)&&(fninput5==1)&&(fninput6==1)&&(fninput7==-1)&&(fninput8==1)) {
  	
  	fnweightno=29;
  }
// 31
   else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==-1)&&(fninput4==1)&&(fninput5==1)&&(fninput6==1)&&(fninput7==1)&&(fninput8==-1)) {
  	
  	fnweightno=30;
  }
// 32
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==-1)&&(fninput4==1)&&(fninput5==1)&&(fninput6==1)&&(fninput7==1)&&(fninput8==1)) {
  	
  	fnweightno=31;
  }
// 33
  if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==1)&&(fninput4==-1)&&(fninput5==-1)&&(fninput6==-1)&&(fninput7==-1)&&(fninput8==-1)) {
  	
  	fnweightno=32;
  }
// 34
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==1)&&(fninput4==-1)&&(fninput5==-1)&&(fninput6==-1)&&(fninput7==-1)&&(fninput8==1)) {
  	
  	fnweightno=33;
  }
// 35
   else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==1)&&(fninput4==-1)&&(fninput5==-1)&&(fninput6==-1)&&(fninput7==1)&&(fninput8==-1)) {
  	
  	fnweightno=34;
  }
// 36
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==1)&&(fninput4==-1)&&(fninput5==-1)&&(fninput6==-1)&&(fninput7==1)&&(fninput8==1)) {
  	
  	fnweightno=35;
  }
// 37
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==1)&&(fninput4==-1)&&(fninput5==-1)&&(fninput6==1)&&(fninput7==-1)&&(fninput8==-1)) {
  	
  	fnweightno=36;
  }
// 38
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==1)&&(fninput4==-1)&&(fninput5==-1)&&(fninput6==1)&&(fninput7==-1)&&(fninput8==1)) {
  	
  	fnweightno=37;
  }
// 39
   else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==1)&&(fninput4==-1)&&(fninput5==-1)&&(fninput6==1)&&(fninput7==1)&&(fninput8==-1)) {
  	
  	fnweightno=38;
  }
// 40
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==1)&&(fninput4==-1)&&(fninput5==-1)&&(fninput6==1)&&(fninput7==1)&&(fninput8==1)) {
  	
  	fnweightno=39;
  }
  
// 41
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==1)&&(fninput4==-1)&&(fninput5==1)&&(fninput6==-1)&&(fninput7==-1)&&(fninput8==-1)) {
  	
  	fnweightno=40;
  }
// 42
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==1)&&(fninput4==-1)&&(fninput5==1)&&(fninput6==-1)&&(fninput7==-1)&&(fninput8==1)) {
  	
  	fnweightno=41;
  }
// 43
   else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==1)&&(fninput4==-1)&&(fninput5==1)&&(fninput6==-1)&&(fninput7==1)&&(fninput8==-1)) {
  	
  	fnweightno=42;
  }
// 44
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==1)&&(fninput4==-1)&&(fninput5==1)&&(fninput6==-1)&&(fninput7==1)&&(fninput8==1)) {
  	
  	fnweightno=43;
  }
// 45
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==1)&&(fninput4==-1)&&(fninput5==1)&&(fninput6==1)&&(fninput7==-1)&&(fninput8==-1)) {
  	
  	fnweightno=44;
  }
// 46
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==1)&&(fninput4==-1)&&(fninput5==1)&&(fninput6==1)&&(fninput7==-1)&&(fninput8==1)) {
  	
  	fnweightno=45;
  }
// 47
   else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==1)&&(fninput4==-1)&&(fninput5==1)&&(fninput6==1)&&(fninput7==1)&&(fninput8==-1)) {
  	
  	fnweightno=46;
  }
// 48
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==1)&&(fninput4==-1)&&(fninput5==1)&&(fninput6==1)&&(fninput7==1)&&(fninput8==1)) {
  	
  	fnweightno=47;
  }
// 49
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==1)&&(fninput4==1)&&(fninput5==-1)&&(fninput6==-1)&&(fninput7==-1)&&(fninput8==-1)) {
  	
  	fnweightno=48;
  }
// 50
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==1)&&(fninput4==1)&&(fninput5==-1)&&(fninput6==-1)&&(fninput7==-1)&&(fninput8==1)) {
  	
  	fnweightno=49;
  }
// 51
   else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==1)&&(fninput4==1)&&(fninput5==-1)&&(fninput6==-1)&&(fninput7==1)&&(fninput8==-1)) {
  	
  	fnweightno=50;
  }
// 52
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==1)&&(fninput4==1)&&(fninput5==-1)&&(fninput6==-1)&&(fninput7==1)&&(fninput8==1)) {
  	
  	fnweightno=51;
  }
// 53
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==1)&&(fninput4==1)&&(fninput5==-1)&&(fninput6==1)&&(fninput7==-1)&&(fninput8==-1)) {
  	
  	fnweightno=52;
  }
// 54
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==1)&&(fninput4==1)&&(fninput5==-1)&&(fninput6==1)&&(fninput7==-1)&&(fninput8==1)) {
  	
  	fnweightno=53;
  }
// 55
   else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==1)&&(fninput4==1)&&(fninput5==-1)&&(fninput6==1)&&(fninput7==1)&&(fninput8==-1)) {
  	
  	fnweightno=54;
  }
// 56
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==1)&&(fninput4==1)&&(fninput5==-1)&&(fninput6==1)&&(fninput7==1)&&(fninput8==1)) {
  	
  	fnweightno=55;
  }
  
// 57
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==1)&&(fninput4==1)&&(fninput5==1)&&(fninput6==-1)&&(fninput7==-1)&&(fninput8==-1)) {
  	
  	fnweightno=56;
  }
// 58
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==1)&&(fninput4==1)&&(fninput5==1)&&(fninput6==-1)&&(fninput7==-1)&&(fninput8==1)) {
  	
  	fnweightno=57;
  }
// 59
   else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==1)&&(fninput4==1)&&(fninput5==1)&&(fninput6==-1)&&(fninput7==1)&&(fninput8==-1)) {
  	
  	fnweightno=58;
  }
// 60
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==1)&&(fninput4==1)&&(fninput5==1)&&(fninput6==-1)&&(fninput7==1)&&(fninput8==1)) {
  	
  	fnweightno=59;
  }
// 61
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==1)&&(fninput4==1)&&(fninput5==1)&&(fninput6==1)&&(fninput7==-1)&&(fninput8==-1)) {
  	
  	fnweightno=60;
  }
// 62
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==1)&&(fninput4==1)&&(fninput5==1)&&(fninput6==1)&&(fninput7==-1)&&(fninput8==1)) {
  	
  	fnweightno=61;
  }
// 63
   else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==1)&&(fninput4==1)&&(fninput5==1)&&(fninput6==1)&&(fninput7==1)&&(fninput8==-1)) {
  	
  	fnweightno=62;
  }
// 64
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==1)&&(fninput4==1)&&(fninput5==1)&&(fninput6==1)&&(fninput7==1)&&(fninput8==1)) {
  	
  	fnweightno=63;
  }

  else if ((fninput1==0)&&(fninput2==0)&&(fninput3==0)&&(fninput4==0)&&(fninput5==0)&&(fninput6==0)&&(fninput7==0)&&(fninput8==0)) {
  	
  	fnweightno=65;
  } 
  
  else if ((fninput1==-1)&&(fninput2==-1)&&(fninput3==0)&&(fninput4==0)&&(fninput5==0)&&(fninput6==0)&&(fninput7==0)&&(fninput8==0)) {
  	
  	fnweightno=64;
  }  
  
//  std::cout<<fnweightno<<std::endl;
	
  return fnweightno;

}

#endif