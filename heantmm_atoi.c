                                                            
                            ,**************,.               
                        ,***********************.           
                      ****************************,         
               .... ********************************        
          .,*****************************************       
        ,******/*****/*********//*****///***//********      
       ,,,,***%@%**/&@#*******(@@***(&@&/**/&@/*******      
      ,,,,,,,,%@%**/&@#*******(@@*/&@&/****/&@/*******      
   .,,,,,,,,,,%@%*,/&@#*******(@@%&@#******/&@/*********,   
  .,,,,,,,,,,,%@%*,/&@#,,*****(@@**#@&/****/&@/**********,  
  ,,,,,,,,,,,,%@%*,/&@@&&&&&/*(@@***/%@&(**/&@/***********. 
   ,,,,,,,,,,,***,,**********,*********//***//***********.  
   ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
   ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
     .,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,*****************,.   

#include "libft.h"

int	heantmm_atoi(const char *str)
{
	int n;
	int	s;

	n = 0;
	s = 1;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\r'
			|| *str == '\v' || *str == '\f')
		str++;
	if (*str == '-' && heantmm_isdigit(*(str + 1)))
	{
		s = -1;
		str++;
	}
	else if (*str == '+' && heantmm_isdigit(*(str + 1)))
		str++;
	while (heantmm_isdigit(*str))
	{
		n *= 10;
		n += *str - '0';
		str++;
	}
	return (n * s);
}
