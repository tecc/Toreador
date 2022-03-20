#include <Toreador/Core/Math/Vector4.hpp>
#include <cmath>

toreador::math::Vector4 toreador::math::Vector4::operator+( float scalar ) const
{
    return { this->w + scalar, this->x + scalar, this->y + scalar, this->z + scalar };
}

toreador::math::Vector4 toreador::math::Vector4::operator+( toreador::math::Vector4 vector4 ) const
{
    return { this->w + vector4.w, this->x + vector4.x, this->y + vector4.y, this->z + vector4.z };
}

toreador::math::Vector4 toreador::math::Vector4::operator-( float scalar ) const
{
    return { this->w - scalar, this->x - scalar, this->y - scalar, this->z - scalar };
}

toreador::math::Vector4 toreador::math::Vector4::operator-( toreador::math::Vector4 vector4 ) const
{
    return { this->w - vector4.w, this->x - vector4.x, this->y - vector4.y, this->z - vector4.z };
}

toreador::math::Vector4 toreador::math::Vector4::operator*( float scalar ) const
{
    return { this->w * scalar, this->x * scalar, this->y * scalar, this->z * scalar };
}

toreador::math::Vector4 toreador::math::Vector4::operator*( toreador::math::Vector4 vector4 ) const
{
    return { this->w * vector4.w, this->x * vector4.x, this->y * vector4.y, this->z * vector4.z };
}

toreador::math::Vector4 toreador::math::Vector4::operator/( float scalar ) const
{
    return { this->w / scalar, this->x / scalar, this->y / scalar, this->z / scalar };
}

toreador::math::Vector4 toreador::math::Vector4::operator/( toreador::math::Vector4 vector4 ) const
{
    return { this->w / vector4.w, this->x / vector4.x, this->y / vector4.y, this->z / vector4.z };
}

float toreador::math::Vector4::magnitude() const
{
    return std::sqrt( this->w * this->w + this->x * this->x + this->y * this->y + this->z * this->z );
}

float toreador::math::Vector4::inverseMagnitude() const
{
    return 1 / std::sqrt( this->w * this->w + this->x * this->x + this->y * this->y + this->z * this->z );
}

toreador::math::Vector4 toreador::math::Vector4::normalize() const
{
    float mag = this->magnitude();
    return { this->w / mag, this->x / mag, this->y / mag, this->z / mag };
}
