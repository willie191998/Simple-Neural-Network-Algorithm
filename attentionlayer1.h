#ifndef ATTENTIONLAYER1_H
#define ATTENTIONLAYER1_H

#include"header.h"


void NN::FNN_FORWARD_PROPAGATE_ATTENTION_LAYER () {
	
	int fn1,fn2,fnattentionno[8];
	
	mNNnattentioninputsize = (mNNndatainputlength/mNNnattentionweightbreadth);
	
   for (fn1=0; fn1<mNNnattentioninputsize; fn1++) {
   	
     mNNnattentionno[fn1] = FGLOBAL_SELECT_ATTENTION_WEIGHT_NO (6,-1,-1,mNNndatainput[(fn1*mNNnattentionweightbreadth)+0], mNNndatainput[(fn1*mNNnattentionweightbreadth)+1], mNNndatainput[(fn1*mNNnattentionweightbreadth)+2], mNNndatainput[(fn1*mNNnattentionweightbreadth)+3], mNNndatainput[(fn1*mNNnattentionweightbreadth)+4], mNNndatainput[(fn1*mNNnattentionweightbreadth)+5]);
/*    
    std::cout<<"att no "<<fn1<<mNNnattentionno[2]<<std::endl;
    std::cout<<"att no "<<mNNnattentionno[7]<<std::endl; */
  
    for (fn2=0; fn2<mNNnattentioninputsize; fn2++) {
       
//     std::cout<<"fn2 "<<fn2<<std::endl;
      mNNdbinputlayervalue[(fn1*mNNnattentioninputsize)+fn2] = 
       (      (mNNndatainput[(fn2*mNNnattentionweightbreadth)+0] * mNNdbAW[mNNnattentionno[fn1]][0]) + 
       (mNNndatainput[(fn2*mNNnattentionweightbreadth)+1] * mNNdbAW[mNNnattentionno[fn1]][1]) + 
       (mNNndatainput[(fn2*mNNnattentionweightbreadth)+2] * mNNdbAW[mNNnattentionno[fn1]][2]) + 
       (mNNndatainput[(fn2*mNNnattentionweightbreadth)+3] * mNNdbAW[mNNnattentionno[fn1]][3]) + 
       (mNNndatainput[(fn2*mNNnattentionweightbreadth)+4] * mNNdbAW[mNNnattentionno[fn1]][4]) + 
       (mNNndatainput[(fn2*mNNnattentionweightbreadth)+5] * mNNdbAW[mNNnattentionno[fn1]][5]));
//       std::cout<<"AW"<<mNNdbinputlayervalue[(fn1*mNNnattentioninputsize)+fn2]<<std::endl;
       
     }
   }
/*    std::cout<<"AW"<<mNNdbinputlayervalue[1]<<std::endl;
   std::cout<<"AW"<<mNNdbinputlayervalue[5]<<std::endl; */
}



void NN::FNN_SET_ATTENTION_LAYER () {
	
	int fn1,fn2;
  mNNfileAW.open("attentionweightvalues.txt", std::ios::in);

    if (!(mNNfileAW.is_open())) {
    	std::cout<<"an error occurred trying to read file, attention weight\n"<<std::endl;
  //	exit(1); 
  }
   
    for (fn1=0; fn1<mNNnattentionweightlength; fn1++) {
      
      for (fn2=0; fn2<mNNnattentionweightbreadth; fn2++) {
      	
    	mNNfileAW>>mNNdbAW[fn1][fn2];
      }
    }
    mNNfileAW.close();
    
}

  

//propagate errors from 1st layer to attention weights
void NN::FNN_BACKWARD_PROPAGATE_ATTENTION_LAYER () {
	
	int fn2,fn1=0,fncheck;
	
//	FNN_BACKWARD_MULTIPLY_LAYER_1_0 ();
	 
	  for (fn2=0; fn2<mNNninputlayerlength; fn2++) {
	  	
	    fncheck=(fn2 % 8);
	    if (fncheck==7)
	  	    fn1++;
	     mNNdbAWerror[mNNnattentionno[fn1]][0] = mNNdbinputlayererror[fn2] * mNNndatainput[(fncheck*mNNnattentionweightbreadth)+0];
	     
	     mNNdbAWaverageerror[mNNnattentionno[fn1]][0]=((mNNdbAWaverageerror[mNNnattentionno[fn1]][0] * (fncheck)) + mNNdbAWerror[mNNnattentionno[fn1]][0])/(fncheck+1);
	    
	   if (fncheck==7) { mNNdbAWaverageerror[mNNnattentionno[fn1]][0]=((mNNdbAWaverageerror[mNNnattentionno[fn1]][0] * (mNNntrainingepochno-1)) + mNNdbAWerror[mNNnattentionno[fn1]][0])/(mNNntrainingepochno); }
	     

	     	     mNNdbAWerror[mNNnattentionno[fn1]][1] = mNNdbinputlayererror[fn2] * mNNndatainput[(fncheck*mNNnattentionweightbreadth)+1];
	      
	     mNNdbAWaverageerror[mNNnattentionno[fn1]][1]=((mNNdbAWaverageerror[mNNnattentionno[fn1]][1] * (fncheck)) + mNNdbAWerror[mNNnattentionno[fn1]][1])/(fncheck+1);
	     
	     if (fncheck==7) { mNNdbAWaverageerror[mNNnattentionno[fn1]][1]=((mNNdbAWaverageerror[mNNnattentionno[fn1]][1] * (mNNntrainingepochno-1)) + mNNdbAWerror[mNNnattentionno[fn1]][1])/(mNNntrainingepochno); }
	     
	     
	     mNNdbAWerror[mNNnattentionno[fn1]][2] = mNNdbinputlayererror[fn2] * mNNndatainput[(fncheck*mNNnattentionweightbreadth)+2];
	     mNNdbAWaverageerror[mNNnattentionno[fn1]][2]=((mNNdbAWaverageerror[mNNnattentionno[fn1]][2] * (fncheck)) + mNNdbAWerror[mNNnattentionno[fn1]][2])/(fncheck+1);
	     
	     if (fncheck==7) { mNNdbAWaverageerror[mNNnattentionno[fn1]][2]=((mNNdbAWaverageerror[mNNnattentionno[fn1]][2] * (mNNntrainingepochno-1)) + mNNdbAWerror[mNNnattentionno[fn1]][2])/(mNNntrainingepochno); }
	     
	     
	     
	     mNNdbAWerror[mNNnattentionno[fn1]][3] = mNNdbinputlayererror[fn2] * mNNndatainput[(fncheck*mNNnattentionweightbreadth)+3];
	     mNNdbAWaverageerror[mNNnattentionno[fn1]][3]=((mNNdbAWaverageerror[mNNnattentionno[fn1]][3] * (fncheck)) + mNNdbAWerror[mNNnattentionno[fn1]][3])/(fncheck+1);
	     
	     if (fncheck==7) { mNNdbAWaverageerror[mNNnattentionno[fn1]][3]=((mNNdbAWaverageerror[mNNnattentionno[fn1]][3] * (mNNntrainingepochno-1)) + mNNdbAWerror[mNNnattentionno[fn1]][3])/(mNNntrainingepochno); }
	     
	     
	     mNNdbAWerror[mNNnattentionno[fn1]][4] = mNNdbinputlayererror[fn2] * mNNndatainput[(fncheck*mNNnattentionweightbreadth)+4];
	     mNNdbAWaverageerror[mNNnattentionno[fn1]][4]=((mNNdbAWaverageerror[mNNnattentionno[fn1]][4] * (fncheck)) + mNNdbAWerror[mNNnattentionno[fn1]][4])/(fncheck+1);
	     
	     if (fncheck==7) { mNNdbAWaverageerror[mNNnattentionno[fn1]][4]=((mNNdbAWaverageerror[mNNnattentionno[fn1]][4] * (mNNntrainingepochno-1)) + mNNdbAWerror[mNNnattentionno[fn1]][4])/(mNNntrainingepochno); }
	     
	    
	    mNNdbAWerror[mNNnattentionno[fn1]][5] = mNNdbinputlayererror[fn2] * mNNndatainput[(fncheck*mNNnattentionweightbreadth)+5];
	     mNNdbAWaverageerror[mNNnattentionno[fn1]][5]=((mNNdbAWaverageerror[mNNnattentionno[fn1]][5] * (fncheck)) + mNNdbAWerror[mNNnattentionno[fn1]][5])/(fncheck+1);
	     
	     if (fncheck==7) { mNNdbAWaverageerror[mNNnattentionno[fn1]][5]=((mNNdbAWaverageerror[mNNnattentionno[fn1]][5] * (mNNntrainingepochno-1)) + mNNdbAWerror[mNNnattentionno[fn1]][5])/(mNNntrainingepochno); }  
	     
	  }
/*	std::cout<<"BPAW"<<mNNdbinputlayererror[2]<<std::endl;
	std::cout<<"BPAW"<<mNNdbinputlayererror[5]<<std::endl; */
}





void NN::FNN_INITIALISE_ATTENTION_LAYER () {
	
	
   int fn1,fn2,fnsignal1,fnselector,fnsignal2,fn1layerlength=65,fn2layerlength=6;
   float fftsum,fftwritevalue,fftsignal;
   //ostream mNNfileW,mNNfileB;
	
mNNfileAW.open("attentionweightvalues.txt", std::ios::out);
//this code initialises attention weights

  fftsum=0;
  
  for (fn1=1; fn1<=mNNnattentionweightlength; fn1++) {
  	
  	
   for (fn2=1; fn2<=mNNnattentionweightbreadth; fn2++) {
   	
  	fftwritevalue = FGLOBAL_GENERATE_RANDOM_NUMBER (0.5,fn1,fn2);
    
    fftsum += fftwritevalue;
	if (abs(fftsum) > 0.05){
		float ffthold;
		ffthold = (fftsum/1.5);
		fftwritevalue += ffthold;
		fftsum -= ffthold;
	}
	
	else if ((fn1==fn1layerlength) && (fn2==fn2layerlength)) {
		
		fftwritevalue += fftsum;
		fftsum=0;
	}
	
	mNNfileAW<<fftwritevalue<<std::endl;
    
   }
  }
  
  mNNfileAW.close();
}






#endif