#ifndef TOREADOR_VECTOR2_HPP
#define TOREADOR_VECTOR2_HPP


#include <valarray>
namespace toreador {
    namespace math {

        /**
         * Struct for representing a 2-dimensional vector.
         */
        struct Vector2 {
            float x;
            float y;

            /**
             * Constructs a new Vector2, using its x and y components.
             * @param x The x component of the vector
             * @param y The y component of the vector
             */
            inline Vector2( float x, float y ) : x( x ), y( y ) {}
            /**
             * Constructs a new Vector2, using a single constant for both the x and y components.
             * @param c The constant to use as the values for the components
             */
            inline Vector2( float c ) : Vector2(c, c) {};



            /**
             * Creates a new vector where the x and y components are the sum of this vector's x and y components and the scalar value.
             * @param scalar The scalar value to add to the x and y components.
             * @return A new vector where the x and y components are the sum of this vector's x and y components and the scalar value.
             */
            inline Vector2 operator+( float scalar ) const
            {
                return { this->x + scalar, this->y + scalar };
            }
            /**
             * Creates a new vector where the x and y components are the sum of this vector's x and y components and the passed vector's components.
             * @param vec The vector to add to this vector's respective components.
             * @return A new vector where the x and y components are the sum of this vector's x and y components and the passed vector's components.
             */
            inline Vector2 operator+( const Vector2& vec ) const
            {
                return { this->x + vec.x, this->y + vec.y };
            }

            /**
             * Creates a new vector where the x and y components are the difference between this vector's x and y components and the scalar value.
             * @param scalar The scalar value to subtract the x and y components by.
             * @return A new vector where the x and y components are the difference between this vector's x and y components and the scalar value.
             */
            inline Vector2 operator-( float scalar ) const
            {
                // Function is inlined so this is more efficient
                // You'll see a lot of this
                // - K
                return this->operator+( -scalar );
            }
            /**
             * Creates a new vector where the x and y components are the difference between this vector's x and y components and the passed vector's components.
             * @param vec The vector to subtract this vector's components by.
             * @return A new vector where the x and y components are the difference between this vector's x and y components and the passed vector's components.
             */
            inline Vector2 operator-( const Vector2& vec ) const
            {
                return { this->x - vec.x, this->y - vec.y };
            }

            /**
             * Creates a new vector where the x and y components are the product of this vector's x and y components and the scalar value.
             * @param scalar The scalar value to multiply this vector's components by.
             * @return A new vector where the x and y components are the product of this vector's x and y components and the scalar value.
             */
            inline Vector2 operator*( float scalar ) const
            {
                return { this->x * scalar, this->y * scalar };
            }
            /**
             * Creates a new vector where the x and y components are the product of this vector's and the passed vector's x and y components.
             * @param vec The vector to multiply this vector's components by.
             * @return A new vector where the x and y components are the product of this vector's and the passed vector's x and y components.
             */
            inline Vector2 operator*( const Vector2& vec ) const
            {
                return { this->x * vec.x, this->y * vec.y };
            }

            /**
             * Creates a new vector where the x and y components are this vector's x and y components divided by the scalar value.
             * @param scalar The scalar value to divide this vector by (divisor).
             * @return A new vector where the x adn y components are this vector's x and y components divided by the scalar value.
             */
            inline Vector2 operator/( float scalar ) const
            {
                return this->operator*( 1 / scalar );
            }
            /**
             * Creates a new vector where the x and y components are this vector's x and y components divided by the passed vector's x and y components.
             * @param vec The vector to divide this vector by (divisor).
             * @return A new vector where the x adn y components are this vector's x and y components divided by the passed vector's x and y components.
             */
            inline Vector2 operator/( const Vector2& vec ) const
            {
                return { this->x / vec.x, this->y / vec.y };
            }

            /**
             * Computes the magnitude (or length) of this vector.
             * @return The magnitude of this vector.
             */
            [[nodiscard]] inline float magnitude() const
            {
                return std::sqrt( this->x * this->x + this->y * this->y );
            }

            /**
             * Computes the inverse magnitude (or inverse length) of this vector.
             * @return The multiplicative inverse of the magnitude of this vector.
             */
            [[nodiscard]] inline float inverseMagnitude() const
            {
                return 1 / this->magnitude();
            }

            /**
             * Creates a new vector where the x and y components are of the same relative proportions as this vector, but of magnitude 1.
             * The resulting x and y components are this vector's x and y components divided by this vector's magnitude.
             * @return A new vector where the x and y components are of the same relative proportions as this vector, but of magnitude 1.
             */
            [[nodiscard]] inline Vector2 normalize() const
            {
                return this->operator*( this->inverseMagnitude() );
            }

            static Vector2 ZERO;
            static Vector2 UNIT;
        };

    }// namespace math
}// namespace toreador
#endif// TOREADOR_VECTOR2_HPP
