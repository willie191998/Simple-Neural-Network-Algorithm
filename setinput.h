#ifndef SETINPUT_H
#define SETINPUT_H

#include<header.h>

void NN::FNN_SET_INPUT () {
	
    int fn1,fn2;
    
	
	for (fn1=0; fn1<mNNndatainputlength; fn1++) {
      int fnhold;
      mNNfiledatainput>>fnhold;
      if (fnhold==EOF)
         break;
         
      if (fnhold==9)
         fnhold=-1; 
         
      mNNndatainput[fn1]=fnhold;
      
//      std::cout<<mNNndatainput[fn1]<<std::endl;
    }
    
    for (fn2=0; fn2<mNNndataoutputlength; fn2++) {
      int fnhold;
      mNNfiledataoutput>>fnhold;
      if (fnhold==EOF)
         break;
         
      if (fnhold==9)
         fnhold=-1;
      
      mNNndataoutput[fn2]=fnhold;
//       std::cout<<mNNndataoutput[fn2]<<std::endl;
    }

    
    if ((fn1!=48)||(fn2!=24)) {
       std::cout<<"an error occurred, incomplete sentence input/output"<<std::endl;
       mNNfiledatainput.seekg ( std::ios::beg);
       mNNfiledataoutput.seekg ( std::ios::beg);
       
       mNNntrainingepochno=1;
     }
     
     

}



void NN::FNN_SET_INPUT_TO_FEEDFORWARD () {
	int fn1;
	
	mNNninputlayerlength = mNNndatainputlength;
	
	for (fn1=0; fn1<mNNndatainputlength; fn1++) {
		
		mNNdbinputlayervalue[fn1] = mNNndatainput[fn1];
		
	}

}

#endif