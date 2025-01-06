/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkaroune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:57:34 by zkaroune          #+#    #+#             */
/*   Updated: 2024/11/20 16:57:39 by zkaroune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
std::string  defaultmssg =  "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
int main(int  argc , char **argv)
{
    if(argc > 1 && argc)
        {
            int i = 1;
            int j ;
            while(i < argc)
            {
                j = 0;
                while(argv[i][j] != '\0')
                {
                    std::cout << (char)toupper(argv[i][j]);
                    j++;
                }
                i++;
                if (argv[i] != NULL)
				std::cout << " ";
            }
          	std::cout << std::endl;
        }
    else
        std::cout << defaultmssg <<std::endl;
    return 0;
}
