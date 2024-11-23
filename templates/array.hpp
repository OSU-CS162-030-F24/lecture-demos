#ifndef ARRAY_HPP
#define ARRAY_HPP

// This is now called a "class template"

// Parametric polymorphism
template<int Size, typename Type>
class array {
private:
	Type data[Size];
public:
	Type& at(int i) {
		if (i < 0 || i >= Size) {
			// TODO throw an exception
		}

		return this->data[i];
	}
};



#endif
