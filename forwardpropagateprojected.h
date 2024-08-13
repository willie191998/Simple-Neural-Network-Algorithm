#ifndef FORWARDPROPAGATEPROJECTION_H
#define FORWARDPROPAGATEPROJECTION_H

#include"header.h"

#if mNNstractivationfunction==hardtanh
using namespace hardtanh;

#elif mNNstractivationfunction==tanh
using namespace logtanh;

#elif mNNstractivationfunction==logtanh
using namespace logtanh;

#endif




void NN::FNN_FORWARD_PROPAGATE_PROJECTEDFEEDFORWARD_LAYER () {
	
	
     FNN_FORWARD_MULTIPLY_PROJECTION_0_1 ();
     
     if (mNNnlayerbreadth >= 1) {
      
      FNN_FORWARD_MULTIPLY_PROJECTION_1_2 ();
      if (mNNnlayerbreadth >= 2) {
      
      FNN_FORWARD_MULTIPLY_PROJECTION_2_3 ();
      if (mNNnlayerbreadth >= 3) {
      
      FNN_FORWARD_MULTIPLY_PROJECTION_3_4 ();
      if (mNNnlayerbreadth >= 4) {
      
      FNN_FORWARD_MULTIPLY_PROJECTION_4_5 ();
      if (mNNnlayerbreadth >= 5) {
      
      FNN_FORWARD_MULTIPLY_PROJECTION_5_6 ();
      if (mNNnlayerbreadth >= 6) {
      
      FNN_FORWARD_MULTIPLY_PROJECTION_6_7 ();
      if (mNNnlayerbreadth >= 7) {
      
      FNN_FORWARD_MULTIPLY_PROJECTION_7_8 ();
      if (mNNnlayerbreadth >= 8) {
      
      FNN_FORWARD_MULTIPLY_PROJECTION_8_9 ();
       if (mNNnlayerbreadth >= 9) {
      
       FNN_FORWARD_MULTIPLY_PROJECTION_9_10 ();
        if (mNNnlayerbreadth >= 10) {
      
         FNN_FORWARD_MULTIPLY_PROJECTION_10_11 ();
         FNN_FORWARD_ADJUST_LAYER_11_o ();
        }
        
     //else condition to fix output layer to 10th layer
     else {
     	FNN_FORWARD_ADJUST_LAYER_10_o ();
     }
     	
     }
     
     //else condition to fix output layer to 9th layer
     else {
     	FNN_FORWARD_ADJUST_LAYER_9_o ();
     }
     	
     }
     
     //else condition to fix output layer to 8th layer
     else {
     	FNN_FORWARD_ADJUST_LAYER_8_o ();
     }
     	
     }
     
     //else condition to fix output layer to 7th layer
     else {
     	FNN_FORWARD_ADJUST_LAYER_7_o ();
     }
     	
     }
     
     //else condition to fix output layer to 6th layer
     else {
     	FNN_FORWARD_ADJUST_LAYER_6_o ();
     }
     	
     }
     //else condition to fix output layer to 5th layer
     else {
     	FNN_FORWARD_ADJUST_LAYER_5_o ();
     }
     	
     }
     
     //else condition to fix output layer to 4th layer
     else {
     	FNN_FORWARD_ADJUST_LAYER_4_o ();
     }
     	
     }
     
     //else condition to fix output layer to 3rd layer
     else {
     	FNN_FORWARD_ADJUST_LAYER_3_o ();
     }
     	
     }
     
     //else condition to fix output layer to 2nd layer
     else {
     	FNN_FORWARD_ADJUST_LAYER_2_o ();
     }
     	
     }
     
     //else condition to fix output layer to 1st layer
     else {
     	FNN_FORWARD_ADJUST_LAYER_1_o ();
     }
     
/*    std::cout<<"FB"<<mNNdb3rdlayervalue[2]<<std::endl;
   std::cout<<"FB"<<mNNdb3rdlayervalue[8]<<std::endl;
   std::cout<<"DFB"<<mNNdb3rdlayerderivedvalue[3]<<std::endl;
   std::cout<<"DFB"<<mNNdb3rdlayerderivedvalue[8]<<std::endl; */

}



void NN::FNN_FORWARD_MULTIPLY_PROJECTION_0_1 () {
	
	
	
	int fn1,fn2;
	double fdbhold;
	
	 for (fn2=0; fn2<mNNn1stlayerlength; fn2++) {
	 	
       fdbhold = 0.00; 
	   for (fn1=0; fn1<mNNninputlayerlength; fn1++) {
		  fdbhold += mNNdbW01projected[fn2][fn1] * mNNdbinputlayervalue[fn1];
			 }
			
			fdbhold += mNNdbB1projected[fn2];
			mNNdb1stlayervalue[fn2] = activationfunction (fdbhold );
			mNNdb1stlayerderivedvalue[fn2] = derivedactivationfunction (fdbhold );
		 
	 }
}
	

void NN::FNN_FORWARD_MULTIPLY_PROJECTION_1_2 () {
	
	
	
	int fn1,fn2;
	double fdbhold;
	
	 for (fn2=0; fn2<mNNn2ndlayerlength; fn2++) {
	 	
       fdbhold = 0.00; 
	   for (fn1=0; fn1<mNNn1stlayerlength; fn1++) {
		  fdbhold += mNNdbW12projected[fn2][fn1] * mNNdb1stlayervalue[fn1];
			 }
			
			fdbhold += mNNdbB2projected[fn2];
			mNNdb2ndlayervalue[fn2] = activationfunction (fdbhold );
			mNNdb2ndlayerderivedvalue[fn2] = derivedactivationfunction (fdbhold );
		 
	 }
}


void NN::FNN_FORWARD_MULTIPLY_PROJECTION_2_3 () {
	
	
	
	int fn1,fn2;
	double fdbhold;
	
	 for (fn2=0; fn2<mNNn3rdlayerlength; fn2++) {
	 	
       fdbhold = 0.00; 
	   for (fn1=0; fn1<mNNn2ndlayerlength; fn1++) {
		  fdbhold += mNNdbW23projected[fn2][fn1] * mNNdb2ndlayervalue[fn1];
			 }
			
			fdbhold += mNNdbB3projected[fn2];
			mNNdb3rdlayervalue[fn2] = activationfunction (fdbhold );
			mNNdb3rdlayerderivedvalue[fn2] = derivedactivationfunction (fdbhold );
		 
	 }
}


void NN::FNN_FORWARD_MULTIPLY_PROJECTION_3_4 () {
	
	
	
	int fn1,fn2;
	double fdbhold;
	
	 for (fn2=0; fn2<mNNn4thlayerlength; fn2++) {
	 	
       fdbhold = 0.00; 
	   for (fn1=0; fn1<mNNn3rdlayerlength; fn1++) {
		  fdbhold += mNNdbW34projected[fn2][fn1] * mNNdb3rdlayervalue[fn1];
			 }
			
			fdbhold += mNNdbB4projected[fn2];
			mNNdb4thlayervalue[fn2] = activationfunction (fdbhold );
			mNNdb4thlayerderivedvalue[fn2] = derivedactivationfunction (fdbhold );
		 
	 }
}


void NN::FNN_FORWARD_MULTIPLY_PROJECTION_4_5 () {
	
	
	
	int fn1,fn2;
	double fdbhold;
	
	 for (fn2=0; fn2<mNNn5thlayerlength; fn2++) {
	 	
       fdbhold = 0.00; 
	   for (fn1=0; fn1<mNNn4thlayerlength; fn1++) {
		  fdbhold += mNNdbW45projected[fn2][fn1] * mNNdb4thlayervalue[fn1];
			 }
			
			fdbhold += mNNdbB5projected[fn2];
			mNNdb5thlayervalue[fn2] = activationfunction (fdbhold );
			mNNdb5thlayerderivedvalue[fn2] = derivedactivationfunction (fdbhold );
		 
	 }
}


void NN::FNN_FORWARD_MULTIPLY_PROJECTION_5_6 () {
	
	
	
	int fn1,fn2;
	double fdbhold;
	
	 for (fn2=0; fn2<mNNn6thlayerlength; fn2++) {
	 	
       fdbhold = 0.00; 
	   for (fn1=0; fn1<mNNn5thlayerlength; fn1++) {
		  fdbhold += mNNdbW56projected[fn2][fn1] * mNNdb5thlayervalue[fn1];
			 }
			
			fdbhold += mNNdbB6projected[fn2];
			mNNdb6thlayervalue[fn2] = activationfunction (fdbhold );
			mNNdb6thlayerderivedvalue[fn2] = derivedactivationfunction (fdbhold );
		 
	 }
}


void NN::FNN_FORWARD_MULTIPLY_PROJECTION_6_7 () {
	
	
	
	int fn1,fn2;
	double fdbhold;
	
	 for (fn2=0; fn2<mNNn7thlayerlength; fn2++) {
	 	
       fdbhold = 0.00; 
	   for (fn1=0; fn1<mNNn6thlayerlength; fn1++) {
		  fdbhold += mNNdbW67projected[fn2][fn1] * mNNdb6thlayervalue[fn1];
			 }
			
			fdbhold += mNNdbB7projected[fn2];
			mNNdb7thlayervalue[fn2] = activationfunction (fdbhold );
			mNNdb7thlayerderivedvalue[fn2] = derivedactivationfunction (fdbhold );
		 
	 }
}


void NN::FNN_FORWARD_MULTIPLY_PROJECTION_7_8 () {
	
	
	
	int fn1,fn2;
	double fdbhold;
	
	 for (fn2=0; fn2<mNNn8thlayerlength; fn2++) {
	 	
       fdbhold = 0.00; 
	   for (fn1=0; fn1<mNNn7thlayerlength; fn1++) {
		  fdbhold += mNNdbW78projected[fn2][fn1] * mNNdb7thlayervalue[fn1];
			 }
			
			fdbhold += mNNdbB8projected[fn2];
			mNNdb8thlayervalue[fn2] = activationfunction (fdbhold );
			mNNdb8thlayerderivedvalue[fn2] = derivedactivationfunction (fdbhold );
		 
	 }
}


void NN::FNN_FORWARD_MULTIPLY_PROJECTION_8_9 () {
	
	
	
	int fn1,fn2;
	double fdbhold;
	
	 for (fn2=0; fn2<mNNn9thlayerlength; fn2++) {
	 	
       fdbhold = 0.00; 
	   for (fn1=0; fn1<mNNn8thlayerlength; fn1++) {
	   	
		  fdbhold += mNNdbW89projected[fn2][fn1] * mNNdb8thlayervalue[fn1];
			 }
			
			fdbhold += mNNdbB9projected[fn2];
			mNNdb9thlayervalue[fn2] = activationfunction (fdbhold );
			mNNdb9thlayerderivedvalue[fn2] = derivedactivationfunction (fdbhold );
		 
	 }
}


void NN::FNN_FORWARD_MULTIPLY_PROJECTION_9_10 () {
	
	
	int fn1,fn2;
	double fdbhold;
	
	 for (fn2=0; fn2<mNNn10thlayerlength; fn2++) {
	 	
       fdbhold = 0.00; 
	   for (fn1=0; fn1<mNNn9thlayerlength; fn1++) {
	   	
		  fdbhold += mNNdbW910projected[fn2][fn1] * mNNdb9thlayervalue[fn1];
			 }
			
			fdbhold += mNNdbB10projected[fn2];
			mNNdb10thlayervalue[fn2] = activationfunction (fdbhold );
			mNNdb10thlayerderivedvalue[fn2] = derivedactivationfunction (fdbhold );
		 
	 }
}


void NN::FNN_FORWARD_MULTIPLY_PROJECTION_10_11 () {
	
	
	int fn1,fn2;
	double fdbhold;
	
	 for (fn2=0; fn2<mNNn11thlayerlength; fn2++) {
	 	
       fdbhold = 0.00; 
	   for (fn1=0; fn1<mNNn10thlayerlength; fn1++) {
	   	
		  fdbhold += mNNdbW1011projected[fn2][fn1] * mNNdb10thlayervalue[fn1];
			 }
			
			fdbhold += mNNdbB11projected[fn2];
			mNNdb11thlayervalue[fn2] = activationfunction (fdbhold );
			mNNdb11thlayerderivedvalue[fn2] = derivedactivationfunction (fdbhold );
		 
	 }
}


/*
void NN::FNN_MULTIPLYLAST () {
	
	int fn1,fn2;
	double fdbhold;
	
	 for (fn2=0; fn2<mNNnoutputlayerlength; fn2++) {
	 	
       fdbhold = 0.00; 
	   for (fn1=0; fn1<mNNnlastlayerlength; fn1++) {
	   	
		  fdbhold += mNNdbWLo[fn2][fn1] * mNNdblastlayervalue[fn1];
			 }
			
			fdbhold += mNNdbBo[n1];
			mNNdboutputlayervalue = activationfunction (fdbhold );
			mNNdboutputlayerderivedvalue = derivedactivationfunction (fdbhold );
		 
	 }
}
*/


//move input layer to virtual output(o) layer
/*
void NN::FNN_FORWARD_ADJUST_LAYER_i_o () {
	int fn1;
	for (fn1=0; fn1<mNNnoutputlayerlength; fn1++) {
     	 
      mNNdbinputlayervalue[fn1] = mNNdboutputlayervalue[fn1];
	}
	
} */

/*
//move first layer to virtual output(o) layer
void NN::FNN_FORWARD_ADJUST_LAYER_1_o () {
	int fn1;
	for (fn1=0; fn1<mNNnoutputlayerlength; fn1++) {
     	 
      mNNdboutputlayervalue[fn1] = mNNdb1stlayervalue[fn1];
	}
	
}

//move second layer to virtual output(o) layer
void NN::FNN_FORWARD_ADJUST_LAYER_2_o () {
	int fn1;
	for (fn1=0; fn1<mNNnoutputlayerlength; fn1++) {
     	 
      mNNdboutputlayervalue[fn1] = mNNdb2ndlayervalue[fn1];
	}
	
}

//move third layer to virtual output(o) layer
void NN::FNN_FORWARD_ADJUST_LAYER_3_o () {
	int fn1;
	for (fn1=0; fn1<mNNnoutputlayerlength; fn1++) {
     	 
      mNNdboutputlayervalue[fn1] = mNNdb3rdlayervalue[fn1];
	}
	
}

//move fourth layer to virtual output(o) layer
void NN::FNN_FORWARD_ADJUST_LAYER_4_o () {
	int fn1;
	for (fn1=0; fn1<mNNnoutputlayerlength; fn1++) {
     	 
      mNNdboutputlayervalue[fn1] = mNNdb4thlayervalue[fn1];
	}
	
}

//move fifth layer to virtual output(o) layer
void NN::FNN_FORWARD_ADJUST_LAYER_5_o () {
	int fn1;
	for (fn1=0; fn1<mNNnoutputlayerlength; fn1++) {
     	 
      mNNdboutputlayervalue[fn1] = mNNdb5thlayervalue[fn1];
	}
	
}

//move six layer to virtual output(o) layer
void NN::FNN_FORWARD_ADJUST_LAYER_6_o () {
	int fn1;
	for (fn1=0; fn1<mNNnoutputlayerlength; fn1++) {
     	 
      mNNdboutputlayervalue[fn1] = mNNdb6thlayervalue[fn1];
	}
	
}

//move seventh layer to virtual output(o) layer
void NN::FNN_FORWARD_ADJUST_LAYER_7_o () {
	int fn1;
	for (fn1=0; fn1<mNNnoutputlayerlength; fn1++) {
     	 
      mNNdboutputlayervalue[fn1] = mNNdb7thlayervalue[fn1];
	}
	
}

//move eight layer to virtual output(o) layer
void NN::FNN_FORWARD_ADJUST_LAYER_8_o () {
	int fn1;
	for (fn1=0; fn1<mNNnoutputlayerlength; fn1++) {
     	 
      mNNdboutputlayervalue[fn1] = mNNdb8thlayervalue[fn1];
	}
	
}

//move nine layer to virtual output(o) layer
void NN::FNN_FORWARD_ADJUST_LAYER_9_o () {
	int fn1;
	for (fn1=0; fn1<mNNnoutputlayerlength; fn1++) {
     	 
      mNNdboutputlayervalue[fn1] = mNNdb9thlayervalue[fn1];
	}
	
}

//move tenth layer to virtual output(o) layer
void NN::FNN_FORWARD_ADJUST_LAYER_10_o () {
	int fn1;
	for (fn1=0; fn1<mNNnoutputlayerlength; fn1++) {
     	 
      mNNdboutputlayervalue[fn1] = mNNdb10thlayervalue[fn1];
	}
	
}

//move eleventh layer to virtual output(o) layer
void NN::FNN_FORWARD_ADJUST_LAYER_11_o () {
	int fn1;
	for (fn1=0; fn1<mNNnoutputlayerlength; fn1++) {
     	 
      mNNdboutputlayervalue[fn1] = mNNdb11thlayervalue[fn1];
	}
	
} */



#endif