#ifndef Object_h
#define Object_h

class Object {
    
    public:
    static int count;
    
    Object(){
        count++;
    }
    
    Object(const Object &o2){
        o2.count++;
    }
 
    
};
	

#endif