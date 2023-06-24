/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 17:22:42 by rnabil            #+#    #+#             */
/*   Updated: 2023/06/21 18:02:25 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int                 m_fixedPoint;
        static const int    m_fractionalBits = 8;
        
    public:
        /*Constructors;Deconstructors*/
        Fixed();
        Fixed(const int param);
        Fixed(const float param);
        Fixed(const Fixed& copy);
        ~Fixed();
        
        /*operators*/
        Fixed& operator=(const Fixed& copy);
        /*comparison*/
        bool    operator>(const Fixed& param) const;
        bool    operator<(const Fixed& param) const;
        bool    operator>=(const Fixed& param) const;
        bool    operator<=(const Fixed& param) const;
        bool    operator==(const Fixed& param) const;
        bool    operator!=(const Fixed& param) const;
        /*arithmetic*/
        Fixed   operator+(const Fixed& param) const;
        Fixed   operator-(const Fixed& param) const;
        Fixed   operator/(const Fixed& param) const;
        Fixed   operator*(const Fixed& param) const;
        /*increments;decrements*/
        Fixed&   operator++(void);
        Fixed    operator++(int);
        Fixed&   operator--(void);
        Fixed    operator--(int);
        /*comparison methods*/
        static Fixed&   min(Fixed& num1, Fixed& num2);
        static const Fixed&   min(const Fixed& num1, const Fixed& num2);
        static Fixed&   max(Fixed& num1, Fixed& num2);
        static const Fixed&   max(const Fixed& num1, const Fixed& num2);
        /*Member functions*/
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
};

std::ostream& operator<<(std::ostream& input, Fixed const& i);
#endif