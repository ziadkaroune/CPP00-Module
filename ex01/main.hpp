/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkaroune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:58:42 by zkaroune          #+#    #+#             */
/*   Updated: 2024/11/20 16:58:45 by zkaroune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
#   define MAIN_HPP

#include <string>
#include <iomanip>
#include <cstdlib>
#include <iostream> 
#include <algorithm>

#define EXIT_MSSG "BY BY SEE YOU SOON :)"
 

class contact
{
private:
         std::string _arrStock[5];
        int _idx;
       static std::string _cordo[5];
public:
    contact(void);
    ~contact(void);

    void  store_data(std::string str);
    void  print_data(int id);
};
class phonebook
{
private:
         int _id;
        contact _stock[8];
        bool _limit;
public:
    phonebook(void);
    ~phonebook(void);

    void    exitcomamnd(void);
    void    add(void);
    void    search(void);
    void    manual(void);
    void    isValidInput(std::string title , int id);
    void    limitContacts(void);
    void    storeData(void);
};



 



#endif
