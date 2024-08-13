#ifndef NNFUNCTION1_H
#define NNFUNCTION1_H


#include<header.h>


double FGLOBAL_GENERATE_RANDOM_NUMBER (double fdbmaxnumber, int fn2, int fn1) {
	
	int fnsignal1,
	    fnsignal2;
	
	double fdbrandomsignal,
	       fdbsignal;
	       
	fn1 += 1;
	fn2 += 1;
	
	
	srand (time(NULL));  
    fnsignal1 = ((rand() % 1000) +1);
    
    time_t now = time(0);
    tm *ltm = localtime(&now);
    fnsignal2 = ltm->tm_sec + 1;
    
    
    fdbsignal = (((double)fnsignal1/fnsignal2)+((double)fn1/fn2));
    fdbrandomsignal = fdbmaxnumber*cos((fdbsignal*360)+40);
    
    
	return fdbrandomsignal; 
}

	


void NN::FNN_DISPLAY_TRAINING_GUIDANCE (int fntrainingnumber) {
	
	using namespace std;
	
	int fn1;
	
	FNN_TEST_NETWORK ();
    std::cout<<"TRAIN NUMBER:"<<fntrainingnumber<<"\nPRESENT ERROR:"<<mNNdberrorsquaresum<<"\n1st LAST ERROR:"<<mNNdb1stlasterrorsquaresum<<"\n2nd LAST ERROR:"<<mNNdb2ndlasterrorsquaresum<<endl;
    cout<<"put extra training length"<<endl;
    cin>>fn1;
    mNNntotaltraining += fn1;
    
    cout<<"put new learning rate"<<endl;
    cin>>mNNdblearningrate;
    
//files was reopenned an closed during test network so they have to be open again
/*        mNNfiledatainput.open("sentence_numbers_input.txt", std::ios::in);
    mNNfiledataoutput.open("sentence_numbers_output.txt", std::ios::in); */
     
}




void NN::FNN_RESET_INPUT_DATA () {
	
     mNNfiledatainput.seekg ( std::ios::beg);
     mNNfiledataoutput.seekg ( std::ios::beg);
     
     mNNdb2ndlasterrorsquaresum = mNNdb1stlasterrorsquaresum;
     mNNdb1stlasterrorsquaresum = mNNdberrorsquaresum;
     mNNdberrorsquaresum = 0.0;
     
     mNNntrainingepochno = 0;
     if ((mNNdb2ndlasterrorsquaresum>=mNNdb1stlasterrorsquaresum)||(mNNdb1stlasterrorsquaresum>=mNNdberrorsquaresum)) {
		
		mNNbooltrainflag=1;
		 	
	 }
     	
     else {
        mNNbooltrainflag=0;
     	
     } 
} 



#endif