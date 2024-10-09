/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 18:24:40 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/09 19:14:37 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <sstream>

void	open_files(const char *f_name, std::ifstream &in, std::ofstream &out)
{
	std::string file(f_name);

	in.open(file.c_str());
	out.open((file + ".replace").c_str());
	if (!in || !out)
	{
		std::cout << "Couldn't open" << (!in ? " in" : " out") << " file" << std::endl;
		exit(1);
	}
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Usage: ./sed++ file old new" << std::endl;
		return -42;
	}
	std::string			s1(av[2]);
	std::string			s2(av[3]);
	std::ifstream		in;
	std::ofstream		out;
	std::stringstream	content_stream;
	std::string			content_string;
	size_t				match_pos = 0;
	
	open_files(av[1], in, out);
	content_stream << in.rdbuf();
	content_string = content_stream.str();
	while ((match_pos = content_string.find(s1, match_pos)) != std::string::npos)
	{
		content_string.erase(match_pos, s1.length());
		content_string.insert(match_pos, s2);
		match_pos = match_pos + s2.length();
	}
	out << content_string;
	return 0;
}
