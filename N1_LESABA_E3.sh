#----------------------------------------------------------------------------------------------------------------#
# Filename        : N1_LESABA_E3.sh                                                                              #
# Author          : John Kenneth S. Lesaba                                                                       #        
# Last Modified   : September 15, 2020                                                                           #
# Description     : Lab Exercise 3 - Shell Control Structures 2                                                  #
# Honor Code      : This is my own program. I have not received any                                              #
#                   unauthorized help in completing this work. I have not           			     #
#                   copied from my classmate, friend, nor any unauthorized      				     #
#                   resource. I am well aware of the policies stipulated              			     #
#                   in the handbook regarding academic dishonesty.                  			     #                   
#                   If proven guilty, I won't be credited any points for                  			     #
#                   this exercise.                                                                               #
#----------------------------------------------------------------------------------------------------------------#
repeat=true
while $repeat
	do
		read -p "Enter a number from 1 to 9: " num
		if [ $num -ge 1 ] && [ $num -le 3 ]; then
			read -p "Enter length: " length
			read -p "Enter width: " width
			answer=`expr $length \* $width`
			echo "Area of the rectangle is: $answer"
		elif [ $num -ge 4 ] && [ $num -le 6 ]; then
			pi=3.1416
			read -p "Enter radius: " radius
			answer=$(echo "scale=3; $pi * ($radius * $radius)" | bc)
			echo "Area of the circle is: $answer"
		elif [ $num -ge 7 ] && [ $num -le 9 ]; then
			read -p "Enter base: " base
			read -p "Enter height: " height
			answer=$(echo "($base * $height) / 2" | bc)
			echo "Area of the triangle is: $answer"
		fi

		read -p "Again[y/n]? " again
		if [ $again == "n" ]; then
			echo "Have a nice day!"
			repeat=false
		fi
	done

