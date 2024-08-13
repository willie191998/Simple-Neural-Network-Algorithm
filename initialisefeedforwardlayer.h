#ifndef INITIALISEFEEDFORWARDLAYER_H
#define INITIALISEFEEDFORWARDLAYER_H

#include<header.h>

void NN::FNN_INITIALISE_FEEDFORWARD_LAYER () {
	
   int fn1,fn2,fnsignal1,fnselector,fnsignal2,fn1layerlength,fn2layerlength;
   float fftsum,fftwritevalue,fftsignal;
   
   
   mNNfileW.open("weightvalues.txt", std::ios::out);
   mNNfileB.open("biasvalues.txt", std::ios::out);
   
//   std::cout << mNNnlayerbreadth << std::endl;
   for (fnselector=0; fnselector<=mNNnlayerbreadth; fnselector++) {

    if (fnselector==0){
  	fn2layerlength=mNNn1stlayerlength;
  	fn1layerlength=mNNninputlayerlength; }
  
    else if (fnselector==1){
  	fn2layerlength=mNNn2ndlayerlength;
  	fn1layerlength=mNNn1stlayerlength; }
  
    else if (fnselector==2){
  	fn2layerlength=mNNn3rdlayerlength;
  	fn1layerlength=mNNn2ndlayerlength; }
  	
    else if (fnselector==3){
  	fn2layerlength=mNNn4thlayerlength;
  	fn1layerlength=mNNn3rdlayerlength; }
     
    else if (fnselector==4){
  	fn2layerlength=mNNn5thlayerlength;
  	fn1layerlength=mNNn4thlayerlength; }
    
    else if (fnselector==5){
  	fn2layerlength=mNNn6thlayerlength;
  	fn1layerlength=mNNn5thlayerlength; }
    
    else if (fnselector==6){
  	fn2layerlength=mNNn7thlayerlength;
  	fn1layerlength=mNNn6thlayerlength; }
    
    else if (fnselector==7){
  	fn2layerlength=mNNn8thlayerlength;
  	fn1layerlength=mNNn7thlayerlength; }
    
    else if (fnselector==8){
  	fn2layerlength=mNNn9thlayerlength;
  	fn1layerlength=mNNn8thlayerlength; }
    
    else if (fnselector==9){
  	fn2layerlength=mNNn10thlayerlength;
  	fn1layerlength=mNNn9thlayerlength; }
    
    else if (fnselector==10){
  	fn2layerlength=mNNn11thlayerlength;
  	fn1layerlength=mNNn10thlayerlength; }
    
/*    else if (fnselector==11){
  	fn2layerlength=mNNnoutputlayerlength;
  	fn1layerlength=mNNnoutputlayerlength; } */
    



//this code initialises weights

  fftsum=0;

  for (fn2=1; fn2<=fn2layerlength; fn2++) {
    
   for (fn1=1; fn1<=fn1layerlength; fn1++) {
    
    fftwritevalue = FGLOBAL_GENERATE_RANDOM_NUMBER(0.3,fn2,fn1);
    
    
    fftsum += fftwritevalue;
	if (abs(fftsum) > 0.05) {
		float ffthold;
		ffthold = (fftsum/1.5);
		fftwritevalue += ffthold;
		fftsum -= ffthold;
	}
	
	else if ((fn1==fn1layerlength) && (fn2==fn2layerlength)) {
		
		fftwritevalue += fftsum;
		fftsum=0;
	}
	mNNfileW << fftwritevalue << std::endl;
    
   }
  }


//this code initialises bias

  fftsum=0;
  
  for (fn1=1; fn1<=fn2layerlength; fn1++) {
  	
  	fftwritevalue = FGLOBAL_GENERATE_RANDOM_NUMBER(0.8,fn1,3);
    
    
    fftsum += fftwritevalue;
	if (abs(fftsum) > 0.05) {
		float ffthold;
		ffthold = (fftsum/1.5);
		fftwritevalue += ffthold;
		fftsum -= ffthold;
	}
	
	else if (fn1==fn1layerlength) {
		
		fftwritevalue += fftsum;
		fftsum=0;
	}
	mNNfileB<<fftwritevalue<<std::endl;
    
   }
  
  }
  
  mNNfileW.close();
  mNNfileB.close();
}
  

#endif