

// ===========================================================================
//                                  Includes
// ===========================================================================

#include "String.h"
// =========================================================================
//                               Definition of static attribute
// =========================================================================
const size_t String ::MAX_SIZE = 100;




// ===========================================================================
//                                Constructors
// ===========================================================================

//Constructeur par defaut
String::String(){
	size_=0;
	capacity_=getCapacity(0);
	data_=nullptr;
}

//constructeur par valeur
String::String(size_t n , char c){
	size_=n;
	capacity_=getCapacity(n);
	data_=new char[capacity_+1];
  for (unsigned int i =0; i<n; i++){
    data_[i]=c;
  }
  data_[n]='\0';
}

//methode de construction par copie
String::String( const String& s ){
  size_=s.size();
  capacity_=getCapacity(size_);
  data_= new char[capacity_+1];
  for(unsigned int i=0; i<size_;i++){
    data_[i]=s.data_[i];
  }
}


// ===========================================================================
//                                 Destructor
// ===========================================================================



// ===========================================================================
//                               Public Methods
// ===========================================================================
size_t String::getCapacity(size_t size){
	return size*2;
}

// =========================================================================
//                                  Getters
// =========================================================================

size_t String::size()const {
  return size_;
}


char String::getChar(int i)const{
  return data_[i];
}



 
// =========================================================================
//                                  Setters
// =========================================================================



// ===========================================================================
//                              Public Methods
// ===========================================================================


