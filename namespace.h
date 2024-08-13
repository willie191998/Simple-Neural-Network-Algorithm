#ifndef NAMESPACE_H
#define NAMESPACE_H

#include"header.h"

namespace logtanh {
	
   double activationfunction (double x) {
     double out;
     out = tanh(x);
	 if (out==1)
	    return 0.9915;
 	else if (out==0)
	    return 0.0015;
 	else 
	    return out;
   }

   double derivedactivationfunction (double x) {
	
     double out, out1;
     out = tanh(x);
 	out1=1-(out*out);
 	if (out1==1)
	    return 0.9915;
 	else if (out1==0)
	    return 0.0015;
 	else 
	    return out1;
   }
}

  
namespace hardtanh {
	
  double activationfunction (double x) {
    
    if ((x >= -1.5) & (x <= 1.5)) {
       return x;
    }
    else {
       return 0.001;
    }
   }

   double derivedactivationfunction (double x) {
	
    if ((x >=-1.5) & (x<=1.5)) {
        return 1.0015;
    }
    else {
        return 0.0015; }
    }
}


namespace restrictoutput {
	
  int outputactivationfunction (float fftx) {
    
    if ((fftx >= -0.3) && (fftx <= 0.3)) {
       return 0;
    }
    else if ((fftx < -0.3) && (fftx > -1.5)) {
       return -1;
    }
    else {
       return 1;
    }
   }

}


#endif