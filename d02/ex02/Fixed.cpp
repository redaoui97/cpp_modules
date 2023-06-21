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
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int param)
{
    m_fixedPoint = param << m_fractionalBits;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float param)
{
    m_fixedPoint = std::roundf(param * (1 << m_fractionalBits));
    std::cout << "Float constructor called" <<std::endl; 
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    this->m_fixedPoint = copy.getRawBits();
}

/*operators overload*/
Fixed& Fixed::operator=(const Fixed& copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &copy)
        this->m_fixedPoint = copy.getRawBits();
    return (*this);
}

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























/*Destructors*/
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
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