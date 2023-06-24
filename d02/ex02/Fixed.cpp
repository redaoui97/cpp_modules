/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 17:23:06 by rnabil            #+#    #+#             */
/*   Updated: 2023/06/21 17:59:37 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*Constructors*/

Fixed::Fixed()
{
    this->m_fixedPoint = 0;
}

Fixed::Fixed(const int param)
{
    m_fixedPoint = param << m_fractionalBits;
}

Fixed::Fixed(const float param)
{
    m_fixedPoint = std::roundf(param * (1 << m_fractionalBits));
}

Fixed::Fixed(const Fixed& copy)
{
    this->m_fixedPoint = copy.getRawBits();
}

/*operators overload*/
Fixed& Fixed::operator=(const Fixed& copy)
{
    if (this != &copy)
        this->m_fixedPoint = copy.getRawBits();
    return (*this);
}

/*comparison*/
std::ostream& operator<<(std::ostream& ioput, Fixed const& num)
{
    ioput << num.toFloat();
    return (ioput);
}

bool    Fixed::operator>(const Fixed& param) const
{
    if (this->getRawBits() > param.getRawBits())
        return (true);
    else
        return (false);
           
}

bool    Fixed::operator<(const Fixed& param) const
{
    if (this->getRawBits() < param.getRawBits())
        return (true);
    else
        return (false);
}

bool    Fixed::operator>=(const Fixed& param) const
{
    if (this->getRawBits() >= param.getRawBits())
        return (true);
    else
        return(false);
}

bool    Fixed::operator<=(const Fixed& param) const
{
    if (this->getRawBits() <= param.getRawBits())
        return (true);
    else
        return (false);
}

bool    Fixed::operator==(const Fixed& param) const
{
    if (this->getRawBits() == param.getRawBits())
        return (true);
    else
        return (false);
}

bool    Fixed::operator!=(const Fixed& param) const
{
    if (this->getRawBits() != param.getRawBits())
        return (true);
    else
        return (false);
}

/*arithmetic*/
Fixed   Fixed::operator+(const Fixed& param) const
{
    return Fixed((this->toFloat() + param.toFloat()));    
}

Fixed   Fixed::operator-(const Fixed& param) const
{
    return Fixed((this->toFloat() - param.toFloat()));    
}

Fixed   Fixed::operator/(const Fixed& param) const
{
    return Fixed((this->toFloat() / param.toFloat()));    
}

Fixed   Fixed::operator*(const Fixed& param) const
{
    return Fixed((this->toFloat() * param.toFloat()));    
}

/* post;pre encrement/decrement*/
Fixed&   Fixed::operator++(void)
{
    ++(this->m_fixedPoint);
    return (*this);
}

Fixed   Fixed::operator++(int)
{
    Fixed  tmp(*this);

    (this->m_fixedPoint)++;
    return (tmp);
}

Fixed&   Fixed::operator--(void)
{
    --(this->m_fixedPoint);
    return (*this);
}

Fixed   Fixed::operator--(int)
{
    Fixed  tmp(*this);

    (this->m_fixedPoint)--;
    return (tmp);
}

/*comparison methods*/
Fixed&   Fixed::min(Fixed& num1, Fixed& num2)
{
    if (num1.getRawBits() < num2.getRawBits())
        return (num1);
    else
        return (num2);
}

const Fixed&   Fixed::min(const Fixed& num1, const Fixed& num2)
{
    if (num1.getRawBits() < num2.getRawBits())
        return (num1);
    else
        return (num2);
}

Fixed&   Fixed::max(Fixed& num1, Fixed& num2)
{
    if (num1.getRawBits() > num2.getRawBits())
        return (num1);
    else
        return (num2);
}

const Fixed&   Fixed::max(const Fixed& num1, const Fixed& num2)
{
    if (num1.getRawBits() > num2.getRawBits())
        return (num1);
    else
        return (num2);
}

/*Destructors*/
Fixed::~Fixed()
{

}

/*methods*/
int     Fixed::getRawBits(void) const
{
    return (this->m_fixedPoint);
}

void    Fixed::setRawBits(int const raw)
{
    this->m_fixedPoint = raw;
}

float   Fixed::toFloat() const
{
    float   res;

    res = static_cast<float>(getRawBits()) / (1 << m_fractionalBits);
    return (res);
}

int Fixed::toInt() const
{
    int res;

    res = getRawBits() >> m_fractionalBits;
    return (res);
}