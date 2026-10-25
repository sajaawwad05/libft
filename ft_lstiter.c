#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f) (void*))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst -> content);
		lst = lst -> next;
	}
}
/*void	print_content(void * content)
{
	printf("%s\n", (char *) content);
}
int main()
{
	t_list	*lst1;
	t_list	*lst2;

	lst1 = ft_lstnew("hi");
	lst2 = ft_lstnew("saja");
	lst1->next = lst2;
	ft_lstiter(lst1, print_content);
}*/
