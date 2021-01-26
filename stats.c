#include "stats.h"
#include "math.h"
/*Function to compute the average , min and max of a number set */
struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0;
    s.min = numberset[0];
    s.max =  numberset[0];
    float sum = 0;
    
    if (setlength == 0)
    {
        s.average = sqrt(-1) ;
        s.min = sqrt(-1) ;
        s.max = sqrt(-1) ;
    }
    else
    {
            for(int i = 0 ; i < setlength ;  i++ )
            {
                sum += numberset[i];
                /*To calculate minimim of array*/
                if ( numberset[i] < s.min)
                {
                    s.min =  numberset[i];
                }
                /*To calculate maximum of array*/
                if ( numberset[i] > s.max)
                {
                    s.max =  numberset[i];
                }
            }   
            s.average = sum / setlength ;
    }
    
    return (s);  
}




