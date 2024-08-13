#ifndef BACKPROPAGATIONPROJECTION_H
#define BACKPROPAGATIONPROJECTION_H

#include"header.h"

void NN::FNN_BACKWARD_PROPAGATE_PROJECTEDFEEDFORWARD_LAYER ()
{
	int fn1,fn2;
	
	for (fn1=0; fn1<mNNnoutputlayerlength; fn1++) {
	
	 mNNdboutputlayererror[fn1] =  (mNNdboutputlayervalue[fn1] - mNNndataoutput[fn1]);
//	 std::cout<<"BP"<<mNNdboutputlayererror[fn1]<<std::endl;
 	
 	mNNdberrorsquaresum += (0.005*(pow(mNNdboutputlayererror[fn1],2)));
 	
 	mNNdboutputlayererror[fn1] = (mNNdboutputlayererror[fn1])/mNNndatasize;
    
    }	
	
//propagate error from the output layer to the 10th layer	
   if (mNNnlayerbreadth>=10) {
	
	for (fn2=0; fn2<mNNn11thlayerlength; fn2++) {
	 
//this statement below does the adjust of 
     FNN_BACKWARD_ADJUST_LAYER_o_11 ();
	 mNNdb11thlayererror[fn2] = mNNdboutputlayererror[fn2];
	 mNNdbB11error[fn2]=(mNNdb11thlayererror[fn2])*mNNdb11thlayerderivedvalue[fn2];
	 mNNdbB11averageerror[fn2]=((mNNdbB11averageerror[fn2] * (mNNntrainingepochno-1)) + mNNdbB11error[fn2])/(mNNntrainingepochno);
	 
	 for (fn1=0; fn1<mNNn10thlayerlength; fn1++) {
	
	 mNNdbW1011error[fn2][fn1] = mNNdbB11error[fn2] * mNNdb10thlayervalue[fn1];
	 
     mNNdbW1011averageerror[fn2][fn1] = ((mNNdbW1011averageerror[fn2][fn1] * (mNNntrainingepochno-1)) + mNNdbW1011error[fn2][fn1])/(mNNntrainingepochno);
	  }
	 }
	}

//propagate error from 10th layer to 9th layer	
	if (mNNnlayerbreadth>=9) {
	
	 if (mNNnlayerbreadth==9) {
	    FNN_BACKWARD_ADJUST_LAYER_o_10 (); }
	 else { FNN_BACKWARD_MULTIPLY_PROJECTION_LAYER_11_10 (); }
	 
	  for (fn2=0; fn2<mNNn10thlayerlength; fn2++) {
	 
	 mNNdbB10error[fn2]=(mNNdb10thlayererror[fn2])*mNNdb11thlayerderivedvalue[fn2];
	 mNNdbB10averageerror[fn2]=((mNNdbB10averageerror[fn2] * (mNNntrainingepochno-1)) + mNNdbB10error[fn2])/(mNNntrainingepochno);
	 
	 for (fn1=0; fn1<mNNn9thlayerlength; fn1++) {
	
	 mNNdbW910error[fn2][fn1] = mNNdbB10error[fn2] * mNNdb9thlayervalue[fn1];
	 
     mNNdbW910averageerror[fn2][fn1] = ((mNNdbW910averageerror[fn2][fn1] * (mNNntrainingepochno-1)) + mNNdbW910error[fn2][fn1])/(mNNntrainingepochno);
	  }
	 }
	}
	
	
//propagate error from 9th layer to 8th layer	
	if (mNNnlayerbreadth>=8) {
	
	 if (mNNnlayerbreadth==8) {
	    FNN_BACKWARD_ADJUST_LAYER_o_9 (); }
	 else { FNN_BACKWARD_MULTIPLY_PROJECTION_LAYER_10_9 (); }
	 
	  for (fn2=0; fn2<mNNn9thlayerlength; fn2++) {
	 
	 mNNdbB9error[fn2] = mNNdb9thlayererror[fn2] * mNNdb9thlayerderivedvalue[fn2];
	 mNNdbB9averageerror[fn2]=((mNNdbB9averageerror[fn2] * (mNNntrainingepochno-1)) + mNNdbB9error[fn2])/(mNNntrainingepochno);
	 
	 for (fn1=0; fn1<mNNn8thlayerlength; fn1++) {
	
	 mNNdbW89error[fn2][fn1] = mNNdbB9error[fn2] * mNNdb8thlayervalue[fn1];
	 
     mNNdbW89averageerror[fn2][fn1] = ((mNNdbW89averageerror[fn2][fn1] * (mNNntrainingepochno-1)) + mNNdbW89error[fn2][fn1])/(mNNntrainingepochno);
	  }
	 }
	}
	
	
//propagate error from 8th layer to 7th layer	
	if (mNNnlayerbreadth>=7) {
	
	 if (mNNnlayerbreadth==7) {
	    FNN_BACKWARD_ADJUST_LAYER_o_8 (); }
	 else { FNN_BACKWARD_MULTIPLY_PROJECTION_LAYER_9_8 (); }
	 
	  for (fn2=0; fn2<mNNn8thlayerlength; fn2++) {
	 
	 mNNdbB8error[fn2] = mNNdb8thlayererror[fn2] * mNNdb8thlayerderivedvalue[fn2];
	 mNNdbB8averageerror[fn2]=((mNNdbB8averageerror[fn2] * (mNNntrainingepochno-1)) + mNNdbB8error[fn2])/(mNNntrainingepochno);
	 
	 for (fn1=0; fn1<mNNn7thlayerlength; fn1++) {
	
	 mNNdbW78error[fn2][fn1] = mNNdbB8error[fn2] * mNNdb7thlayervalue[fn1];
	 
     mNNdbW78averageerror[fn2][fn1] = ((mNNdbW78averageerror[fn2][fn1] * (mNNntrainingepochno-1)) + mNNdbW78error[fn2][fn1])/(mNNntrainingepochno);
	  }
	 }
	}
	
//propagate error from 7th layer to 6th layer	
	if (mNNnlayerbreadth>=6) {
	
	 if (mNNnlayerbreadth==6) {
	    FNN_BACKWARD_ADJUST_LAYER_o_7 (); }
	 else { FNN_BACKWARD_MULTIPLY_PROJECTION_LAYER_8_7 (); }
	 
	  for (fn2=0; fn2<mNNn7thlayerlength; fn2++) {
	 
	 mNNdbB7error[fn2] = mNNdb7thlayererror[fn2] * mNNdb7thlayerderivedvalue[fn2];
	 mNNdbB7averageerror[fn2]=((mNNdbB7averageerror[fn2] * (mNNntrainingepochno-1)) + mNNdbB7error[fn2])/(mNNntrainingepochno);
	 
	 for (fn1=0; fn1<mNNn6thlayerlength; fn1++) {
	
	 mNNdbW67error[fn2][fn1] = mNNdbB7error[fn2] * mNNdb6thlayervalue[fn1];
	 
     mNNdbW67averageerror[fn2][fn1] = ((mNNdbW67averageerror[fn2][fn1] * (mNNntrainingepochno-1)) + mNNdbW67error[fn2][fn1])/(mNNntrainingepochno);
	  }
	 }
	}

//propagate error from 6th layer to 5th layer	
	if (mNNnlayerbreadth>=5) {
	
	 if (mNNnlayerbreadth==5) {
	    FNN_BACKWARD_ADJUST_LAYER_o_6 (); }
	 else { FNN_BACKWARD_MULTIPLY_PROJECTION_LAYER_7_6 (); }
	 
	  for (fn2=0; fn2<mNNn6thlayerlength; fn2++) {
	 
	 mNNdbB6error[fn2] = mNNdb6thlayererror[fn2] * mNNdb6thlayerderivedvalue[fn2];
	 mNNdbB6averageerror[fn2]=((mNNdbB6averageerror[fn2] * (mNNntrainingepochno-1)) + mNNdbB6error[fn2])/(mNNntrainingepochno);
	 
	 for (fn1=0; fn1<mNNn5thlayerlength; fn1++) {
	
	 mNNdbW56error[fn2][fn1] = mNNdbB6error[fn2] * mNNdb5thlayervalue[fn1];
	 
     mNNdbW56averageerror[fn2][fn1] = ((mNNdbW56averageerror[fn2][fn1] * (mNNntrainingepochno-1)) + mNNdbW56error[fn2][fn1])/(mNNntrainingepochno);
	  }
	 }
	}

//propagate error from 5th layer to 4th layer	
	if (mNNnlayerbreadth>=4) {
	
	 if (mNNnlayerbreadth==4) {
	    FNN_BACKWARD_ADJUST_LAYER_o_5 (); }
	 else { FNN_BACKWARD_MULTIPLY_PROJECTION_LAYER_6_5 (); }
	 
	 for (fn2=0; fn2<mNNn5thlayerlength; fn2++) {
	 
	 mNNdbB5error[fn2] = mNNdb5thlayererror[fn2] * mNNdb5thlayerderivedvalue[fn2];
	 mNNdbB5averageerror[fn2]=((mNNdbB5averageerror[fn2] * (mNNntrainingepochno-1)) + mNNdbB5error[fn2])/(mNNntrainingepochno);
	 
	 for (fn1=0; fn1<mNNn4thlayerlength; fn1++) {
	
	 mNNdbW45error[fn2][fn1] = mNNdbB5error[fn2] * mNNdb4thlayervalue[fn1];
	 
     mNNdbW45averageerror[fn2][fn1] = ((mNNdbW45averageerror[fn2][fn1] * (mNNntrainingepochno-1)) + mNNdbW45error[fn2][fn1])/(mNNntrainingepochno);
	  }
	 }
	}

//propagate error from 4th layer to 3rd layer	
	if (mNNnlayerbreadth>=3) {
	
	 if (mNNnlayerbreadth==3) {
	    FNN_BACKWARD_ADJUST_LAYER_o_4 (); }
	 else { FNN_BACKWARD_MULTIPLY_PROJECTION_LAYER_5_4 (); }
	 
	 for (fn2=0; fn2<mNNn4thlayerlength; fn2++) {
	 
	 mNNdbB4error[fn2] = mNNdb4thlayererror[fn2] * mNNdb4thlayerderivedvalue[fn2];
	 mNNdbB4averageerror[fn2]=((mNNdbB4averageerror[fn2] * (mNNntrainingepochno-1)) + mNNdbB4error[fn2])/(mNNntrainingepochno);
	 
	 for (fn1=0; fn1<mNNn3rdlayerlength; fn1++) {
	
	 mNNdbW34error[fn2][fn1] = mNNdbB4error[fn2] * mNNdb3rdlayervalue[fn1];
	 
     mNNdbW34averageerror[fn2][fn1] = ((mNNdbW34averageerror[fn2][fn1] * (mNNntrainingepochno-1)) + mNNdbW34error[fn2][fn1])/(mNNntrainingepochno);
	  }
	 }
	}

//propagate error from 3rd layer to 2rd layer	
	if (mNNnlayerbreadth>=2) {
	
	 if (mNNnlayerbreadth==2) {
	    FNN_BACKWARD_ADJUST_LAYER_o_3 (); }
	 else { FNN_BACKWARD_MULTIPLY_PROJECTION_LAYER_4_3 (); }
	 
	 for (fn2=0; fn2<mNNn3rdlayerlength; fn2++) {
	 
	 mNNdbB3error[fn2] = mNNdb3rdlayererror[fn2] * mNNdb3rdlayerderivedvalue[fn2];
	 mNNdbB3averageerror[fn2]=((mNNdbB3averageerror[fn2] * (mNNntrainingepochno-1)) + mNNdbB3error[fn2])/(mNNntrainingepochno);
	 
	 for (fn1=0; fn1<mNNn2ndlayerlength; fn1++) {
	
	 mNNdbW23error[fn2][fn1] = mNNdbB3error[fn2] * mNNdb2ndlayervalue[fn1];
	 
     mNNdbW23averageerror[fn2][fn1] = ((mNNdbW23averageerror[fn2][fn1] * (mNNntrainingepochno-1)) + mNNdbW23error[fn2][fn1])/(mNNntrainingepochno);
	  }
	 }
	}

//propagate error from 2nd layer to 1st layer	
	if (mNNnlayerbreadth>=1) {
	
	 if (mNNnlayerbreadth==1) {
	    FNN_BACKWARD_ADJUST_LAYER_o_2 (); }
	 else { FNN_BACKWARD_MULTIPLY_PROJECTION_LAYER_3_2 (); }
	 
	 for (fn2=0; fn2<mNNn2ndlayerlength; fn2++) {
	 
	 mNNdbB2error[fn2] = mNNdb2ndlayererror[fn2] * mNNdb2ndlayerderivedvalue[fn2];
	 mNNdbB2averageerror[fn2]=((mNNdbB2averageerror[fn2] * (mNNntrainingepochno-1)) + mNNdbB2error[fn2])/(mNNntrainingepochno);
	 
	 for (fn1=0; fn1<mNNn1stlayerlength; fn1++) {
	
	 mNNdbW12error[fn2][fn1] = mNNdbB2error[fn2] * mNNdb1stlayervalue[fn1];
	 
     mNNdbW12averageerror[fn2][fn1] = ((mNNdbW12averageerror[fn2][fn1] * (mNNntrainingepochno-1)) + mNNdbW12error[fn2][fn1])/(mNNntrainingepochno);
	  }
	 }
	}

//propagate error from 2nd layer to 1st layer	
	if (mNNnlayerbreadth>=0) {
	
	 if (mNNnlayerbreadth==0) {
	    FNN_BACKWARD_ADJUST_LAYER_o_1 (); }
	 else { FNN_BACKWARD_MULTIPLY_PROJECTION_LAYER_2_1 (); }
	 
	 for (fn2=0; fn2<mNNn1stlayerlength; fn2++) {
	 
	 mNNdbB1error[fn2] = mNNdb1stlayererror[fn2] * mNNdb1stlayerderivedvalue[fn2];
	 mNNdbB1averageerror[fn2]=((mNNdbB1averageerror[fn2] * (mNNntrainingepochno-1)) + mNNdbB1error[fn2])/(mNNntrainingepochno);
	 
	 for (fn1=0; fn1<mNNninputlayerlength; fn1++) {
	
	 mNNdbW01error[fn2][fn1] = mNNdbB1error[fn2] * mNNdbinputlayervalue[fn1];
	 
     mNNdbW01averageerror[fn2][fn1] = ((mNNdbW01averageerror[fn2][fn1] * (mNNntrainingepochno-1)) + mNNdbW01error[fn2][fn1])/(mNNntrainingepochno);
     
	  }
	 }
	}
	
	FNN_BACKWARD_MULTIPLY_PROJECTION_LAYER_1_0 ();
	

//end of back propagation
}


/*
void NN::FNN_BACKWARD_ADJUST_LAYER_o_11 () {
	int fn1;
	
	for (fn1=0; fn1<mNNnoutputlayerlength; fn1++) {
	mNNdb11thlayererror[fn1] = mNNdboutputlayererror[fn1];
	}
}

void NN::FNN_BACKWARD_ADJUST_LAYER_o_10 () {
	int fn1;
	
	for (fn1=0; fn1<mNNnoutputlayerlength; fn1++) {
	mNNdb10thlayererror[fn1] = mNNdboutputlayererror[fn1];
	}
}

void NN::FNN_BACKWARD_ADJUST_LAYER_o_9 () {
	int fn1;
	
	for (fn1=0; fn1<mNNnoutputlayerlength; fn1++) {
	mNNdb9thlayererror[fn1] = mNNdboutputlayererror[fn1];
	}
}

void NN::FNN_BACKWARD_ADJUST_LAYER_o_8 () {
	int fn1;
	
	for (fn1=0; fn1<mNNnoutputlayerlength; fn1++) {
	mNNdb8thlayererror[fn1] = mNNdboutputlayererror[fn1];
	}
}

void NN::FNN_BACKWARD_ADJUST_LAYER_o_7 () {
	int fn1;
	
	for (fn1=0; fn1<mNNnoutputlayerlength; fn1++) {
	mNNdb7thlayererror[fn1] = mNNdboutputlayererror[fn1];
	}
}

void NN::FNN_BACKWARD_ADJUST_LAYER_o_6 () {
	int fn1;
	
	for (fn1=0; fn1<mNNnoutputlayerlength; fn1++) {
	mNNdb6thlayererror[fn1] = mNNdboutputlayererror[fn1];
	}
}

void NN::FNN_BACKWARD_ADJUST_LAYER_o_5 () {
	int fn1;
	
	for (fn1=0; fn1<mNNnoutputlayerlength; fn1++) {
	mNNdb5thlayererror[fn1] = mNNdboutputlayererror[fn1];
	}
}

void NN::FNN_BACKWARD_ADJUST_LAYER_o_4 () {
	int fn1;
	
	for (fn1=0; fn1<mNNnoutputlayerlength; fn1++) {
	mNNdb4thlayererror[fn1] = mNNdboutputlayererror[fn1];
	}
}

void NN::FNN_BACKWARD_ADJUST_LAYER_o_3 () {
	int fn1;
	
	for (fn1=0; fn1<mNNnoutputlayerlength; fn1++) {
	mNNdb3rdlayererror[fn1] = mNNdboutputlayererror[fn1];
	}
}

void NN::FNN_BACKWARD_ADJUST_LAYER_o_2 () {
	int fn1;
	
	for (fn1=0; fn1<mNNnoutputlayerlength; fn1++) {
	mNNdb2ndlayererror[fn1] = mNNdboutputlayererror[fn1];
	}
}

void NN::FNN_BACKWARD_ADJUST_LAYER_o_1 () {
	int fn1;
	
	for (fn1=0; fn1<mNNnoutputlayerlength; fn1++) {
	mNNdb1stlayererror[fn1] = mNNdboutputlayererror[fn1];
	}
}

/* NN::FNN_BACKWARD_ADJUST_LAYER_o_i () {
	int fn1;
	
	for (fn1=0; fn1<mNNnoutputlayerlength; fn1++) {
	mNNdbithlayererror[fn1] = mNNdboutputlayererror[fn1];
	}
} */



void NN::FNN_BACKWARD_MULTIPLY_PROJECTION_LAYER_11_10 () {
	int fn1,fn2;
	double fdbhold;
	
	 for (fn1=0; fn1<mNNn10thlayerlength; fn1++) {
      fdbhold = 0.000;
	   for (fn2=0; fn2<mNNn11thlayerlength; fn2++) {
		  fdbhold +=
		 (mNNdbB11error[fn2] * mNNdbW1011projected[fn2][fn1]);
			 }
			mNNdb10thlayererror[fn1] = fdbhold;
	 }
}


void NN::FNN_BACKWARD_MULTIPLY_PROJECTION_LAYER_10_9 () {
	int fn1,fn2;
	double fdbhold;
    
     for (fn1=0; fn1<mNNn9thlayerlength; fn1++) {
      fdbhold = 0.000;
	   for (fn2=0; fn2<mNNn10thlayerlength; fn2++) {
		  fdbhold +=
		 (mNNdbB10error[fn2] * mNNdbW910projected[fn2][fn1]);
			 }
			mNNdb9thlayererror[fn1] = fdbhold;
	 }
} 


void NN::FNN_BACKWARD_MULTIPLY_PROJECTION_LAYER_9_8 () {
	int fn1,fn2;
	double fdbhold;
    
     for (fn1=0; fn1<mNNn8thlayerlength; fn1++) {
      fdbhold = 0.000;
	   for (fn2=0; fn2<mNNn9thlayerlength; fn2++) {
		  fdbhold +=
		 (mNNdbB9error[fn2] * mNNdbW89projected[fn2][fn1]);
			 }
			mNNdb8thlayererror[fn1] = fdbhold;
	 }
} 


void NN::FNN_BACKWARD_MULTIPLY_PROJECTION_LAYER_8_7 () {
	int fn1,fn2;
	double fdbhold;
    
     for (fn1=0; fn1<mNNn7thlayerlength; fn1++) {
      fdbhold = 0.000;
	   for (fn2=0; fn2<mNNn8thlayerlength; fn2++) {
		  fdbhold +=
		 (mNNdbB8error[fn2] * mNNdbW89projected[fn2][fn1]);
			 }
			mNNdb9thlayererror[fn1] = fdbhold;
	 }
} 


void NN::FNN_BACKWARD_MULTIPLY_PROJECTION_LAYER_7_6 () {
	int fn1,fn2;
	double fdbhold;
    
     for (fn1=0; fn1<mNNn6thlayerlength; fn1++) {
      fdbhold = 0.000;
	   for (fn2=0; fn2<mNNn7thlayerlength; fn2++) {
		  fdbhold +=
		 (mNNdbB7error[fn2] * mNNdbW67projected[fn2][fn1]);
			 }
			mNNdb6thlayererror[fn1] = fdbhold;
	 }
} 


void NN::FNN_BACKWARD_MULTIPLY_PROJECTION_LAYER_6_5 () {
	int fn1,fn2;
	double fdbhold;
    
     for (fn1=0; fn1<mNNn5thlayerlength; fn1++) {
      fdbhold = 0.000;
	   for (fn2=0; fn2<mNNn6thlayerlength; fn2++) {
		  fdbhold +=
		 (mNNdbB6error[fn2] * mNNdbW56projected[fn2][fn1]);
			 }
			mNNdb5thlayererror[fn1] = fdbhold;
	 }
} 


void NN::FNN_BACKWARD_MULTIPLY_PROJECTION_LAYER_5_4 () {
	int fn1,fn2;
	double fdbhold;
    
     for (fn1=0; fn1<mNNn4thlayerlength; fn1++) {
      fdbhold = 0.000;
	   for (fn2=0; fn2<mNNn5thlayerlength; fn2++) {
		  fdbhold +=
		 (mNNdbB5error[fn2] * mNNdbW45projected[fn2][fn1]);
			 }
			mNNdb4thlayererror[fn1] = fdbhold;
	 }
} 


void NN::FNN_BACKWARD_MULTIPLY_PROJECTION_LAYER_4_3 () {
	int fn1,fn2;
	double fdbhold;
    
     for (fn1=0; fn1<mNNn3rdlayerlength; fn1++) {
      fdbhold = 0.000;
	   for (fn2=0; fn2<mNNn4thlayerlength; fn2++) {
		  fdbhold +=
		 (mNNdbB4error[fn2] * mNNdbW34projected[fn2][fn1]);
			 }
			mNNdb3rdlayererror[fn1] = fdbhold;
	 }
} 


void NN::FNN_BACKWARD_MULTIPLY_PROJECTION_LAYER_3_2 () {
	int fn1,fn2;
	double fdbhold;
    
     for (fn1=0; fn1<mNNn2ndlayerlength; fn1++) {
      fdbhold = 0.000;
	   for (fn2=0; fn2<mNNn3rdlayerlength; fn2++) {
		  fdbhold +=
		 (mNNdbB3error[fn2] * mNNdbW23projected[fn2][fn1]);
			 }
			mNNdb2ndlayererror[fn1] = fdbhold;
	 }
} 


void NN::FNN_BACKWARD_MULTIPLY_PROJECTION_LAYER_2_1 () {
	int fn1,fn2;
	double fdbhold;
    
     for (fn1=0; fn1<mNNn1stlayerlength; fn1++) {
      fdbhold = 0.000;
	   for (fn2=0; fn2<mNNn2ndlayerlength; fn2++) {
		  fdbhold +=
		 (mNNdbB2error[fn2] * mNNdbW12projected[fn2][fn1]);
			 }
			mNNdb1stlayererror[fn1] = fdbhold;
	 }
} 


void NN::FNN_BACKWARD_MULTIPLY_PROJECTION_LAYER_1_0 () {
	int fn1,fn2;
	double fdbhold;
    
     for (fn1=0; fn1<mNNninputlayerlength; fn1++) {
      fdbhold = 0.000;
	   for (fn2=0; fn2<mNNn1stlayerlength; fn2++) {
		  fdbhold +=
		 (mNNdbB1error[fn2] * mNNdbW01projected[fn2][fn1]);
			 }
			mNNdbinputlayererror[fn1] = fdbhold;
	 }
} 



#endif