#ifndef Generic_h
#define Generic_h



class Generic {
    int data;
	
public:

    static int count;

    Generic() {
       // data = 0;
        data++;
        count++;
		
    }
    
    Generic(int d) {
        data = d;
		// += count;
		//count++;
		
    }
	
	
};

int Generic::count;

#endif