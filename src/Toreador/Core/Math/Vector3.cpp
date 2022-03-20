#include <Toreador/Core/Math/Vector3.hpp>
#include <cmath>

toreador::math::Vector3 toreador::math::Vector3::operator+( float scalar ) const
{
    return { this->x + scalar, this->y + scalar, this->z + scalar };
}

toreador::math::Vector3 toreador::math::Vector3::operator+( toreador::math::Vector3 vector3 ) const
{
    return { this->x + vector3.x, this->y + vector3.y, this->z + vector3.z };
}

toreador::math::Vector3 toreador::math::Vector3::operator-( float scalar ) const
{
    return { this->x - scalar, this->y - scalar, this->z - scalar };
}

toreador::math::Vector3 toreador::math::Vector3::operator-( toreador::math::Vector3 vector3 ) const
{
    return { this->x - vector3.x, this->y - vector3.y, this->z - vector3.z };
}

toreador::math::Vector3 toreador::math::Vector3::operator*( float scalar ) const
{
    return { this->x * scalar, this->y * scalar, this->z * scalar };
}

toreador::math::Vector3 toreador::math::Vector3::operator*( toreador::math::Vector3 vector3 ) const
{
    return { this->x * vector3.x, this->y * vector3.y, this->z * vector3.z };
}

toreador::math::Vector3 toreador::math::Vector3::operator/( float scalar ) const
{
    return { this->x / scalar, this->y / scalar, this->z / scalar };
}

toreador::math::Vector3 toreador::math::Vector3::operator/( toreador::math::Vector3 vector3 ) const
{
    return { this->x / vector3.x, this->y / vector3.y, this->z / vector3.z };
}

float toreador::math::Vector3::magnitude() const
{
    return std::sqrt( this->x * this->x + this->y * this->y + this->z * this->z );
}

float toreador::math::Vector3::inverseMagnitude() const
{
    return 1 / std::sqrt( this->x * this->x + this->y * this->y + this->z * this->z );
}

toreador::math::Vector3 toreador::math::Vector3::normalize() const
{
    float mag = this->magnitude();
    return { this->x / mag, this->y / mag, this->z / mag };
}
