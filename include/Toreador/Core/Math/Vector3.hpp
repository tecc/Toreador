#ifndef TOREADOR_VECTOR3_HPP
#define TOREADOR_VECTOR3_HPP

namespace toreador {
    namespace math {
        struct Vector3 {
            float x;
            float y;
            float z;

            Vector3 operator+( float ) const;
            Vector3 operator+( Vector3 ) const;

            Vector3 operator-( float ) const;
            Vector3 operator-( Vector3 ) const;

            Vector3 operator*( float ) const;
            Vector3 operator*( Vector3 ) const;

            Vector3 operator/( float ) const;
            Vector3 operator/( Vector3 ) const;

            /**
             *
             * @param vector2 the vector to get the magnitude of
             * @return the magnitude of the vector
             */
            float magnitude() const;

            /**
             *
             * @param vector2 the vector to get the magnitude of
             * @return the multiplicative inverse of the magnitude
             */
            float inverseMagnitude() const;

            /**
             *
             * @param vector2 the vector to normalize
             * @return a vector that is the normalized version of the input
             */
            Vector3 normalize() const;
        };

        Vector3 VECTOR3_NULL = { 0.0F, 0.0F, 0.0F };
        Vector3 VECTOR3_UNIT = { 1.0F, 1.0F, 1.0F };

    }
}

#endif// TOREADOR_VECTOR3_HPP
