/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:10:50 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/10/13 17:15:52 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
    int value; // 固定小数点数の値
    static const int fractional_bits = 8; // 固定小数点数の小数部のビット数
public:
    Fixed(); // デフォルトコンストラクタ
    Fixed(const Fixed &other); // コピーコンストラクタ
    ~Fixed(); // デストラクタ
    Fixed &operator=(const Fixed &other); // 代入演算子のオーバーロード
    int getRawBits(void) const; // 固定小数点数の生のビットを取得
    void setRawBits(int const raw); // 固定小数点数の生のビットを設定
};

#endif