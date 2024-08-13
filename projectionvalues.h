
#ifndef PROJECTIONVALUES_H
#define PROJECTIONVALUES_H

#include"header.h"

void NN::FNN_INITIALISE_PROJECTED_VALUES () 
{
	int fn1,fn2;
	float fdbmomentumvalue=0.001000;
	
	
   if (mNNnlayerbreadth >= 0) {
	
	for (fn1=0; fn1<mNNn1stlayerlength; fn1++) {
      mNNdbB1projected[fn1] = fdbmomentumvalue;
      for (fn2=0; fn2<mNNninputlayerlength; fn2++) {
    	mNNdbW01projected[fn1][fn2] = fdbmomentumvalue;
      }
     }
    }

   if (mNNnlayerbreadth >= 1) {
    
    for (fn1=0; fn1<mNNn2ndlayerlength; fn1++) {
      mNNdbB2projected[fn1] = fdbmomentumvalue;
      for (fn2=0; fn2<mNNn1stlayerlength; fn2++) {
    	mNNdbW12projected[fn1][fn2] = fdbmomentumvalue;
      }
     }
    }
	
   if (mNNnlayerbreadth >= 2) {
    
    for (fn1=0; fn1<mNNn3rdlayerlength; fn1++) {
      mNNdbB3projected[fn1] = fdbmomentumvalue;
      for (fn2=0; fn2<mNNn2ndlayerlength; fn2++) {
    	mNNdbW23projected[fn1][fn2] = fdbmomentumvalue;
      }
     }
    }
	
	if (mNNnlayerbreadth >= 3) {
    
    for (fn1=0; fn1<mNNn4thlayerlength; fn1++) {
      mNNdbB4projected[fn1] = fdbmomentumvalue;
      for (fn2=0; fn2<mNNn3rdlayerlength; fn2++) {
    	mNNdbW34projected[fn1][fn2] = fdbmomentumvalue;
      }
     }
    }
	
	if (mNNnlayerbreadth >= 4) {
    
    for (fn1=0; fn1<mNNn5thlayerlength; fn1++) {
      mNNdbB5projected[fn1] = fdbmomentumvalue;
      for (fn2=0; fn2<mNNn4thlayerlength; fn2++) {
    	mNNdbW45projected[fn1][fn2] = fdbmomentumvalue;
      }
     }
    }
	
	if (mNNnlayerbreadth >= 5) {
    
    for (fn1=0; fn1<mNNn6thlayerlength; fn1++) {
      mNNdbB6projected[fn1] = fdbmomentumvalue;
      for (fn2=0; fn2<mNNn5thlayerlength; fn2++) {
    	mNNdbW56projected[fn1][fn2] = fdbmomentumvalue;
      }
     }
    }
	
	if (mNNnlayerbreadth >= 6) {
    
    for (fn1=0; fn1<mNNn7thlayerlength; fn1++) {
      mNNdbB7projected[fn1] = fdbmomentumvalue;
      for (fn2=0; fn2<mNNn6thlayerlength; fn2++) {
    	mNNdbW67projected[fn1][fn2] = fdbmomentumvalue;
      }
     }
    }
	
	if (mNNnlayerbreadth >= 7) {
    
    for (fn1=0; fn1<mNNn8thlayerlength; fn1++) {
      mNNdbB8projected[fn1] = fdbmomentumvalue;
      for (fn2=0; fn2<mNNn7thlayerlength; fn2++) {
    	mNNdbW78projected[fn1][fn2] = fdbmomentumvalue;
      }
     }
    }
    
    if (mNNnlayerbreadth >= 8) {
    
    for (fn1=0; fn1<mNNn9thlayerlength; fn1++) {
      mNNdbB9projected[fn1] = fdbmomentumvalue;
      for (fn2=0; fn2<mNNn8thlayerlength; fn2++) {
    	mNNdbW89projected[fn1][fn2] = fdbmomentumvalue;
      }
     }
    }
    
	if (mNNnlayerbreadth >= 9) {
    
    for (fn1=0; fn1<mNNn10thlayerlength; fn1++) {
      mNNdbB10projected[fn1] = fdbmomentumvalue;
      for (fn2=0; fn2<mNNn9thlayerlength; fn2++) {
    	mNNdbW910projected[fn1][fn2] = fdbmomentumvalue;
      }
     }
    }
    
    if (mNNnlayerbreadth >= 10) {
    
    for (fn1=0; fn1<mNNn11thlayerlength; fn1++) {
      mNNdbB11projected[fn1] = fdbmomentumvalue;
      for (fn2=0; fn2<mNNn10thlayerlength; fn2++) {
    	mNNdbW1011projected[fn1][fn2] = fdbmomentumvalue;
      }
     }
    }
	
/*	for (fn1=0; fn1<mNNnoutputlayerlength; fn1++) {
      mNNdbprojectedBo[fn1] = mNNdbmomentumB[fn1] + mNNdbB12[fn1];
      for (fn2=0; fn2<mNNnlastlayerlength; fn2++) {
    	mNNdbmomentumWLo[fn1][fn2]=fdbmomentumvalue;
      }
    } */
		
}



void NN::FNN_UPDATE_PROJECTED_VALUES () 
{
	int fn1,fn2;
	float fdbmomentumvalue=0.001000;
	
	
   if (mNNnlayerbreadth >= 0) {
	
	for (fn1=0; fn1<mNNn1stlayerlength; fn1++) {
      mNNdbB1projected[fn1] = (mNNdbB1momentum[fn1]*mNNdbfriction) + mNNdbB1[fn1];
      for (fn2=0; fn2<mNNninputlayerlength; fn2++) {
    	mNNdbW01projected[fn1][fn2] = (mNNdbW01momentum[fn1][fn2]*mNNdbfriction) + mNNdbW01[fn1][fn2];
      }
     }
    }

   if (mNNnlayerbreadth >= 1) {
    
    for (fn1=0; fn1<mNNn2ndlayerlength; fn1++) {
      mNNdbB2projected[fn1] = (mNNdbB2momentum[fn1]*mNNdbfriction) + mNNdbB2[fn1];
      for (fn2=0; fn2<mNNn1stlayerlength; fn2++) {
    	mNNdbW12projected[fn1][fn2] = (mNNdbW12momentum[fn1][fn2]*mNNdbfriction)+ mNNdbW12[fn1][fn2];
      }
     }
    }
	
	if (mNNnlayerbreadth >= 2) {
    
     for (fn1=0; fn1<mNNn3rdlayerlength; fn1++) {
      mNNdbB3projected[fn1] = (mNNdbB3momentum[fn1]*mNNdbfriction) + mNNdbB3[fn1];
      for (fn2=0; fn2<mNNn2ndlayerlength; fn2++) {
    	mNNdbW23projected[fn1][fn2] = (mNNdbW23momentum[fn1][fn2]*mNNdbfriction) + mNNdbW23[fn1][fn2];
      }
     }
    }
	
	if (mNNnlayerbreadth >= 3) {
    
     for (fn1=0; fn1<mNNn4thlayerlength; fn1++) {
      mNNdbB4projected[fn1] = (mNNdbB4momentum[fn1]*mNNdbfriction) + mNNdbB4[fn1];
      for (fn2=0; fn2<mNNn3rdlayerlength; fn2++) {
    	mNNdbW34projected[fn1][fn2] = (mNNdbW34momentum[fn1][fn2]*mNNdbfriction) + mNNdbW34[fn1][fn2];
      }
     }
    }
	
	if (mNNnlayerbreadth >= 4) {
    
     for (fn1=0; fn1<mNNn5thlayerlength; fn1++) {
      mNNdbB5projected[fn1] = (mNNdbB5momentum[fn1]*mNNdbfriction) + mNNdbB5[fn1];
      for (fn2=0; fn2<mNNn4thlayerlength; fn2++) {
    	mNNdbW45projected[fn1][fn2] = (mNNdbW45momentum[fn1][fn2]*mNNdbfriction) + mNNdbW45[fn1][fn2];
      }
     }
    }
	
	if (mNNnlayerbreadth >= 5) {
    
     for (fn1=0; fn1<mNNn6thlayerlength; fn1++) {
      mNNdbB6projected[fn1] = (mNNdbB6momentum[fn1]*mNNdbfriction) + mNNdbB6[fn1];
      for (fn2=0; fn2<mNNn5thlayerlength; fn2++) {
    	mNNdbW56projected[fn1][fn2] = (mNNdbW56momentum[fn1][fn2]*mNNdbfriction) + mNNdbW56[fn1][fn2];
      }
     }
    }
	
	if (mNNnlayerbreadth >= 6) {
    
     for (fn1=0; fn1<mNNn7thlayerlength; fn1++) {
      mNNdbB7projected[fn1] = (mNNdbB7momentum[fn1]*mNNdbfriction) + mNNdbB7[fn1];
      for (fn2=0; fn2<mNNn6thlayerlength; fn2++) {
    	mNNdbW67projected[fn1][fn2] = (mNNdbW67momentum[fn1][fn2]*mNNdbfriction) + mNNdbW67[fn1][fn2];
      }
     }
    }
	
	if (mNNnlayerbreadth >= 7) {
    
     for (fn1=0; fn1<mNNn8thlayerlength; fn1++) {
      mNNdbB8projected[fn1] = (mNNdbB8momentum[fn1]*mNNdbfriction) + mNNdbB8[fn1];
      for (fn2=0; fn2<mNNn7thlayerlength; fn2++) {
    	mNNdbW78projected[fn1][fn2] = (mNNdbW78momentum[fn1][fn2]*mNNdbfriction) + mNNdbW78[fn1][fn2];
      }
     }
    }
    
    if (mNNnlayerbreadth >= 8) {
    
     for (fn1=0; fn1<mNNn9thlayerlength; fn1++) {
      mNNdbB9projected[fn1] = (mNNdbB9momentum[fn1]*mNNdbfriction) + mNNdbB9[fn1];
      for (fn2=0; fn2<mNNn8thlayerlength; fn2++) {
    	mNNdbW89projected[fn1][fn2] = (mNNdbW89momentum[fn1][fn2]*mNNdbfriction) + mNNdbW89[fn1][fn2];
      }
     }
    }
    
	if (mNNnlayerbreadth >= 9) {
    
     for (fn1=0; fn1<mNNn10thlayerlength; fn1++) {
      mNNdbB10projected[fn1] = (mNNdbB10momentum[fn1]*mNNdbfriction) + mNNdbB10[fn1];
      for (fn2=0; fn2<mNNn9thlayerlength; fn2++) {
    	mNNdbW910projected[fn1][fn2] = (mNNdbW910momentum[fn1][fn2]*mNNdbfriction) + mNNdbW910[fn1][fn2];
      }
     }
    }
    
    if (mNNnlayerbreadth >= 10) {
    
     for (fn1=0; fn1<mNNn11thlayerlength; fn1++) {
      mNNdbB11projected[fn1] = (mNNdbB11momentum[fn1]*mNNdbfriction) + mNNdbB11[fn1];
      for (fn2=0; fn2<mNNn10thlayerlength; fn2++) {
    	mNNdbW1011projected[fn1][fn2] = (mNNdbW1011momentum[fn1][fn2]*mNNdbfriction) + mNNdbW1011[fn1][fn2];
      }
     }
    }
	
/*	for (fn1=0; fn1<mNNnoutputlayerlength; fn1++) {
      mNNdbprojectedBo[fn1] = mNNdbmomentumB[fn1] + mNNdbB12[fn1];
      for (fn2=0; fn2<mNNnlastlayerlength; fn2++) {
    	mNNdbmomentumWLo[fn1][fn2]=fdbmomentumvalue;
      }
    } */
    
    //std::cout<<"pB"<<mNNdbB1projected[2]<<std::endl;
    //std::cout<<"pW"<<mNNdbW01projected[2][2]<<std::endl;
	
		
}


#endif