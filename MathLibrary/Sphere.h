#ifndef SPHERE_H
#define SPHERE_H
#include "Vector.h"
#include <iostream>
namespace  MATH {
	struct Sphere : public Vec3 {
		float r;

		/// Just a little utility to populate a Shere
		inline void set(float x_, float y_, float z_, float r_) {
			set(x_, y_, z_, r_); 
		}

		Sphere() { 
			set(0.0f, 0.0f, 0.0f, 0.0f); 
		}

		Sphere(float x, float y, float z, float r) {
			set(x, y, z, r);
		}

		/// Copy constructor
		Sphere(const Sphere& s) {
			set(s.x, s.y, s.z, s.r);
		}

		/// An assignment operator
		inline Sphere& operator = (const Sphere& s){
			set(s.x, s.y, s.z, s.r);
			return *this;
		}

		/// print the values of the sphere and add a comment if you wish
		void print(const char* comment = nullptr) const {
			if (comment) printf("%s\n", comment);
			printf("%1.4f %1.4f %1.4f %1.4f\n", x, y, z, r);
		}

	};


	

}
#endif