#ifndef TOREADOR_MATRIX2X2_HPP
#define TOREADOR_MATRIX2X2_HPP

#include <vector>

namespace toreador {
    namespace math {
        /**
         * A 2x2 Square matrix
         * Members a and b are the top two;
         * Members c and d are the bottom two.
         *
         * Example: <br>
         * <img src=https://cdn.discordapp.com/attachments/953836949385396224/955158990323609661/unknown.png></img>
         */
        struct Matrix2x2 {
            float a;
            float b;

            float c;
            float d;

            Matrix2x2 operator+( float );
            Matrix2x2 operator+( Matrix2x2 );

            Matrix2x2 operator-( float );
            Matrix2x2 operator-( Matrix2x2 );

            Matrix2x2 operator*( float );
            Matrix2x2 operator*( Matrix2x2 );

            Matrix2x2 operator/( float );
            /* Note: You cannot dived a matrix by a matrix */

            Matrix2x2 invert();

            std::vector<float> toArray();

            float determinant();

            float rank();

            float trace();
        };
    }// namespace math
}// namespace toreador

#endif// TOREADOR_MATRIX2X2_HPP
