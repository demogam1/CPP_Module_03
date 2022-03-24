/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:05:25 by misaev            #+#    #+#             */
/*   Updated: 2022/03/23 13:18:36 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int main()
{
    ClapTrap toto("Toto");
    toto.attack("titi");
    toto.takeDamage(5);
    toto.takeDamage(1);
    toto.attack("titi");
    toto.beRepaired(10);
    return 1;
}