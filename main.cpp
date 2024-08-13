
#include"header.h"

using namespace std;

int main ( )
{
	NN NN;
	
	NN.mNNdblearningrate=0.4;
	NN.mNNdbfriction=0.3;
	NN.mNNdbregularisationconstant=0.08;
	NN.mNNntotalepochtraining=10;
	NN.mNNnattentionweightlength=65;
	NN.mNNnattentionweightbreadth=6;
	NN.mNNntotaltraining=1000;
	NN.mNNnlayerbreadth=2;
	NN.mNNndatasize=550;
	NN.mNNninputlayerlength=64;
	NN.mNNn1stlayerlength=50;
	NN.mNNn2ndlayerlength=40;
	NN.mNNn3rdlayerlength=24;
	NN.mNNn4thlayerlength=24;
	
	
	//NN.FNN_INITIALISE_NETWORK ();
	//NN.FNN_USE_ATTENTION ();
	NN.FNN_ACTIVATION_FUNCTION ();
	NN.FNN_TRAIN_NETWORK ();
	NN.FNN_TEST_NETWORK ();
	cout<<"TRAINING SUCCESSFUL"<<endl;
	
}