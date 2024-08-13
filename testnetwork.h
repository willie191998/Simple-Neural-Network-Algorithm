#ifndef TESTNETWORK_H
#define TESTNETWORK_H

#include<header.h>

void NN::FNN_TEST_NETWORK () {
	
	using namespace std;
	
	ifstream ffiledatainput,
	         ffiledataoutput;
	         
	bool fboolprintaccuracy;
	int fndatanumber;
	
	
	mNNnnetworkaccuracy=0;
	
/*	
	FNN_SET_ATTENTION_LAYER ();
    FNN_SET_FEEDFORWARD_LAYER (); */
    
    std::cout<<"would you like to display accuracy-\n0:NO\n1:YES "<<std::endl;
	std::cin>>fboolprintaccuracy;
   
       ffiledatainput.open("sentence_numbers_input.txt", std::ios::in);
    ffiledataoutput.open("sentence_numbers_output.txt", std::ios::in);
	 
	 
	 for (fndatanumber=0; fndatanumber<mNNndatasize; fndatanumber++) {
   
    //FNN_SET_INPUT ();
    int fn1,fn2;
    
	
	for (fn1=0; fn1<mNNndatainputlength; fn1++) {
      int fnhold;
      ffiledatainput>>fnhold;
      if (fnhold==EOF)
         break;
         
      if (fnhold==9)
         fnhold=-1; 
         
      mNNndatainput[fn1]=fnhold;
      
      //std::cout<<mNNndatainput[fn1]<<std::endl;
    }
    
    for (fn2=0; fn2<mNNndataoutputlength; fn2++) {
      int fnhold;
      ffiledataoutput>>fnhold;
      if (fnhold==EOF)
         break;
         
      if (fnhold==9)
         fnhold=-1;
      
      mNNndataoutput[fn2]=fnhold;
       //std::cout<<mNNndataoutput[fn2]<<std::endl;
    }

    
    if ((fn1!=48)||(fn2!=24)) {
       std::cout<<"an error occurred, incomplete sentence input/output"<<std::endl;
       ffiledatainput.seekg ( std::ios::beg);
       ffiledataoutput.seekg ( std::ios::beg);
       
     }
   FNN_FORWARD_PROPAGATE_ATTENTION_LAYER ();
   FNN_FORWARD_PROPAGATE_FEEDFORWARD_LAYER ();
   
   
   mNNnnetworkaccuracy += FNN_CHECK_ACCURACY(fboolprintaccuracy);
	 }
	 
	 
/*    
    FNN_SAVE_ATTENTION_LAYER ();
    FNN_SAVE_FEEDFORWARD_LAYER ();
    */
   
    cout<<"NETWORK ACCURACY = "<<mNNnnetworkaccuracy<<endl;
    
    cout<<"press 1 to continue"<<endl;
	cin>>fboolprintaccuracy;
    
    
    ffiledatainput.close();
    ffiledataoutput.close();
    
}

#endif