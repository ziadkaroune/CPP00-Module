/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkaroune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:58:50 by zkaroune          #+#    #+#             */
/*   Updated: 2024/11/20 16:58:52 by zkaroune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

phonebook::phonebook(void)
{
    this->_id = 0;   
    this->_limit = false;

    return;
}
phonebook::~phonebook(void) //destructor
{
    return ;
}

void phonebook::isValidInput(std::string title , int id)
{
    std::string str;
    bool check = false; 
    std::cout << "-> Enter Your " << title << std::endl; 
    while(!check)
    {
        std::getline(std::cin , str);
        if(str.empty())
        {
            std::cout << "\033[31mEmpty input doesn't allowed \033[0m\n" << std::endl;
            std::cout << "-> Enter Your " << title << std::endl; 
            continue;
        }
         if(title.compare("Phone Number") == 0)
        {
                    if(std::all_of(str.begin(), str.end(), ::isdigit) )
                        check = true;
                    else
                    {
                        std::cout << "\033[31mReally ?? , Please it's a Phone Number Only Digits\033[0m" << std::endl; 
                        std::cout << "-> Enter Your " << title << std::endl; 
                    }        
        }
            
       else
        check = true;
    }
    this->_stock[id].store_data(str);
   return;
}

void phonebook::add(void)
{
   
    std::string str;
    int id = this->_id  ;
    std::cout << "\033[34m(1) -> Register a New Contact \n(0) -> Return Back\033[0m" << std::endl;
    std::getline(std::cin , str);
        if( str.compare("1") == 0)
        {
            if(id > 7)
            {
                std::cout << "you have passed the limits of contact , if you want to add a contact i will remove the first one " << std::endl;
                for(int i = 1; i < 8 ; i++)
                    this->_stock[i - 1] = this->_stock[i]; 
             id = 7;
             this->_stock[7] = contact();
            }
               
             if(std::cin.eof() ==  false)
            {
               isValidInput("First Name" ,id);
               isValidInput("Last Name" , id);
               isValidInput("Nick Name" , id); 
               isValidInput("Phone Number" ,id);
               isValidInput("Deep secret" , id);
                std::cout << "\033[32m--> Contact added successfully. Your contact ID is: " << id  + 1<< "\n\033[0m" << std::endl;
                manual();
                this->_id++;
              return;
            }
           
        } 

        else if(str.compare("0") == 0)
        {
                str.clear();
                manual();
                return;
        }
        else{
            std::cout << "\033[31mInvalid" << std::endl;
            add();
        }
    return;
  
}

void phonebook::search(void)
{
    std::string str; 
    int index;  
    std::cout << "\033\n[34m-> (1) Seach a Contact By Index    |   --> (0) to Return Back  \033[0m"<<std::endl;
    std::getline(std::cin , str) ;
 
    if(str.compare("1") == 0)
    {
                if(this->_id == 0)
                {
                        std::cout << "\033[1;31mThe PhoneBook is Empty, Add New Contact \n\033[0m" << std::endl;
                         return;
                }
                std::cout << "\033[34m-> enter contact index : \033[0m"<<std::endl;
                 while(std::cin.eof() ==  false)
                 { 
                        std::getline(std::cin , str) ;

                        index = std::atoi(str.c_str()); 

                        if(index == 0)
                                return;
                        else if (index > this->_id)
                        {
                            std::cout << "index non foundable \n" << std::endl;
                            std::cout << "\033[34m-> enter contact index :    | (0) -> return back\033[0m"<<std::endl;
                            continue;
                        }


                        else if(index < 0 || index > 8)
                        {
                            std::cout << "please choose index between 1 and 8 " << std::endl;
                            std::cout << "\033[34m-> enter contact index :    | (0) -> return back\033[0m"<<std::endl;
                            continue;
                        }
                        
                        else if (std::cin.eof() ==  false)
                            {
            std::cout << "|-------------------------------------------|" << std::endl;
			std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
			std::cout << "|----------|----------|----------|----------|" << std::endl;
			 this->_stock[index - 1 ].print_data(index);
			std::cout << "|-------------------------------------------|" << std::endl;
                               
                                return ;
                            }
                        else{
                            std::cout << "\033[31mInvalid" << std::endl;
                        }
            }
           
    }
    else if(str.compare("0") == 0)
        {
                str.clear(); 
                return ;
        }
    else{
          std::cout << "\033[31mInvalid" << std::endl;
          search();
    }    
    return ;
}



void phonebook::exitcomamnd(void)
{
      std::cout << "BY BY SEE YOU SOON :)"<<std::endl;
     return ;
}
void phonebook::manual(void)
{
    std::cout<< "possible instructions : ADD | SEARCH | EXIT"<<std::endl;
    return;
}
