#ifndef TRAININGSELECTION_H
#define TRAININGSELECTION_H

#include"header.h"

void NN::FNN_USE_PROJECTION () {
	mNNboolprojectnetwork=1;
}


void NN::FNN_INITIALISE_NETWORK () {
	mNNboolinitialisenetwork=1;
}


void NN::FNN_ACTIVATION_FUNCTION (/*std::string fstractivationfunction*/) {
	mNNstractivationfunction; //= fstractivationfunction;
}


void NN::FNN_USE_PRETRAINING () {
	mNNboolpretraining = 1;
}


#endif