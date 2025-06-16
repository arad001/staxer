/**************************************************************************
This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
**************************************************************************/

#include <stdio.h>

int main()
{

    int userinput, amount_of_stacks, remainder;

    printf("How many items do you need: ");
    scanf("%d", &userinput);

    amount_of_stacks = userinput / 64;
    remainder = userinput % 64;

    printf("The number turns out to be %d stacks ", amount_of_stacks);
    if (remainder != 0)
    {
        printf("and %d.", remainder);
    }

    return 0;
}