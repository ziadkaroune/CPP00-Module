/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkaroune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:58:19 by zkaroune          #+#    #+#             */
/*   Updated: 2024/11/20 16:58:22 by zkaroune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

      std::string contact::_cordo[5] = {
                "FIRST NAME" ,
                "LAST NAME" ,
                "NICK NAME" ,
                "PHONE NUMBER" ,
                "DARKEST SECRET"
            };
   contact::contact()
   {
            this->_idx = 0;
            for (size_t i = 0; i < 5; i++)
            {
                this->_arrStock[i] = std::string();
            }


   }
   contact::~contact(void)
   {

   }

void contact::store_data(std::string str)
{
    if (this->_idx < 5) { // Ensure _idx stays within bounds
       contact::_arrStock[this->_idx++] = str;
    } else {
        std::cerr << "Error: Contact data overflow. Cannot store more than 5 fields." << std::endl;
    }
    return;
}


   void  contact::print_data(int id)
   {

	for (int i = 0; i <= 3; i++)
	{
		std::cout << "|";
		if (this->_arrStock[i].length() > 10)
			std::cout << this->_arrStock[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->_arrStock[i];
	}
	std::cout << "|" << std::endl;
    return;
   }
