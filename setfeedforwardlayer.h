#ifndef SETFEEDFORWARDLAYER_H
#define SETFEEDFORWARDLAYER_H

#include<header.h>

void NN::FNN_SET_FEEDFORWARD_LAYER ()
{
   int fn1,fn2;
   
   
   
//weights and biases are loaded from file.
   mNNfileW.open("weightvalues.txt", std::ios::in);
   mNNfileB.open("biasvalues.txt", std::ios::in);


    if ((!(mNNfileW.is_open()))||(!(mNNfileB.is_open()))) {
    	std::cout<<"an error occurred trying to read file weight or bias\n"<<std::endl;
  //	exit(1); 
  }
   
   
   
   if (mNNnlayerbreadth >= 0) {
   	
    //mNNnoutputlayerlength = mNNn1stlayerlength;
    
    if ((mNNfileB.eof())||(mNNfileW.eof())) {
   	for (fn1=0; fn1<mNNn1stlayerlength; fn1++) {
        mNNdbB1[fn1]=FGLOBAL_GENERATE_RANDOM_NUMBER (0.7,fn1,3);
        for (fn2=0; fn2<mNNninputlayerlength; fn2++) {
    	 mNNdbW01[fn1][fn2]=FGLOBAL_GENERATE_RANDOM_NUMBER (0.3,fn1,fn2);
       }
      }
    }
    
    else {
     for (fn1=0; fn1<mNNn1stlayerlength; fn1++) {
      mNNfileB>>mNNdbB1[fn1];
       for (fn2=0; fn2<mNNninputlayerlength; fn2++) {
    	mNNfileW>>mNNdbW01[fn1][fn2];
       }
      }
     }
    }
   
   
   if (mNNnlayerbreadth >= 1) {
   
    //mNNnoutputlayerlength = mNNn2ndlayerlength;
    
    if ((mNNfileB.eof())||(mNNfileW.eof())) {
       
   	for (fn1=0; fn1<mNNn2ndlayerlength; fn1++) {
   		
        mNNdbB2[fn1]=FGLOBAL_GENERATE_RANDOM_NUMBER (0.8,fn1,3);
        
        for (fn2=0; fn2<mNNn1stlayerlength; fn2++) {
    	 mNNdbW12[fn1][fn2]=FGLOBAL_GENERATE_RANDOM_NUMBER (0.3,fn1,fn2);
       }
      }
    }
    
    else {
     for (fn1=0; fn1<mNNn2ndlayerlength; fn1++) {
      mNNfileB>>mNNdbB2[fn1];
       for (fn2=0; fn2<mNNn1stlayerlength; fn2++) {
    	mNNfileW>>mNNdbW12[fn1][fn2];
       }
      }
     }
    }

   
   if (mNNnlayerbreadth >= 2) {
    
    //mNNnoutputlayerlength = mNNn3rdlayerlength;
    
     if ((mNNfileB.eof())||(mNNfileW.eof())) {
  	for (fn1=0; fn1<mNNn3rdlayerlength; fn1++) {
        mNNdbB3[fn1]=FGLOBAL_GENERATE_RANDOM_NUMBER (0.7,fn1,3);
        for (fn2=0; fn2<mNNn2ndlayerlength; fn2++) {
    	 mNNdbW23[fn1][fn2]=FGLOBAL_GENERATE_RANDOM_NUMBER (0.3,fn1,fn2);
       }
      }
      
    }
    
    else {
     for (fn1=0; fn1<mNNn3rdlayerlength; fn1++) {
      mNNfileB>>mNNdbB3[fn1];
       for (fn2=0; fn2<mNNn2ndlayerlength; fn2++) {
    	mNNfileW>>mNNdbW23[fn1][fn2];
       }
      }
     }
    }

    
    if (mNNnlayerbreadth >= 3) {
    	
     //mNNnoutputlayerlength = mNNn4thlayerlength;
    
    if ((mNNfileB.eof())||(mNNfileW.eof())) {
   	for (fn1=0; fn1<mNNn4thlayerlength; fn1++) {
        mNNdbB4[fn1]=FGLOBAL_GENERATE_RANDOM_NUMBER (0.7,fn1,3);
        for (fn2=0; fn2<mNNn3rdlayerlength; fn2++) {
    	 mNNdbW34[fn1][fn2]=FGLOBAL_GENERATE_RANDOM_NUMBER (0.3,fn1,fn2);
       }
      }
    }
    
    else {	
     for (fn1=0; fn1<mNNn4thlayerlength; fn1++) {
      mNNfileB>>mNNdbB4[fn1];
       for (fn2=0; fn2<mNNn3rdlayerlength; fn2++) {
    	mNNfileW>>mNNdbW34[fn1][fn2];
       }
      }
     }
    }
    
    
    if (mNNnlayerbreadth >= 4) {
     
     //mNNnoutputlayerlength = mNNn5thlayerlength;
    
    if ((mNNfileB.eof())||(mNNfileW.eof())) {
   	for (fn1=0; fn1<mNNn5thlayerlength; fn1++) {
        mNNdbB5[fn1]=FGLOBAL_GENERATE_RANDOM_NUMBER (0.7,fn1,3);
        for (fn2=0; fn2<mNNn4thlayerlength; fn2++) {
    	 mNNdbW45[fn1][fn2]=FGLOBAL_GENERATE_RANDOM_NUMBER (0.3,fn1,fn2);
       }
      }
    }
    
    else {	
     for (fn1=0; fn1<mNNn5thlayerlength; fn1++) {
      mNNfileB>>mNNdbB5[fn1];
       for (fn2=0; fn2<mNNn4thlayerlength; fn2++) {
    	mNNfileW>>mNNdbW45[fn1][fn2];
       }
      }
     }
    }
    
    
    if (mNNnlayerbreadth >= 5) {
     
     //mNNnoutputlayerlength = mNNn6thlayerlength;
    
    if ((mNNfileB.eof())||(mNNfileW.eof())) {
   	for (fn1=0; fn1<mNNn6thlayerlength; fn1++) {
        mNNdbB6[fn1]=FGLOBAL_GENERATE_RANDOM_NUMBER (0.7,fn1,3);
        for (fn2=0; fn2<mNNn5thlayerlength; fn2++) {
    	 mNNdbW56[fn1][fn2]=FGLOBAL_GENERATE_RANDOM_NUMBER (0.3,fn1,fn2);
       }
      }
    }
    
    else {	
     for (fn1=0; fn1<mNNn6thlayerlength; fn1++) {
      mNNfileB>>mNNdbB6[fn1];
       for (fn2=0; fn2<mNNn5thlayerlength; fn2++) {
    	mNNfileW>>mNNdbW56[fn1][fn2];
       }
      }
     }
    }
    
    
    if (mNNnlayerbreadth >= 6) {
     
     //mNNnoutputlayerlength = mNNn7thlayerlength;
     
     if ((mNNfileB.eof())||(mNNfileW.eof())) {
   	for (fn1=0; fn1<mNNn7thlayerlength; fn1++) {
        mNNdbB7[fn1]=FGLOBAL_GENERATE_RANDOM_NUMBER (0.7,fn1,3);
        for (fn2=0; fn2<mNNn6thlayerlength; fn2++) {
    	 mNNdbW67[fn1][fn2]=FGLOBAL_GENERATE_RANDOM_NUMBER (0.3,fn1,fn2);
       }
      }
    }
    
    else {
     for (fn1=0; fn1<mNNn7thlayerlength; fn1++) {
      mNNfileB>>mNNdbB7[fn1];
       for (fn2=0; fn2<mNNn6thlayerlength; fn2++) {
    	mNNfileW>>mNNdbW67[fn1][fn2];
       }
      }
     }
    }
    
    
    if (mNNnlayerbreadth >= 7) {
     
     //mNNnoutputlayerlength = mNNn8thlayerlength;
    
    if ((mNNfileB.eof())||(mNNfileW.eof())) {
   	for (fn1=0; fn1<mNNn8thlayerlength; fn1++) {
        mNNdbB8[fn1]=FGLOBAL_GENERATE_RANDOM_NUMBER (0.7,fn1,3);
        for (fn2=0; fn2<mNNn7thlayerlength; fn2++) {
    	 mNNdbW78[fn1][fn2]=FGLOBAL_GENERATE_RANDOM_NUMBER (0.3,fn1,fn2);
       }
      }
    }
    
    else {	
     for (fn1=0; fn1<mNNn8thlayerlength; fn1++) {
      mNNfileB>>mNNdbB3[fn1];
       for (fn2=0; fn2<mNNn7thlayerlength; fn2++) {
    	mNNfileW>>mNNdbW78[fn1][fn2];
       }
      }
     }
    }
    
    
    if (mNNnlayerbreadth >= 8) {
     
     //mNNnoutputlayerlength = mNNn9thlayerlength;
    
    if ((mNNfileB.eof())||(mNNfileW.eof())) {
   	for (fn1=0; fn1<mNNn9thlayerlength; fn1++) {
        mNNdbB9[fn1]=FGLOBAL_GENERATE_RANDOM_NUMBER (0.7,fn1,3);
        for (fn2=0; fn2<mNNn8thlayerlength; fn2++) {
    	 mNNdbW89[fn1][fn2]=FGLOBAL_GENERATE_RANDOM_NUMBER (0.3,fn1,fn2);
       }
      }
    }
    
    else {	
     for (fn1=0; fn1<mNNn9thlayerlength; fn1++) {
      mNNfileB>>mNNdbB9[fn1];
       for (fn2=0; fn2<mNNn8thlayerlength; fn2++) {
    	mNNfileW>>mNNdbW89[fn1][fn2];
       }
      }
     }
    }
    
    
    if (mNNnlayerbreadth >= 9) {
     
     //mNNnoutputlayerlength = mNNn10thlayerlength;
     
     if ((mNNfileB.eof())||(mNNfileW.eof())) {
   	for (fn1=0; fn1<mNNn10thlayerlength; fn1++) {
        mNNdbB10[fn1]=FGLOBAL_GENERATE_RANDOM_NUMBER (0.7,fn1,3);
        for (fn2=0; fn2<mNNn9thlayerlength; fn2++) {
    	 mNNdbW910[fn1][fn2]=FGLOBAL_GENERATE_RANDOM_NUMBER (0.3,fn1,fn2);
       }
      }
    }
    
    else {
     for (fn1=0; fn1<mNNn10thlayerlength; fn1++) {
      mNNfileB>>mNNdbB10[fn1];
       for (fn2=0; fn2<mNNn9thlayerlength; fn2++) {
    	mNNfileW>>mNNdbW910[fn1][fn2];
       }
      }
     }
    }
    
    
    if (mNNnlayerbreadth >= 10) {
     
     //mNNnoutputlayerlength = mNNn11thlayerlength;
    
    if ((mNNfileB.eof())||(mNNfileW.eof())) {
   	for (fn1=0; fn1<mNNn11thlayerlength; fn1++) {
        mNNdbB11[fn1]=FGLOBAL_GENERATE_RANDOM_NUMBER (0.7,fn1,3);
        for (fn2=0; fn2<mNNn10thlayerlength; fn2++) {
    	 mNNdbW1011[fn1][fn2]=FGLOBAL_GENERATE_RANDOM_NUMBER (0.3,fn1,fn2);
       }
      }
    }
    
    else {
     for (fn1=0; fn1<mNNn11thlayerlength; fn1++) {
      mNNfileB>>mNNdbB11[fn1];
       for (fn2=0; fn2<mNNn10thlayerlength; fn2++) {
    	mNNfileW>>mNNdbW1011[fn1][fn2];
       }
      }
     }
    }
    
    
/*    for (fn1=0; fn1<mNNnoutputlayerlength; fn1++) {
      mNNfileB>>mNNdbBo[fn1];
      for (fn2=0; fn2<mNNnlastlayerlength; fn2++) {
    	mNNfileW>>WLo[fn1][fn2];
      }
    }  */
         
 mNNfileW.close();
 mNNfileB.close();

}



#endif