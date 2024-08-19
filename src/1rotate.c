/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1rotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:55:36 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/08/18 11:33:29 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rb(t_stack **b)
{
	t_stack	*tmp;
	t_stack	*current;

	tmp = *b;  // Stocke le premier élément de la pile b dans tmp
	*b = tmp->next;  // Le deuxième élément devient le nouveau premier
	tmp->next = NULL;  // Déconnecte tmp du reste de la pile
	current = *b;  // Initialise current au nouveau premier élément
	while (current->next)  // Parcourt la pile jusqu'au dernier élément
		current = current->next;
	current->next = tmp;  // Connecte l'ancien premier élément à la fin
	ft_printf("rb\n");  // Affiche l'opération effectuée
}

void	ra(t_stack **a)
{
	t_stack	*tmp;
	t_stack	*current;

	tmp = *a;  // Stocke le premier élément de la pile a dans tmp
	*a = tmp->next;  // Le deuxième élément devient le nouveau premier
	tmp->next = NULL;  // Déconnecte tmp du reste de la pile
	current = *a;  // Initialise current au nouveau premier élément
	while (current->next)  // Parcourt la pile jusqu'au dernier élément
		current = current->next;
	current->next = tmp;  // Connecte l'ancien premier élément à la fin
	ft_printf("ra\n");  // Affiche l'opération effectuée
}
