#pragma once
#include "stdafx.h"

template <typename T> T Sqr(const T& t);
template <typename T> std::vector<T> Sqr(const std::vector<T>& vec);
template <typename Key, typename T> std::map<Key,T> Sqr(const std::map<Key,T>& map);
template <typename F, typename S> std::pair<F, S> Sqr(const std::pair<F, S>& p);

template <typename T>
T Sqr(const T& t)
{
	return t*t;
}

template <typename T>
std::vector<T> Sqr(const std::vector<T>& vec)
{
	std::vector<T> vec_square;
	for (auto item:vec)
	{
		vec_square.push_back(Sqr(item));
	}
	return vec_square;
}

template <typename F, typename S>
std::pair<F, S> Sqr(const std::pair<F, S>& p)
{
	std::pair<F, S> p_square;

	p_square.first = Sqr(p.first);
	p_square.second = Sqr(p.second);

	return p_square;
}

template <typename Key, typename T>
std::map<Key, T> Sqr(const std::map<Key, T>& map)
{
	std::map<Key,T> map_square;
	for (auto item : map)
	{
		//map_square[item.first] = item.second*item.second;
		map_square[item.first] = Sqr(item.second);

	}
	return map_square;

}

