#ifndef MOMENTUMVALUES_H
#define MOMENTUMVALUES_H

#include"header.h"

void NN::FNN_INITIALISE_MOMENTUM_VALUES () 
{
	int fn1,fn2;
	float fdbmomentumvalue=0.000010;
	
	
   if (mNNnlayerbreadth >= 0) {
	
	for (fn1=0; fn1<mNNn1stlayerlength; fn1++) {
      mNNdbB1momentum[fn1]=fdbmomentumvalue;
      for (fn2=0; fn2<mNNninputlayerlength; fn2++) {
    	mNNdbW01momentum[fn1][fn2]=fdbmomentumvalue;
      }
	 }
    }

   if (mNNnlayerbreadth >= 1) {
    
    for (fn1=0; fn1<mNNn2ndlayerlength; fn1++) {
      mNNdbB2momentum[fn1]=fdbmomentumvalue;
      for (fn2=0; fn2<mNNn1stlayerlength; fn2++) {
    	mNNdbW12momentum[fn1][fn2]=fdbmomentumvalue;
      }
     }
    }
	
	if (mNNnlayerbreadth >= 2) {
    
    for (fn1=0; fn1<mNNn3rdlayerlength; fn1++) {
      mNNdbB3momentum[fn1]=fdbmomentumvalue;
      for (fn2=0; fn2<mNNn2ndlayerlength; fn2++) {
    	mNNdbW23momentum[fn1][fn2]=fdbmomentumvalue;
      }
     }
    }
	
	if (mNNnlayerbreadth >= 3) {
    
    for (fn1=0; fn1<mNNn4thlayerlength; fn1++) {
      mNNdbB4momentum[fn1]=fdbmomentumvalue;
      for (fn2=0; fn2<mNNn3rdlayerlength; fn2++) {
    	mNNdbW34momentum[fn1][fn2]=fdbmomentumvalue;
      }
     }
    }
	
	if (mNNnlayerbreadth >= 4) {
    
    for (fn1=0; fn1<mNNn5thlayerlength; fn1++) {
      mNNdbB5momentum[fn1]=fdbmomentumvalue;
      for (fn2=0; fn2<mNNn4thlayerlength; fn2++) {
    	mNNdbW45momentum[fn1][fn2]=fdbmomentumvalue;
      }
     }
    }
	
	if (mNNnlayerbreadth >= 5) {
    
    for (fn1=0; fn1<mNNn6thlayerlength; fn1++) {
      mNNdbB6momentum[fn1]=fdbmomentumvalue;
      for (fn2=0; fn2<mNNn5thlayerlength; fn2++) {
    	mNNdbW56momentum[fn1][fn2]=fdbmomentumvalue;
      }
     }
    }
	
	if (mNNnlayerbreadth >= 6) {
    
    for (fn1=0; fn1<mNNn7thlayerlength; fn1++) {
      mNNdbB7momentum[fn1]=fdbmomentumvalue;
      for (fn2=0; fn2<mNNn6thlayerlength; fn2++) {
    	mNNdbW67momentum[fn1][fn2]=fdbmomentumvalue;
      }
     }
    }
	
	if (mNNnlayerbreadth >= 7) {
    
    for (fn1=0; fn1<mNNn8thlayerlength; fn1++) {
      mNNdbB8momentum[fn1]=fdbmomentumvalue;
      for (fn2=0; fn2<mNNn7thlayerlength; fn2++) {
    	mNNdbW78momentum[fn1][fn2]=fdbmomentumvalue;
      }
     }
    }
    
    if (mNNnlayerbreadth >= 8) {
    
    for (fn1=0; fn1<mNNn9thlayerlength; fn1++) {
      mNNdbB9momentum[fn1]=fdbmomentumvalue;
      for (fn2=0; fn2<mNNn8thlayerlength; fn2++) {
    	mNNdbW89momentum[fn1][fn2]=fdbmomentumvalue;
      }
     }
    }
    
	if (mNNnlayerbreadth >= 9) {
    
    for (fn1=0; fn1<mNNn10thlayerlength; fn1++) {
      mNNdbB10momentum[fn1]=fdbmomentumvalue;
      for (fn2=0; fn2<mNNn9thlayerlength; fn2++) {
    	mNNdbW910momentum[fn1][fn2]=fdbmomentumvalue;
      }
     }
    }
    
    if (mNNnlayerbreadth >= 10) {
    
    for (fn1=0; fn1<mNNn11thlayerlength; fn1++) {
      mNNdbB11momentum[fn1]=fdbmomentumvalue;
      for (fn2=0; fn2<mNNn10thlayerlength; fn2++) {
    	mNNdbW1011momentum[fn1][fn2]=fdbmomentumvalue;
      }
     }
    }
	
/*	for (fn1=0; fn1<mNNnoutputlayerlength; fn1++) {
      mNNdbmomentumBo[fn1]=fdbmomentumvalue;
      for (fn2=0; fn2<mNNnlastlayerlength; fn2++) {
    	mNNdbmomentumWLo[fn1][fn2]=fdbmomentumvalue;
      }
    } */
		
}



void NN::FNN_UPDATE_MOMENTUM_VALUES () {
	
	int fn1,fn2;
	double fdbupdateconstant;
	
	
    
    
   if (mNNnlayerbreadth >= 0) {

    for (fn1=0; fn1<mNNn1stlayerlength; fn1++) {
    	
     mNNdbB1momentum[fn1] = (mNNdbfriction*mNNdbB1momentum[fn1])-(mNNdblearningrate*mNNdbB1averageerror[fn1]);
     
     for (fn2=0; fn2<mNNninputlayerlength; fn2++) {
        
    	mNNdbW01momentum[fn1][fn2] = (mNNdbfriction*mNNdbW01momentum[fn1][fn2])-(mNNdblearningrate*mNNdbW01averageerror[fn1][fn2]);
    	
      }
     }
   }
   
   
   if (mNNnlayerbreadth >= 1) {

    for (fn1=0; fn1<mNNn2ndlayerlength; fn1++) {
    	
     mNNdbB2momentum[fn1] = (mNNdbfriction*mNNdbB2momentum[fn1])-(mNNdblearningrate*mNNdbB2averageerror[fn1]);
     
     for (fn2=0; fn2<mNNn1stlayerlength; fn2++) {
     	
        mNNdbW12momentum[fn1][fn2] = (mNNdbfriction*mNNdbW12momentum[fn1][fn2])-(mNNdblearningrate*mNNdbW12averageerror[fn1][fn2]);
    	
      }
     }
   }
   
   
   if (mNNnlayerbreadth >= 2) {

    for (fn1=0; fn1<mNNn3rdlayerlength; fn1++) {
    	
     mNNdbB3momentum[fn1] = (mNNdbfriction*mNNdbB3momentum[fn1])-(mNNdblearningrate*mNNdbB3averageerror[fn1]);
    
     for (fn2=0; fn2<mNNn2ndlayerlength; fn2++) {
     	
        mNNdbW23momentum[fn1][fn2] = (mNNdbfriction*mNNdbW23momentum[fn1][fn2])-(mNNdblearningrate*mNNdbW23averageerror[fn1][fn2]);
    
      }
     }
   }
   
   
   if (mNNnlayerbreadth >= 3) {

    for (fn1=0; fn1<mNNn4thlayerlength; fn1++) {
    	
     mNNdbB4momentum[fn1] = (mNNdbfriction*mNNdbB4momentum[fn1])-(mNNdblearningrate*mNNdbB4averageerror[fn1]);
     
     for (fn2=0; fn2<mNNn3rdlayerlength; fn2++) {
     	
        mNNdbW34momentum[fn1][fn2] = (mNNdbfriction*mNNdbW34momentum[fn1][fn2])-(mNNdblearningrate*mNNdbW34averageerror[fn1][fn2]);
    	
      }
     }
   }
   
   
   if (mNNnlayerbreadth >= 4) {

    for (fn1=0; fn1<mNNn5thlayerlength; fn1++) {
    	
     mNNdbB5momentum[fn1] = (mNNdbfriction*mNNdbB5momentum[fn1])-(mNNdblearningrate*mNNdbB5averageerror[fn1]);
     
     for (fn2=0; fn2<mNNn4thlayerlength; fn2++) {
     	
        mNNdbW45momentum[fn1][fn2] = (mNNdbfriction*mNNdbW45momentum[fn1][fn2])-(mNNdblearningrate*mNNdbW45averageerror[fn1][fn2]);
    	
      }
     }
   }
   
   
   if (mNNnlayerbreadth >= 5) {

    for (fn1=0; fn1<mNNn6thlayerlength; fn1++) {
    	
     mNNdbB6momentum[fn1] = (mNNdbfriction*mNNdbB6momentum[fn1])-(mNNdblearningrate*mNNdbB6averageerror[fn1]);
    
     for (fn2=0; fn2<mNNn5thlayerlength; fn2++) {
     	
        mNNdbW56momentum[fn1][fn2] = (mNNdbfriction*mNNdbW56momentum[fn1][fn2])-(mNNdblearningrate*mNNdbW56averageerror[fn1][fn2]);
    	
      }
     }
   }
   
   
   if (mNNnlayerbreadth >= 6) {

    for (fn1=0; fn1<mNNn7thlayerlength; fn1++) {
    	
     mNNdbB7momentum[fn1] = (mNNdbfriction*mNNdbB7momentum[fn1])-(mNNdblearningrate*mNNdbB7averageerror[fn1]);
     
     for (fn2=0; fn2<mNNn6thlayerlength; fn2++) {
     	
        mNNdbW67momentum[fn1][fn2] = (mNNdbfriction*mNNdbW67momentum[fn1][fn2])-(mNNdblearningrate*mNNdbW67averageerror[fn1][fn2]);
    	
      }
     }
   }
   
   
   if (mNNnlayerbreadth >= 7) {

    for (fn1=0; fn1<mNNn8thlayerlength; fn1++) {
    	
     mNNdbB8momentum[fn1] = (mNNdbfriction*mNNdbB8momentum[fn1])-(mNNdblearningrate*mNNdbB8averageerror[fn1]);
     
     for (fn2=0; fn2<mNNn7thlayerlength; fn2++) {
     	
        mNNdbW78momentum[fn1][fn2] = (mNNdbfriction*mNNdbW78momentum[fn1][fn2])-(mNNdblearningrate*mNNdbW78averageerror[fn1][fn2]);
    	
      }
     }
   }
   
   
   if (mNNnlayerbreadth >= 8) {

    for (fn1=0; fn1<mNNn9thlayerlength; fn1++) {
    	
     mNNdbB9momentum[fn1] = (mNNdbfriction*mNNdbB9momentum[fn1])-(mNNdblearningrate*mNNdbB9averageerror[fn1]);
    
     for (fn2=0; fn2<mNNn8thlayerlength; fn2++) {
        
        mNNdbW89momentum[fn1][fn2] = (mNNdbfriction*mNNdbW89momentum[fn1][fn2])-(mNNdblearningrate*mNNdbW89averageerror[fn1][fn2]);
    	
      }
     }
   }
   
   
   if (mNNnlayerbreadth >= 9) {

    for (fn1=0; fn1<mNNn10thlayerlength; fn1++) {
     
     mNNdbB10momentum[fn1] = (mNNdbfriction*mNNdbB10momentum[fn1])-(mNNdblearningrate*mNNdbB10averageerror[fn1]);
     
     for (fn2=0; fn2<mNNn9thlayerlength; fn2++) {
        
        mNNdbW910momentum[fn1][fn2] = (mNNdbfriction*mNNdbW910momentum[fn1][fn2])-(mNNdblearningrate*mNNdbW910averageerror[fn1][fn2]);
    	
      }
     }
   }
   
   
   if (mNNnlayerbreadth >= 10) {

    for (fn1=0; fn1<mNNn11thlayerlength; fn1++) {
     
     mNNdbB11momentum[fn1] = (mNNdbfriction*mNNdbB11momentum[fn1])-(mNNdblearningrate*mNNdbB11averageerror[fn1]);
     
     for (fn2=0; fn2<mNNn10thlayerlength; fn2++) {
      
       mNNdbW1011momentum[fn1][fn2] = (mNNdbfriction*mNNdbW1011momentum[fn1][fn2])-(mNNdblearningrate*mNNdbW1011averageerror[fn1][fn2]);
    	
      }
     }
   }
	
}



#endif