/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 19:55:55 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/10/13 23:45:25 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0)
{
    
}

Point::Point(const float x, const float y): x(x),  y(y)
{
    
}

Point::Point(const Point &other) : x(other.x), y(other.y) 
{

}

Point &Point::operator=(const Point &other) {
    if (this != &other)
    {
        x = other.x;
        y = other.y;
    }
    return *this;
}

Point::~Point() 
{
    
}

Fixed Point::getX() const {
    return x;
}

Fixed Point::getY() const {
    return y;
}