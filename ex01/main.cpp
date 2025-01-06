/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkaroune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:58:27 by zkaroune          #+#    #+#             */
/*   Updated: 2024/11/20 16:58:29 by zkaroune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(void)
{
   phonebook phonebook;
   std::string str;
   bool exit;
   exit = false;


 std::cout << "initialisation du programme" << std::endl ;
  phonebook.manual();   
   while(!exit && std::getline(std::cin , str))
   {  
       if(exit)
         break; 
   
      if (std::cin.eof() ==  true || str.compare("EXIT") == 0 )
      {
         str.clear();
         phonebook.exitcomamnd();
         exit = true;
      }
               
     else if( str.compare("ADD")== 0)
         phonebook.add();
   
     else if(str.compare("SEARCH") == 0)
     {
      phonebook.search();
       phonebook.manual();
     }
         

    else{
          phonebook.manual();
         }
     
   }

  
   return 0;

}
