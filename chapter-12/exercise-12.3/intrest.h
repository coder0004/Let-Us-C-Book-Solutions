//intrest.h

/*Storing the macro definitions of 
Simple Interest and Amount in the “interest.h” 
header file*/

#define SIM_INT(p,t,r) (p*t*r/100.0)
#define AMT(p,SIM_INT) (p+SIM_INT)
