#include <Toreador/Core/Math/Vector2.hpp>
#include <cmath>

toreador::math::Vector2 toreador::math::Vector2::operator+( float scalar ) const
{
    return { this->x + scalar, this->y + scalar };
}

toreador::math::Vector2 toreador::math::Vector2::operator+( toreador::math::Vector2 vec ) const
{
    return { this->x + vec.x, this->y + vec.y };
}

toreador::math::Vector2 toreador::math::Vector2::operator-( float scalar ) const
{
    return { this->x - scalar, this->y - scalar };
}

toreador::math::Vector2 toreador::math::Vector2::operator-( toreador::math::Vector2 vec ) const
{
    return { this->x - vec.x, this->y - vec.y };
}

toreador::math::Vector2 toreador::math::Vector2::operator*( float scalar ) const
{
    return { this->x * scalar, this->y * scalar };
}

toreador::math::Vector2 toreador::math::Vector2::operator*( toreador::math::Vector2 vec ) const
{
    return { this->x * vec.x, this->y * vec.y };
}

toreador::math::Vector2 toreador::math::Vector2::operator/( float scalar ) const
{
    return { this->x / scalar, this->y / scalar };
}

toreador::math::Vector2 toreador::math::Vector2::operator/( toreador::math::Vector2 vec ) const
{
    return { this->x / vec.x, this->y / vec.y };
}

float toreador::math::Vector2::magnitude() const
{
    return std::sqrt( this->x * this->x + this->y * this->y );
}

float toreador::math::Vector2::inverseMagnitude() const
{
    return 1 / std::sqrt( this->x * this->x + this->y * this->y );
}

toreador::math::Vector2 toreador::math::Vector2::normalize() const
{
    float mag = this->magnitude();
    return { this->x / mag, this->y / mag };
}
