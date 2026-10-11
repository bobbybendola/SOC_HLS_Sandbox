/**
 * Looping through arrays A and B, and combining their individual sums 
 * and loading them into C.
 */
#define N 1024 

int vecAdd(float A[], float B[], float C[]){
    
    for (int i=0; i<N; i++)
    {
        #pragma HLS UNROLL factor=16
        // unrolls the addition into 16 different processes, 
        // you can also just ignore factor and unroll into 1024 processes. Copies physical hardware
        // #pragma HLS pipeline: allows iterations to execute without dependecy on previous ones to finish

        C[i]= A[i]+ B[i];
    }
    return 0; 
}

