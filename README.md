# C-CodeWithPatterns
This is a C++ banking system code. The code is made up of various patterns: Abstract factory, State, Strategy.
MDA-EFSM Events:
•	Open() 
•	Login()
•	IncorrectLogin() 
•	IncorectPin(int max) 
•	CorrectPinBelowMin() 
•	CorrectPinAboveMin() 
•	Deposit() 
•	BelowMinBalance() 
•	AboveMinBalance() 
•	Logout() 
•	Balance() 
•	Withdraw() 
•	WithdrawBelowMinBalance() 
•	NoFunds() 
•	Lock() 
•	IncorrectLock() 
•	Unlock()
•	 IncorrectUnlock() 
•	Suspend() 
•	Activate
•	() Close()
MDA-EFSM Meta Actions: 
•	A1: StoreData() // stores data from temporary area in data store 
•	A2: IncorrectIdMsg() // displays incorrect ID message 
•	A3: IncorrectPinMsg() // displays incorrect pin message 
•	A4: TooManyAttemptsMsg() // display too many attempts message 
•	A5: DisplayMenu() // display a menu with a list of transactions 
•	A6: MakeDeposit() // makes deposit (increases balance by a value stored in temp_d in data store) 
•	A7: DisplayBalance() // displays the current value of the balance 
•	A8: PromptForPin() // prompts to enter pin 
•	A9: MakeWithdraw() // makes withdraw (decreases balance by a value stored in temp_w data store) 
•	A10: Penalty() // applies penalty (decreases balance by the amount of penalty) 
•	A11: IncorrectLock Msg() // displays incorrect lock msg 
•	A12: IncorrectUnlock Msg() // displays incorrect unlock msg 
•	A13: NoFundsMsg() // Displays no sufficient funds msg
