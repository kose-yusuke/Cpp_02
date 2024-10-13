/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:10:37 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/10/13 23:48:29 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(const Point a, const Point b, const Point c, const Point point);

int main( void ) {
    Point a(1.0f, 2.0f);
    Point b(3.0f, 4.0f);
    Point c(5.0f, 2.0f);
    Point p(3.0f, 3.0f);

    bool isInside = bsp(a, b, c, p);
    std::cout << "Is point inside the triangle? " << (isInside ? "True" : "False") << std::endl;

}
