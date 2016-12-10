/*
*This program initializes publich an private classes: 
*1. getCashBalance, 2. acceptAmount, 
*3. cashRegister and private class cashOnHand;
*/
class cashRegister
{
public:
int getCashBalance() const;
//Function to show the current amount in the cash
//register.
//Postcondition: The value of cashOnHand is returned.
void acceptAmount(int amountIn);
//Function to receive the amount deposited by
//the customer and update the amount in the register.
//Postcondition: cashOnHand = cashOnHand + amountIn;
cashRegister(int cashIn = 500);
//Constructor
//Sets the iniiatal cash in the register to a specific amount.
//Postcondition: cashOnHand = cashIn;
// If no value is specified when the
// object is declared, the default value
// assigned to cashOnHand is $500 dollars.
private:
int cashOnHand; //variable to store the cash
//in the register
};
