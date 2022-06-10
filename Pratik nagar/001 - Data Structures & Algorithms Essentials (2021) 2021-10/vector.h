
// using template to make out code more generic..


template<typename T>
class Vector{
	T *arr;
	int cs;
	int mx;
public:
	Vector(int max_size=1){
		cs=0;
		mx=max_size;
		arr=new T[mx];
	}
	void push_back(const T ele){
		if(cs==mx){
			// coping the odd arr, creating new arr, copying old to new arr, deleting old array
			T *oldarr=arr;
			mx=mx*2;
			arr=new T[mx];
			for(int i=0;i<cs;i++)
				arr[i]=oldarr[i];
			delete [] oldarr;
		}
		arr[cs++]=ele;
	}
	void pop_back(){
		if(cs>=0)
			cs--;
	}
	bool isEmpty() const{ 
		return cs==0;
	}
	T front() const{
		return arr[0];
	}
	T back() const{
		return arr[cs-1];
	}
	T at(const int i) const{
		return arr[i];
	}
	int size() const{
		return cs;
	}
	int capcity() const{
		return mx;
	}

	// operator overloading
	T operator[](const int i) const{
		return arr[i];
	}
};