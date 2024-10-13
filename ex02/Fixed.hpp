/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:10:50 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/10/13 19:49:28 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
    int value; // 固定小数点数の値
    static const int fractional_bits = 8; // 固定小数点数の小数部のビット数
public:
    // コンストラクタ
    Fixed(); // デフォルトコンストラクタ
    Fixed(const Fixed &other); // コピーコンストラクタ
    Fixed(const int raw); // 整数から固定小数点数に変換するコンストラクタ
    Fixed(const float raw); // 浮動小数点数から固定小数点数に変換するコンストラクタ
    //デストラクタ
    ~Fixed();
    //オーバーロード演算子
    Fixed &operator=(const Fixed &other); // 代入演算子のオーバーロード
    bool operator>(Fixed fixed)const;
    bool operator<(Fixed fixed)const;
    bool operator>=(Fixed fixed)const;
    bool operator<=(Fixed fixed)const;
    bool operator==(Fixed fixed)const;
    bool operator!=(Fixed fixed)const;
    // Arithmetic Operators
    float operator+(Fixed fixed)const;
    float operator-(Fixed fixed)const;
    float operator*(Fixed fixed)const;
    float operator/(Fixed fixed)const;
    Fixed operator++();
    Fixed operator--();
    Fixed operator++(int);
    Fixed operator--(int);
    //Getter Setter
    int getRawBits(void) const; // 固定小数点数の生のビットを取得
    void setRawBits(int const raw); // 固定小数点数の生のビットを設定
    //メンバ関数
    float toFloat( void ) const; // 固定小数点数を浮動小数点数に変換
    int toInt( void ) const; // 固定小数点数を整数に変換
    static Fixed &min(Fixed &first, Fixed &second);
    static const Fixed &min(Fixed const &first, Fixed const &second);
    static Fixed &max(Fixed &first, Fixed &second);
    static const Fixed &max(Fixed const &first, const Fixed &second);
};

std::ostream &operator<<(std::ostream &o, const Fixed &fixed); // 挿入演算子のオーバーロード

#endif