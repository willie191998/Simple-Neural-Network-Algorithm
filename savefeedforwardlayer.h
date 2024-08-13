#ifndef SAVEFEEDFORWARDLAYER_H
#define SAVEFEEDFORWARDLAYER_H

#include"header.h"


void NN::FNN_SAVE_FEEDFORWARD_LAYER ()
{
   int fn1,fn2;
   
   
   
//weights and biases are saved from file.
   mNNfileW.open("weightvalues.txt", std::ios::out|std::ios::trunc);
   mNNfileB.open("biasvalues.txt", std::ios::out|std::ios::trunc);


    if ((!(mNNfileW.is_open()))||(!(mNNfileB.is_open()))) {
    	std::cout<<"an error occurred trying to read file weight or bias\n"<<std::endl;
  //	exit(1); 
  }
  
   if (mNNnlayerbreadth >= 0) {	
    
    for (fn1=0; fn1<mNNn1stlayerlength; fn1++) {
      mNNfileB<<mNNdbB1[fn1]<<std::endl;
      for (fn2=0; fn2<mNNninputlayerlength; fn2++) {
    	mNNfileW<<mNNdbW01[fn1][fn2]<<std::endl;
      }
    }
   }

   if (mNNnlayerbreadth >= 1) {
    
    for (fn1=0; fn1<mNNn2ndlayerlength; fn1++) {
      mNNfileB<<mNNdbB2[fn1]<<std::endl;
      for (fn2=0; fn2<mNNn1stlayerlength; fn2++) {
    	mNNfileW<<mNNdbW12[fn1][fn2]<<std::endl;
      }
     }
    }

    
   if (mNNnlayerbreadth >= 2) {
   	
    for (fn1=0; fn1<mNNn3rdlayerlength; fn1++) {
      mNNfileB<<mNNdbB3[fn1]<<std::endl;
      for (fn2=0; fn2<mNNn2ndlayerlength; fn2++) {
    	mNNfileW<<mNNdbW23[fn1][fn2]<<std::endl;
      }
     }
    }

    
    if (mNNnlayerbreadth >= 3) {
   	
    for (fn1=0; fn1<mNNn4thlayerlength; fn1++) {
      mNNfileB<<mNNdbB4[fn1]<<std::endl;
      for (fn2=0; fn2<mNNn3rdlayerlength; fn2++) {
    	mNNfileW<<mNNdbW34[fn1][fn2]<<std::endl;
      }
     }
    }
    
    if (mNNnlayerbreadth >= 4) {
   	
    for (fn1=0; fn1<mNNn5thlayerlength; fn1++) {
      mNNfileB<<mNNdbB5[fn1]<<std::endl;
      for (fn2=0; fn2<mNNn4thlayerlength; fn2++) {
    	mNNfileW<<mNNdbW45[fn1][fn2]<<std::endl;
      }
     }
    }
    
    if (mNNnlayerbreadth >= 5) {
   	
    for (fn1=0; fn1<mNNn6thlayerlength; fn1++) {
      mNNfileB<<mNNdbB6[fn1]<<std::endl;
      for (fn2=0; fn2<mNNn5thlayerlength; fn2++) {
    	mNNfileW<<mNNdbW56[fn1][fn2]<<std::endl;
      }
     }
    }
    
    
    if (mNNnlayerbreadth >= 6) {
   	
    for (fn1=0; fn1<mNNn7thlayerlength; fn1++) {
      mNNfileB<<mNNdbB7[fn1]<<std::endl;
      for (fn2=0; fn2<mNNn6thlayerlength; fn2++) {
    	mNNfileW<<mNNdbW67[fn1][fn2]<<std::endl;
      }
     }
    }
    
    
    if (mNNnlayerbreadth >= 7) {
   	
    for (fn1=0; fn1<mNNn8thlayerlength; fn1++) {
      mNNfileB<<mNNdbB3[fn1]<<std::endl;
      for (fn2=0; fn2<mNNn7thlayerlength; fn2++) {
    	mNNfileW<<mNNdbW78[fn1][fn2]<<std::endl;
      }
     }
    }
    
    
    if (mNNnlayerbreadth >= 8) {
   	
    for (fn1=0; fn1<mNNn9thlayerlength; fn1++) {
      mNNfileB<<mNNdbB9[fn1]<<std::endl;
      for (fn2=0; fn2<mNNn8thlayerlength; fn2++) {
    	mNNfileW<<mNNdbW89[fn1][fn2]<<std::endl;
      }
     }
    }
    
    
    if (mNNnlayerbreadth >= 9) {
   	
    for (fn1=0; fn1<mNNn10thlayerlength; fn1++) {
      mNNfileB<<mNNdbB10[fn1]<<std::endl;
      for (fn2=0; fn2<mNNn9thlayerlength; fn2++) {
    	mNNfileW<<mNNdbW910[fn1][fn2]<<std::endl;
      }
     }
    }
    
    
    if (mNNnlayerbreadth >= 10) {
   	
    for (fn1=0; fn1<mNNn11thlayerlength; fn1++) {
      mNNfileB<<mNNdbB11[fn1]<<std::endl;
      for (fn2=0; fn2<mNNn10thlayerlength; fn2++) {
    	mNNfileW<<mNNdbW1011[fn1][fn2]<<std::endl;
      }
     }
    }
    
    mNNfileW.close();
    mNNfileB.close();
}   
    
#endif