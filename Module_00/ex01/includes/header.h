/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:11:42 by gd-harco          #+#    #+#             */
/*   Updated: 2023/10/11 15:59:23 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
void	handleInputError();
void	inputWithPrompt(std::string &attribute, const std::string &prompt);

# include <iomanip>
# define BASE_PROMPT "Type ADD to add a contact, SEARCH to search for a contact or EXIT to quit"
# define SEPERATOR "+----------+----------+----------+----------+"

#endif //HEADER_H
