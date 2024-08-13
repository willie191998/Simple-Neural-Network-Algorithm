#ifndef CHECKACCURACY_H
#define CHECKACCURACY_H

#include"header.h"



bool NN::FNN_CHECK_ACCURACY (bool fboolprintaccuracy)
{
	
	
	
	int fn1,
	    fn2,
	    fnaccuracy=0;
	    
	    
	
	for (fn1=0; fn1<mNNnoutputlayerlength; fn1++) {
	using namespace restrictoutput; 
	
	 if ( (outputactivationfunction(mNNdboutputlayervalue[fn1])) == (mNNndataoutput[fn1])) {
	 	fnaccuracy++; }
	}
	
	if (fboolprintaccuracy==1) {
	     std::cout<<fnaccuracy<<std::endl; } 
	
	if (fnaccuracy==mNNnoutputlayerlength) {
	  return 1; }
	
	else { 
	  return 0; }
	
}	 
	 
#endif