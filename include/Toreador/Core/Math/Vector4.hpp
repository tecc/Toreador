#ifndef TOREADOR_VECTOR4_HPP
#define TOREADOR_VECTOR4_HPP

namespace toreador {
    namespace math {
        struct Vector4 {
            float w;
            float x;
            float y;
            float z;

            Vector4 operator+( float ) const;
            Vector4 operator+( Vector4 ) const;

            Vector4 operator-( float ) const;
            Vector4 operator-( Vector4 ) const;

            Vector4 operator*( float ) const;
            Vector4 operator*( Vector4 ) const;

            Vector4 operator/( float ) const;
            Vector4 operator/( Vector4 ) const;

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
            Vector4 normalize() const;
        };

        Vector4 VECTOR4_NULL = { 0.0F, 0.0F, 0.0F, 0.0F };
        Vector4 VECTOR4_UNIT = { 1.0F, 1.0F, 1.0F, 1.0F };

    }// namespace math
}// namespace toreador

#endif// TOREADOR_VECTOR4_HPP
