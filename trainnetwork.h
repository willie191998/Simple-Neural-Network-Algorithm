#ifndef TRAINNETWORK_H
#define TRAINNETWORK_H

#include"header.h"

/*
the training process is as follows-
1-initialise attention weight
2-initialise bias and weights
3-initialise momentum values
4-initialise projection values
5-set attention weights
6-set bias and weights
7-update projected values
8-set input values
9-forward propagate attention layer
10-forward propagate weight-bias
11-back propagate weight-bias
12-back propagate attention layer
13-accumulate attention layer error
14-accumulate weight-bias error
repeat step 8 till epoch completed
15-update momentum values
16-update projected values
17-update weight values
repeat step 7 till training completed
*/


void NN::FNN_TRAIN_NETWORK ()
{
   using namespace std;
   
   int fndataepochlength=0;
   
   if (mNNboolinitialisenetwork==1) {
     FNN_INITIALISE_ATTENTION_LAYER ();
     FNN_INITIALISE_FEEDFORWARD_LAYER ();
   }
   
   
   FNN_INITIALISE_MOMENTUM_VALUES ();
   
   FNN_SET_ATTENTION_LAYER ();
   FNN_SET_FEEDFORWARD_LAYER ();
   
   
       mNNfiledatainput.open("sentence_numbers_input.txt", std::ios::in);
    mNNfiledataoutput.open("sentence_numbers_output.txt", std::ios::in);
   
   
   for (mNNntrainingno=1; mNNntrainingno <= mNNntotaltraining; mNNntrainingno++) {
   	
    clrscr();
    FNN_UPDATE_PROJECTED_VALUES ();
    FNN_INITIALISE_ATTENTION_AVERAGE_ERROR ();
 	
    cout<<"TRAINING :"<<mNNntrainingno<<endl;
 
    mNNdblearningrate = 0.9998*mNNdblearningrate;
   
      cout<<"LEARNING RATE: "<<mNNdblearningrate<<endl;
      cout<<"PRESENT ERROR SUM: "<<mNNdberrorsquaresum<<endl;
      cout<<"LAST ERROR SUM: "<<mNNdb1stlasterrorsquaresum<<endl;
      cout<<"LAST LAST ERROR SUM: "<<mNNdb2ndlasterrorsquaresum<<endl;
 
   for (mNNntrainingepochno=1; mNNntrainingepochno <= mNNntotalepochtraining; mNNntrainingepochno++) {
   
    FNN_SET_INPUT ();
   FNN_FORWARD_PROPAGATE_ATTENTION_LAYER ();
  
   if (mNNboolprojectnetwork==0) {
   	FNN_FORWARD_PROPAGATE_FEEDFORWARD_LAYER ();
   FNN_BACKWARD_PROPAGATE_FEEDFORWARD_LAYER ();
   }
   
   else if (mNNboolprojectnetwork==1) {
   	FNN_FORWARD_PROPAGATE_PROJECTEDFEEDFORWARD_LAYER ();
   FNN_BACKWARD_PROPAGATE_PROJECTEDFEEDFORWARD_LAYER ();
   }
   FNN_BACKWARD_PROPAGATE_ATTENTION_LAYER (); 
   
// error is accumulated during back propagation for both attention and feed forward layer

   
   
   }
   
   fndataepochlength++;
   //FNN_UPDATE_MOMENTUM_VALUES ();
   FNN_UPDATE_ATTENTION_LAYER ();
   FNN_UPDATE_FEEDFORWARD_LAYER ();
  
   if (mNNntrainingno==mNNntotaltraining) {
     FNN_DISPLAY_TRAINING_GUIDANCE (mNNntrainingno);
   }
   
   if (fndataepochlength==(mNNndatasize/mNNntotalepochtraining)) {
     fndataepochlength=0;
     FNN_RESET_INPUT_DATA ();
   }
   
/*   if (mNNbooltrainflag==0)
       break; */
       

   } 
//end of training. network values are saved.
       
   FNN_SAVE_ATTENTION_LAYER ();
   FNN_SAVE_FEEDFORWARD_LAYER ();
   
   
    
    
   mNNfiledatainput.close();
   mNNfiledataoutput.close();
   
}




//already done in SET FEEDFORWARD
void NN::FNN_SET_OUTPUT_LAYER_LENGTH () {
	
	if (mNNnlayerbreadth == 0) {
    	mNNnoutputlayerlength=mNNn1stlayerlength; }
    
    else if (mNNnlayerbreadth == 1) {
	    mNNnoutputlayerlength=mNNn2ndlayerlength; }
	
	else if (mNNnlayerbreadth == 2) {
	    mNNnoutputlayerlength=mNNn3rdlayerlength; }
	
	else if (mNNnlayerbreadth == 3) {
	    mNNnoutputlayerlength=mNNn4thlayerlength; }
	
	else if (mNNnlayerbreadth == 4) {
	    mNNnoutputlayerlength=mNNn5thlayerlength; }
	
	else if (mNNnlayerbreadth == 5) {
	    mNNnoutputlayerlength=mNNn6thlayerlength; }
	
	else if (mNNnlayerbreadth == 6) {
	    mNNnoutputlayerlength=mNNn7thlayerlength; }
	
	else if (mNNnlayerbreadth == 7) {
	    mNNnoutputlayerlength=mNNn8thlayerlength; }
	
	else if (mNNnlayerbreadth == 8) {
	    mNNnoutputlayerlength=mNNn9thlayerlength; }
	
	else if (mNNnlayerbreadth == 9) {
	    mNNnoutputlayerlength=mNNn10thlayerlength; }
	
	else if (mNNnlayerbreadth == 10) {
	    mNNnoutputlayerlength=mNNn11thlayerlength; }
	
	
}


#endif