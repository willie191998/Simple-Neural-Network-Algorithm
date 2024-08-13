#ifndef ATTENTIONLAYER2_H
#define ATTENTIONLAYER2_H

#include"header.h"

void NN::FNN_UPDATE_ATTENTION_LAYER () {
	int fn1,fn2;
	
	double fdbupdateconstant;
	
	fdbupdateconstant = 1-((mNNdblearningrate*mNNdbregularisationconstant)/mNNndatasize);
    
	
	
	for (fn1=0; fn1<mNNnattentionweightlength; fn1++) {
		
	  for (fn2=0; fn2<mNNnattentionweightbreadth; fn2++) {
	    mNNdbAW[fn1][fn2] = (fdbupdateconstant*mNNdbAW[fn1][fn2]) - (mNNdblearningrate*mNNdbAWaverageerror[fn1][fn2]);
//	    std::cout<<"UAW"<<mNNdbAWaverageerror[fn1][fn2]<<std::endl;
	    
	  }
	}
	
//   std::cout<<"UAW"<<mNNdbAWaverageerror[64][4]<<std::endl;
}



void NN::FNN_SAVE_ATTENTION_LAYER () {
	
	int fn1,fn2;
  mNNfileAW.open("attentionweightvalues.txt", std::ios::out|std::ios::trunc);

    if (!(mNNfileAW.is_open())) {
    	std::cout<<"an error occurred trying to read file attention weight \n"<<std::endl;
  //	exit(1); 
  }
   
    for (fn1=0; fn1<mNNnattentionweightlength; fn1++) {
      
      for (fn2=0; fn2<mNNnattentionweightbreadth; fn2++) {
      	
    	mNNfileAW<<mNNdbAW[fn1][fn2]<<std::endl;
      }
    }
    mNNfileAW.close();
}



void NN::FNN_INITIALISE_ATTENTION_AVERAGE_ERROR () {
	
	int fn1,fn2;
	
	for (fn1=0; fn1<mNNnattentionweightlength; fn1++) {
		
	  for (fn2=0; fn2<mNNnattentionweightbreadth; fn2++) {
	    mNNdbAWaverageerror[fn1][fn2] = 0.000000;
	    
	  }
	}
}


#endif