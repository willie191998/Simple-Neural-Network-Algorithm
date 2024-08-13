#ifndef HEADER_H
#define HEADER_H

#include<cmath>
#include<time.h>
#include<iostream>
#include<stdio.h>
#include<fstream>
#include<stdlib.h>
#include<iomanip>
#include<conio.h>

#include"test/nnclass.h"
#include"namespace.h"
#include"function1.h"
#include"selectattentionweightno.h"
#include"attentionlayer1.h"
#include"attentionlayer2.h"
#include"setinput.h"
#include"forwardpropagate.h"
#include"forwardpropagateprojected.h"
#include"backwardpropagate.h"
#include"backwardpropagateprojected.h"
#include"savefeedforwardlayer.h"
#include"setfeedforwardlayer.h"
#include"initialisefeedforwardlayer.h"
#include"projectionvalues.h"
#include"momentumvalues.h"
#include"updatefeedforwardlayer.h"
#include"trainnetwork.h"
#include"trainingfunction.h"
#include"testnetwork.h"
#include"checkaccuracy.h"


class NEURAL_NETWORK;


int  FGLOBAL_SELECT_ATTENTION_WEIGHT_NO (int fninputsize,int fninput1,int fninput2,int fninput3,int fninput4,int fninput5, int fninput6, int fninput7, int fninput8);
double FGLOBAL_GENERATE_RANDOM_NUMBER (double fftmaxnumber, int fn1, int fn2);


#endif