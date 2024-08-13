#ifndef NN_H
#define NN_H

#include"header.h"

/* layerbreadth represents the number of hidden layers
*/

class NN {
	
	protected:
	
	private:
	
	bool mNNboolpretraining=0,
	     mNNboolprojectnetwork=0,
	     mNNboolinitialisenetwork=0;
	     
	std::string mNNstractivationfunction="logtanh";
	
	
    public:
	
	std::fstream mNNfileAW,
	        mNNfileW,
	        mNNfileB,
	        mNNfiledatainput,
	        mNNfiledataoutput;
	bool mNNbooltrainflag=1;
	
	int mNNnattentionno[8],
	    mNNndatainput[48],
	    mNNnlayerbreadth,
	    mNNndataoutput[24],
	    mNNndatasize,
	    mNNndatainputlength=48,
	    mNNndataoutputlength=24,
	    mNNninputlayerlength,
	    mNNn1stlayerlength,
	    mNNn2ndlayerlength,
	    mNNn3rdlayerlength,
	    mNNn4thlayerlength,
	    mNNn5thlayerlength,
	    mNNn6thlayerlength,
	    mNNn7thlayerlength,
	    mNNn8thlayerlength,
	    mNNn9thlayerlength,
	    mNNn10thlayerlength,
	    mNNn11thlayerlength,
	    mNNnoutputlayerlength=24,
	    mNNnattentionweightlength=64,
	    mNNntotalepochtraining,
	    mNNntotaltraining,
	    mNNnnetworkaccuracy,
	    mNNntrainingepochno,
	    mNNntrainingno,
	    mNNnattentionweightbreadth=6,
	    mNNnattentioninputsize;
	    
	double 
	       mNNdblearningrate,
	       mNNdbfriction,
	       mNNdberrorsquaresum,
	       mNNdb1stlasterrorsquaresum=1000.5,
	       mNNdb2ndlasterrorsquaresum=8000.5,
	       mNNdbregularisationconstant,
	       mNNdbAW[65][6],
	       mNNdbAWerror[65][6],
	       mNNdbAWaverageerror[65][6],
	       
	       mNNdb1stlayervalue[100],
	       mNNdb2ndlayervalue[100],
	       mNNdb3rdlayervalue[100],
	       mNNdb4thlayervalue[100],
	       mNNdb5thlayervalue[100],
	       mNNdb6thlayervalue[1],
	       mNNdb7thlayervalue[1],
	       mNNdb8thlayervalue[1],
	       mNNdb9thlayervalue[1],
	       mNNdb10thlayervalue[1],
	       mNNdb11thlayervalue[1],
	       mNNdb1stlayerderivedvalue[100],
	       mNNdb2ndlayerderivedvalue[100],
	       mNNdb3rdlayerderivedvalue[100],
	       mNNdb4thlayerderivedvalue[100],
	       mNNdb5thlayerderivedvalue[100],
	       mNNdb6thlayerderivedvalue[1],
	       mNNdb7thlayerderivedvalue[1],
	       mNNdb8thlayerderivedvalue[1],
	       mNNdb9thlayerderivedvalue[1],
	       mNNdb10thlayerderivedvalue[1],
	       mNNdb11thlayerderivedvalue[1],
	       
	       mNNdb1stlayererror[100],
	       mNNdb2ndlayererror[100],
	       mNNdb3rdlayererror[100],
	       mNNdb4thlayererror[100],
	       mNNdb5thlayererror[100],
	       mNNdb6thlayererror[1],
	       mNNdb7thlayererror[1],
	       mNNdb8thlayererror[1],
	       mNNdb9thlayererror[1],
	       mNNdb10thlayererror[1],
	       mNNdb11thlayererror[1],
	       mNNdbinputlayervalue[64],
	       mNNdboutputlayervalue[24],
	       mNNdbinputlayererror[64],
	       mNNdboutputlayererror[24],
	       mNNdbW01[100][100],
	       mNNdbW12[100][100],
	       mNNdbW23[100][100],
	       mNNdbW34[100][100],
	       mNNdbW45[100][100],
	       mNNdbW56[100][100],
	       mNNdbW67[1][1],
	       mNNdbW78[1][1],
	       mNNdbW89[1][1],
	       mNNdbW910[1][1],
	       mNNdbW1011[1][1],
	       mNNdbW01momentum[100][100],
	       mNNdbW12momentum[100][100],
	       mNNdbW23momentum[100][100],
	       mNNdbW34momentum[100][100],
	       mNNdbW45momentum[100][100],
	       mNNdbW56momentum[100][100],
	       mNNdbW67momentum[1][1],
	       mNNdbW78momentum[1][1],
	       mNNdbW89momentum[1][1],
	       mNNdbW910momentum[1][1],
	       mNNdbW1011momentum[1][1],
	       mNNdbW01projected[100][100],
	       mNNdbW12projected[100][100],
	       mNNdbW23projected[100][100],
	       mNNdbW34projected[100][100],
	       mNNdbW45projected[100][100],
	       mNNdbW56projected[100][100],
	       mNNdbW67projected[1][1],
	       mNNdbW78projected[1][1],
	       mNNdbW89projected[1][1],
	       mNNdbW910projected[1][1],
	       mNNdbW1011projected[1][1],
	       mNNdbW01error[100][100],
	       mNNdbW12error[100][100],
	       mNNdbW23error[100][100],
	       mNNdbW34error[100][100],
	       mNNdbW45error[100][100],
	       mNNdbW56error[100][100],
	       mNNdbW67error[1][1],
	       mNNdbW78error[1][1],
	       mNNdbW89error[1][1],
	       mNNdbW910error[1][1],
	       mNNdbW1011error[1][1],
	       mNNdbW01averageerror[100][100],
	       mNNdbW12averageerror[100][100],
	       mNNdbW23averageerror[100][100],
	       mNNdbW34averageerror[100][100],
	       mNNdbW45averageerror[100][100],
	       mNNdbW56averageerror[100][100],
	       mNNdbW67averageerror[1][1],
	       mNNdbW78averageerror[1][1],
	       mNNdbW89averageerror[1][1],
	       mNNdbW910averageerror[1][1],
	       mNNdbW1011averageerror[1][1],
	       mNNdbB1[100],
	       mNNdbB2[100],
	       mNNdbB3[100],
	       mNNdbB4[100],
	       mNNdbB5[100],
	       mNNdbB6[1],
	       mNNdbB7[1],
	       mNNdbB8[1],
	       mNNdbB9[1],
	       mNNdbB10[1],
	       mNNdbB11[1],
	       mNNdbB1momentum[100],
	       mNNdbB2momentum[100],
	       mNNdbB3momentum[100],
	       mNNdbB4momentum[100],
	       mNNdbB5momentum[100],
	       mNNdbB6momentum[1],
	       mNNdbB7momentum[1],
	       mNNdbB8momentum[1],
	       mNNdbB9momentum[1],
	       mNNdbB10momentum[1],
	       mNNdbB11momentum[1],
	       mNNdbB1projected[100],
	       mNNdbB2projected[100],
	       mNNdbB3projected[100],
	       mNNdbB4projected[100],
	       mNNdbB5projected[100],
	       mNNdbB6projected[1],
	       mNNdbB7projected[1],
	       mNNdbB8projected[1],
	       mNNdbB9projected[1],
	       mNNdbB10projected[1],
	       mNNdbB11projected[1],
	       mNNdbB1error[100],
	       mNNdbB2error[100],
	       mNNdbB3error[100],
	       mNNdbB4error[100],
	       mNNdbB5error[100],
	       mNNdbB6error[1],
	       mNNdbB7error[1],
	       mNNdbB8error[1],
	       mNNdbB9error[1],
	       mNNdbB10error[1],
	       mNNdbB11error[1],
	       mNNdbB1averageerror[100],
	       mNNdbB2averageerror[100],
	       mNNdbB3averageerror[100],
	       mNNdbB4averageerror[100],
	       mNNdbB5averageerror[100],
	       mNNdbB6averageerror[1],
	       mNNdbB7averageerror[1],
	       mNNdbB8averageerror[1],
	       mNNdbB9averageerror[1],
	       mNNdbB10averageerror[1],
	       mNNdbB11averageerror[1];

    
    
//    public:
     void FNN_DISPLAY_TRAINING_GUIDANCE (int fntrainingnumber);
     
     void FNN_SET_PROJECTED_VALUES ();
     
     void FNN_SET_MOMENTUM_VALUES ();
     void FNN_RESET_INPUT_DATA ();
     void FNN_RESET_EPOCH ();
     void FNN_TRAIN_NETWORK ();
     
     
     int FNN_SELECT_ATTENTION_WEIGHT (int fnXi1,int fnXi2,int fnXi3,int fnXi4,int fnXi5);
     void FNN_INITIALISE_ATTENTION_LAYER ();
     void FNN_INITIALISE_FEEDFORWARD_LAYER ();
     void FNN_INITIALISE_PROJECTED_VALUES ();
     void FNN_INITIALISE_MOMENTUM_VALUES ();
     void FNN_SET_ATTENTION_LAYER ();
     void FNN_SET_FEEDFORWARD_LAYER ();
     void FNN_UPDATE_PROJECTED_VALUES ();
     void FNN_INITIALISE_ATTENTION_AVERAGE_ERROR ();
     void FNN_SET_INPUT ();
     void FNN_SET_INPUT_TO_FEEDFORWARD ();
     void FNN_FORWARD_PROPAGATE_ATTENTION_LAYER ();
     void FNN_FORWARD_PROPAGATE_FEEDFORWARD_LAYER ();
     void FNN_BACKWARD_PROPAGATE_ATTENTION_LAYER ();
     void FNN_BACKWARD_PROPAGATE_FEEDFORWARD_LAYER ();
     void FNN_FORWARD_PROPAGATE_PROJECTEDFEEDFORWARD_LAYER ();
     void FNN_BACKWARD_PROPAGATE_PROJECTEDFEEDFORWARD_LAYER ();
     void FNN_UPDATE_MOMENTUM_VALUES ();
     void FNN_UPDATE_ATTENTION_LAYER ();
     void FNN_UPDATE_FEEDFORWARD_LAYER ();
     void FNN_SAVE_ATTENTION_LAYER ();
     void FNN_SAVE_FEEDFORWARD_LAYER ();
     void FNN_BACKWARD_ADJUST_LAYER_o_0 ();
     void FNN_BACKWARD_ADJUST_LAYER_o_1 ();
     void FNN_BACKWARD_ADJUST_LAYER_o_2 ();
     void FNN_BACKWARD_ADJUST_LAYER_o_3 ();
     void FNN_BACKWARD_ADJUST_LAYER_o_4 ();
     void FNN_BACKWARD_ADJUST_LAYER_o_5 ();
     void FNN_BACKWARD_ADJUST_LAYER_o_6 ();
     void FNN_BACKWARD_ADJUST_LAYER_o_7 ();
     void FNN_BACKWARD_ADJUST_LAYER_o_8 ();
     void FNN_BACKWARD_ADJUST_LAYER_o_9 ();
     void FNN_BACKWARD_ADJUST_LAYER_o_10 ();
     void FNN_BACKWARD_ADJUST_LAYER_o_11 ();
     void FNN_BACKWARD_MULTIPLY_LAYER_11_10 ();
     void FNN_BACKWARD_MULTIPLY_LAYER_10_9 ();
     void FNN_BACKWARD_MULTIPLY_LAYER_9_8 ();
     void FNN_BACKWARD_MULTIPLY_LAYER_8_7 ();
     void FNN_BACKWARD_MULTIPLY_LAYER_7_6 ();
     void FNN_BACKWARD_MULTIPLY_LAYER_6_5 ();
     void FNN_BACKWARD_MULTIPLY_LAYER_5_4 ();
     void FNN_BACKWARD_MULTIPLY_LAYER_4_3 ();
     void FNN_BACKWARD_MULTIPLY_LAYER_3_2 ();
     void FNN_BACKWARD_MULTIPLY_LAYER_2_1 ();
     void FNN_BACKWARD_MULTIPLY_LAYER_1_0 ();
     void FNN_FORWARD_ADJUST_LAYER_i_o ();
     void FNN_FORWARD_ADJUST_LAYER_1_o ();
     void FNN_FORWARD_ADJUST_LAYER_2_o ();
     void FNN_FORWARD_ADJUST_LAYER_3_o ();
     void FNN_FORWARD_ADJUST_LAYER_4_o ();
     void FNN_FORWARD_ADJUST_LAYER_5_o ();
     void FNN_FORWARD_ADJUST_LAYER_6_o ();
     void FNN_FORWARD_ADJUST_LAYER_7_o ();
     void FNN_FORWARD_ADJUST_LAYER_8_o ();
     void FNN_FORWARD_ADJUST_LAYER_9_o ();
     void FNN_FORWARD_ADJUST_LAYER_10_o ();
     void FNN_FORWARD_ADJUST_LAYER_11_o ();
     void FNN_FORWARD_MULTIPLY_10_11 ();
     void FNN_FORWARD_MULTIPLY_9_10 ();
     void FNN_FORWARD_MULTIPLY_8_9 ();
     void FNN_FORWARD_MULTIPLY_7_8 ();
     void FNN_FORWARD_MULTIPLY_6_7 ();
     void FNN_FORWARD_MULTIPLY_5_6 ();
     void FNN_FORWARD_MULTIPLY_4_5 ();
     void FNN_FORWARD_MULTIPLY_3_4 ();
     void FNN_FORWARD_MULTIPLY_2_3 ();
     void FNN_FORWARD_MULTIPLY_1_2 ();
     void FNN_FORWARD_MULTIPLY_0_1 ();
     
     void FNN_SET_OUTPUT_LAYER_LENGTH ();
     void FNN_UPDATE_VALUES ();
     bool FNN_CHECK_ACCURACY (bool fboolprintaccuracy);
     void FNN_TEST_NETWORK ();
     void FNN_USE_PROJECTION ();
     void FNN_INITIALISE_NETWORK ();
     void FNN_ACTIVATION_FUNCTION (/*std::string fstractivationfunction*/);
     void FNN_USE_PRETRAINING ();
     void FNN_BACKWARD_MULTIPLY_PROJECTION_LAYER_11_10 ();
     void FNN_BACKWARD_MULTIPLY_PROJECTION_LAYER_10_9 ();
     void FNN_BACKWARD_MULTIPLY_PROJECTION_LAYER_9_8 ();
     void FNN_BACKWARD_MULTIPLY_PROJECTION_LAYER_8_7 ();
     void FNN_BACKWARD_MULTIPLY_PROJECTION_LAYER_7_6 ();
     void FNN_BACKWARD_MULTIPLY_PROJECTION_LAYER_6_5 ();
     void FNN_BACKWARD_MULTIPLY_PROJECTION_LAYER_5_4 ();
     void FNN_BACKWARD_MULTIPLY_PROJECTION_LAYER_4_3 ();
     void FNN_BACKWARD_MULTIPLY_PROJECTION_LAYER_3_2 ();
     void FNN_BACKWARD_MULTIPLY_PROJECTION_LAYER_2_1 ();
     void FNN_BACKWARD_MULTIPLY_PROJECTION_LAYER_1_0 ();
     void FNN_FORWARD_MULTIPLY_PROJECTION_10_11 ();
     void FNN_FORWARD_MULTIPLY_PROJECTION_9_10 ();
     void FNN_FORWARD_MULTIPLY_PROJECTION_8_9 ();
     void FNN_FORWARD_MULTIPLY_PROJECTION_7_8 ();
     void FNN_FORWARD_MULTIPLY_PROJECTION_6_7 ();
     void FNN_FORWARD_MULTIPLY_PROJECTION_5_6 ();
     void FNN_FORWARD_MULTIPLY_PROJECTION_4_5 ();
     void FNN_FORWARD_MULTIPLY_PROJECTION_3_4 ();
     void FNN_FORWARD_MULTIPLY_PROJECTION_2_3 ();
     void FNN_FORWARD_MULTIPLY_PROJECTION_1_2 ();
     void FNN_FORWARD_MULTIPLY_PROJECTION_0_1 ();


};

#endif