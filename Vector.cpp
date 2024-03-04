#include <math.h>
#include "Vector.h"

Vector3 Add(const Vector3& v1, const Vector3& v2) {

	Vector3 anser;
	anser.x = v1.x + v2.x;
	anser.y = v1.y + v2.y;
	anser.z = v1.z + v2.z;

	return anser;

}

Vector3 Subtract(const Vector3& v1, const Vector3& v2) {

	Vector3 anser;
	anser.x = v1.x - v2.x;
	anser.y = v1.y - v2.y;
	anser.z = v1.z - v2.z;

	return anser;

}

Vector3 Multiply(float scalar, const Vector3& v) {

	Vector3 anser;
	anser.x = scalar * v.x;
	anser.y = scalar * v.y;
	anser.z = scalar * v.z;

	return anser;

}

float Dot(const Vector3& v1, const Vector3& v2) {

	float anser;
	anser = (v1.x * v2.x) + (v1.y * v2.y) + (v1.z * v2.z);

	return anser;

}

float Length(const Vector3& v) {

	float anser;
	anser = sqrtf(Dot(v, v));

	return anser;

}

Vector3 Normalize(const Vector3& v) {

	Vector3 anser;
	float length = Length(v);
	anser.x = v.x / length;
	anser.y = v.y / length;
	anser.z = v.z / length;

	return anser;

}