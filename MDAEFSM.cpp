#include <iostream>
#include <string.h>
#include <typeinfo>

using namespace std;
class Output {
public:
	virtual void StoreData() const
	{
		cout << "....Data Stored...." << endl;
	}//stores data from temporary area in data store
	virtual void IncorrectIdMsg()const
	{
		cout << "Incorrect ID!" << endl;
	}//displays incorrect id message
	virtual void IncorrectPinMessage()const
	{
		cout << "Incorrect PIN!" << endl;
	}//displays incorrect pin message
	virtual void TooManyAttemptsMsg()const
	{
		cout << "Too many attempts!!" << endl;
	}//displays too many attempts message
	virtual void DisplayBalance()const
	{
		cout << "Balance is..." << endl;
	}//displays the current value of the balance
	virtual void PromptForPin()const
	{
		cout << "Please Enter Pin" << endl;
	}//prompts to enter pin
	virtual void Penalty()const
	{
		cout << "Penalty Issued........Amount Deducted" << endl;
	}//applies penalty, decreases balance by amount of penalty
}O2, *out = &O2;
//ABSTRACT FACTORY
/**
 * Each distinct product of a product family should have a base interface. All
 * variants of the product must implement this interface.
 */
class AbstractOutputAccount1 {//account1 class
public:
	virtual ~AbstractOutputAccount1() {}
	virtual void DisplayMenu()const   //displays menu with a list of transactions
	{
		cout << "......Welcome to Account Management......!" << endl;
		cout << "Commands:" << endl;
		cout << " Deposit or  Withdraw	   R" << endl;
		cout << " Enter Pin			       P" << endl;
		cout << " Check Balance            B" << endl;
		cout << " Check Balance            B" << endl;
		cout << " login					   L" << endl;//diplays on state logged out
		cout << " Logout				   O" << endl;//displays on state Logged in
		cout << " Lock					   K" << endl;//displays on state Unlocked
		cout << " Unlock				   U" << endl;//displays on state Locked
		cout << " Exit                     X" << endl;
		cout << " =============================" << endl;
	}
	virtual void IncorrectLockMsg()const { cout << "Incorrect Lock!!" << endl; }//displays incorrect lock message
	virtual void IncorrectUnlockMsg()const
	{
		cout << "Incorrect Unlock!!" << endl;
	}//displays incorrect unlock message

private:

};
/**
 * Here's the the base interface of another product. All products can interact
 * with each other, but proper interaction is possible only between products of
 * the same concrete variant.
 */
class AbstractOutputAccount2 {//account2 class
  /**
   * Account 2 is able to do its own thing...
   */
public:
	virtual ~AbstractOutputAccount2() {};
	/**
	 * The Abstract Factory makes sure that all products it creates are of the
	 * same variant and thus, compatible.
	 */
	virtual void DisplayMenu()const   //displays menu with a list of transactions
	{
		cout << "......Welcome to Account Management......!" << endl;
		cout << "Commands:" << endl;
		cout << " Deposit or  Withdraw	   R" << endl;
		cout << " Enter Pin			       P" << endl;
		cout << " Check Balance            B" << endl;
		cout << " login					   L" << endl;//diplays on state logged out
		cout << " Logout				   O" << endl;//displays on state Logged in
		cout << " Close 				   C" << endl;
		cout << " Exit                     X" << endl;
		cout << " =============================" << endl;
	}
	virtual void NoFundsMsg()const
	{
		cout << "No Sufficient Funds!!" << endl;
	}//displays no sufficient funds message
};

/**
 * Concrete Products are created by corresponding Concrete Factories.
 */
class ConcreteAccount1 : public AbstractOutputAccount1 {//
public:
	virtual void DisplayMenu()const override//displays menu with a list of transactions
	{
		cout << "......Welcome to Account Management......!" << endl;
		cout << "Commands:" << endl;
		cout << " Deposit or  Withdraw	   R" << endl;
		cout << " Enter Pin			       P" << endl;
		cout << " Check Balance            B" << endl;
		cout << " login					   L" << endl;//diplays on state logged out
		cout << " Logout				   O" << endl;//displays on state Logged in
		cout << " Lock					   K" << endl;//displays on state Unlocked
		cout << " Unlock				   U" << endl;//displays on state Locked
		cout << " Exit                     X" << endl;
		cout << " =============================" << endl;
	}
	virtual void IncorrectLockMsg()const override { cout << "Incorrect Lock!!" << endl; }//displays incorrect lock message
	virtual void IncorrectUnlockMsg()const override
	{
		cout << "Incorrect Unlock!!" << endl;
	}//displays incorrect unlock message
};


/**
 * Concrete Products are created by corresponding Concrete Factories.
 */
class ConcreteAccount2 : public AbstractOutputAccount2 {
public:
	/**
	 * The variant, Product B1, is only able to work correctly with the variant,
	 * Product A1. Nevertheless, it accepts any instance of AbstractAccount1 as an
	 * argument.
	 */
	virtual void DisplayMenu()const override//displays menu with a list of transactions
	{
		cout << "......Welcome to Account Management......!" << endl;
		cout << "Commands:" << endl;
		cout << " Deposit or  Withdraw	   R" << endl;
		cout << " Enter Pin			       P" << endl;
		cout << " Check Balance            B" << endl;
		cout << " login					   L" << endl;//diplays on state logged out
		cout << " Logout				   O" << endl;//displays on state Logged in
		cout << " Suspend				   S" << endl;
		cout << " Activate				   A" << endl;
		cout << " Close 				   C" << endl;
		cout << " Exit                     X" << endl;
		cout << " =============================" << endl;
	}
	virtual void NoFundsMsg()const override
	{
		cout << "No Sufficient Funds!!" << endl;
	}//displays no sufficient funds message
};



/**
 * The Abstract Factory interface declares a set of methods that return
 * different abstract products. These products are called a family and are
 * related by a high-level theme or concept. Products of one family are usually
 * able to collaborate among themselves. A family of products may have several
 * variants, but the products of one variant are incompatible with products of
 * another.
 */
class AbstractFactory {
public:
	virtual AbstractOutputAccount1 *CreateAccount1() const = 0;
	virtual AbstractOutputAccount2 *CreateAccount2() const = 0;
};

/**
 * Concrete Factories produce a family of products that belong to a single
 * variant. The factory guarantees that resulting products are compatible. Note
 * that signatures of the Concrete Factory's methods return an abstract product,
 * while inside the method a concrete product is instantiated.
 */
class ConcreteFactory : public AbstractFactory {
public:
	AbstractOutputAccount1 *CreateAccount1() const override {
		return new ConcreteAccount1();
	}
	AbstractOutputAccount2 *CreateAccount2() const override {
		return new ConcreteAccount2();
	}
};


//account 1 starts here
class DataStore
{
public:
	int temp_p, temp_y, temp_a, temp_d, temp_w;
	int pin, balance, id;
	DataStore() { temp_p = 0; temp_y = 0; temp_a = 0; temp_d = 0; temp_w = 0;}
	//~DataStore();

private:

}dt, *ds = &dt;
class MDAEFSM
{
	
public:
	ConcreteFactory *f1A = new ConcreteFactory();
	const AbstractOutputAccount1 *account_a2 = f1A->CreateAccount1();
	MDAEFSM()//constructor
	{
		Open();
	}
	void Deposit()   //depositing an amount
	{
		ds->balance = ds->balance  + ds->temp_d;
	}
	void Withdraw()  //withdrawing an amount
	{
		if (ds->temp_w < ds->balance && (ds->balance - ds->temp_w) < 100)
		{
			char choice;
			cout << "\n Would You Like To Withdraw Below the Minimum Balance:"
				<< endl << "Enter 'Y' or 'y' to accept . Enter any other key to cancel"
				<< endl;
			cin >> choice;
			if (choice == 'Y' || choice == 'y')
			{
				WithdrawBelowMinBalance();
			}
			else
			{
				cout << "Withdrawal Stopped!!" << endl;
			}
		}
		else if (ds->temp_w < ds->balance)
			ds->balance = ds->balance - ds->temp_w;
		else
			cout << "Withdrawal Ammount Is Too High" << endl;
	}
	void Balance()  //displaying the details
	{
		cout << ds->balance;
	}
	void Open()
	{
		out->StoreData();
		ds->pin = ds->temp_p;
		ds->id = ds->temp_y;
		ds->balance = ds->temp_a;
	}
	void CorrectPinAboveMin()
	{
		cout << "Correct Pin. The Account Balance is Above Minimum" << endl;
	}
	void CorrectPinBelowMin()
	{
		cout << "Correct Pin. The Account Balance is Below Minimum" << endl;
	}
	void IncorrectPin(int x)
	{
		int iterations;
		for (iterations = 0; iterations < x;)
		{
			cout << "Enter Pin Again..:" << (x - (iterations + 1)) << " Attempts Remaining!" << endl;
			int p;
			cin >> p;
			if (p == ds->pin)
			{
				break;
			}
			else if (p != ds->pin)
			{
				iterations++;
			}
			//call pin prompt
			out->PromptForPin();
		}
	}
	void WithdrawBelowMinBalance()
	{
		if (ds->temp_w > ds->balance)
			cout << "\n Cannot Withdraw Amount. Balance Too Little";
		else
			ds->balance -= ds->temp_w;

	}
	void AboveMinBalance()
	{
		cout << "The Account Balance is Above Minimum" << endl;
	}
	void BelowMinBalance()
	{
		cout << "The Account Balance is Below Minimum" << endl;
		out->Penalty();
		int x = 50;
		ds->balance -= x;
		ds->temp_a -= x;
		cout << x << " Deducted" << endl;
	}
	void Login()
	{
		if (ds->temp_p == ds->pin && ds->temp_y == ds->id)
		{
			cout << "...Currently Logged In..." << endl;
		}
		else { IncorrectLogin(); }
	}
	void IncorrectLogin()
	{
		//call incorrect login message function
		out->IncorrectIdMsg();
	}
	void Logout()
	{//incomplete
		ds->temp_y = 0;
		cout << "...Currently Logged Out..." << endl;
	}
	void Lock()
	{
		//incomplete
		ds->temp_p = 0;
		if (ds->temp_p != ds->pin)
		{
			cout << "...Currently Locked out..." << endl;
		}
		else { IncorrectLock(); }
	}
	void IncorrectLock()
	{
		//call incorrect lock message
		account_a2->IncorrectLockMsg();
	}
	void Unlock()
	{
		cout << "...Account Unlocked..." << endl;
		ds->temp_p = ds->pin;
	}
	void IncorrectUnlock()
	{
		//call incorrect unlock message
		account_a2->IncorrectUnlockMsg();
	}
private:

}*m;


void open(int p, int y, int a)
{
	ds->temp_p = p;
	ds->temp_y = y;
	ds->temp_a = a;
	m->Open();
}
void pin(int x)
{
	if (x == ds->pin)
	{
		if (ds->balance > 100)
		{
			m->CorrectPinAboveMin();
		}
		else
		{
			m->CorrectPinBelowMin();
		}
	}
	else
	{
		m->IncorrectPin(1);
	}
}

void deposit(int d)
{
	ds->temp_d = d;
	m->Deposit();
	if (ds->balance > 100)
	{
		m->AboveMinBalance();
	}
	else
	{
		m->BelowMinBalance();
	}
}

void withdraw(int w)
{
	ds->temp_w = w;
	m->Withdraw();
	if (ds->balance > 100)
	{
		m->AboveMinBalance();
	}
	else
	{
		m->WithdrawBelowMinBalance();
	}
}

void balance()
{
	m->Balance();
}

class Context1;

class State1 {
	/**
	 * @var Context
	 */
protected:
	Context1 *context_;

public:
	virtual ~State1() {
	}

	void set_context1(Context1 *context) {
		this->context_ = context;
	}

	virtual void Handle1() = 0;//state specific methods
	virtual void Handle2() = 0;
};

/**
 * The Context defines the interface of interest to clients. It also maintains a
 * reference to an instance of a State subclass, which represents the current
 * state of the Context.
 */
class Context1 {
	/**
	 * @var State A reference to the current state of the Context.
	 */
private:
	State1 *state1_;//change the variable to lock, unlock, login, logout

public:
	Context1(State1 *state) : state1_(nullptr) {
		this->TransitionTo(state);
	}
	~Context1() {
		delete state1_;
	}
	/**
	 * The Context allows changing the State object at runtime.
	 */
	void TransitionTo(State1 *state) {//change state of lock, unlock, login, logout
		std::cout << "Transition to " << typeid(*state).name() << ".\n";
		if (this->state1_ != nullptr)
			delete this->state1_;
		this->state1_ = state;
		this->state1_->set_context1(this);
	}
	/**
	 * The Context delegates part of its behavior to the current State object.
	 */
	void loginRequest() {//request specific methods
		this->state1_->Handle1();
	}
	void logoutRequest() {
		this->state1_->Handle2();
	}
};

/**
 * Concrete States implement various behaviors, associated with a state of the
 * Context.
 */
 //using state pattern for the Account 1 functions below
class Login : public State1 {
public:
	void Handle1() override;

	void Handle2() override {
		std::cout << "Login handles logoutRequest.\n";
	}
};

class Logout : public State1 {
public:
	void Handle1() override {
		std::cout << "Logout handles loginRequest.\n";
	}
	void Handle2() override {
		m->Logout();
		std::cout << "Logged out. Can now login\n";
		this->context_->TransitionTo(new Login);
	}
};

void Login::Handle1() {
	int y;
	cout << "Enter Account ID" << endl;
	cin >> y;
	if (y == ds->temp_y)
	{
		m->Login();
		std::cout << "Logged in. can now logout.\n";
		this->context_->TransitionTo(new Logout);
	}
	else
	{
		m->IncorrectLogin();
	}
}

/**
 * The client code.
 */

class Context1B;

class State1B {
	/**
	 * @var Context
	 */
protected:
	Context1B *context_;

public:
	virtual ~State1B() {
	}

	void set_context1B(Context1B *context) {
		this->context_ = context;
	}

	virtual void Handle1() = 0;//state specific methods
	virtual void Handle2() = 0;
};

/**
 * The Context defines the interface of interest to clients. It also maintains a
 * reference to an instance of a State subclass, which represents the current
 * state of the Context.
 */
class Context1B {
	/**
	 * @var State A reference to the current state of the Context.
	 */
private:
	State1B *state1B_;//change the variable to lock, unlock, login, logout

public:
	Context1B(State1B *state) : state1B_(nullptr) {
		this->TransitionTo(state);
	}
	~Context1B() {
		delete state1B_;
	}
	/**
	 * The Context allows changing the State object at runtime.
	 */
	void TransitionTo(State1B *state) {//change state of lock, unlock, login, logout
		std::cout << "Transition to " << typeid(*state).name() << ".\n";
		if (this->state1B_ != nullptr)
			delete this->state1B_;
		this->state1B_ = state;
		this->state1B_->set_context1B(this);
	}
	/**
	 * The Context delegates part of its behavior to the current State object.
	 */
	void lockRequest() {//request specific methods
		this->state1B_->Handle1();
	}
	void unlockRequest() {
		this->state1B_->Handle2();
	}
};

/**
 * Concrete States implement various behaviors, associated with a state of the
 * Context.
 */
 //using state pattern for the Account 1 functions below
class Lock : public State1B {
public:
	void Handle1() override;

	void Handle2() override {
		std::cout << "Lock handles unlockRequest.\n";
	}
};

class Unlock : public State1B {
public:
	void Handle1() override {
		std::cout << "Unlock handles lockRequest.\n";
	}
	void Handle2() override {
		int x;
		cout << "Enter Pin To Unlock..." << endl;
		cin >> x;
		if (x == ds->pin)
		{
			m->Unlock();
			std::cout << "Unclocked!. Can now lock\n";
			this->context_->TransitionTo(new Lock);
			if (ds->balance > 100) { m->AboveMinBalance(); }
			else { m->BelowMinBalance(); }
		}
		else m->IncorrectUnlock();
	}
};

void Lock::Handle1() {
	int p;
	cout << "Enter Pin To Lock..." << endl;
	cin >> p;
	if (ds->temp_p == p)
	{
		m->Lock();
	}
	else
		m->IncorrectLock();
}

//STATE pattern for account 1 ends here

//ACCOUNT2 begins here

class DataStore2
{
public:
	//DataStore2();
	int temp_p, temp_y, temp_a;
	float temp_w, temp_d;
	int pin, balance, id;
	//~DataStore2();

private:

}dt2, *ds2 = &dt2;
class MDAEFSM2
{
public:
	ConcreteFactory *f1B = new ConcreteFactory();
	const AbstractOutputAccount2 *account_b2 = f1B->CreateAccount2();
	MDAEFSM2()//constructor
	{
		Open();
	}
	void Deposit()   //depositing an amount
	{
		ds2->balance = +ds2->temp_d;
	}
	void Withdraw()  //withdrawing an amount
	{
		if (ds2->temp_w < ds2->balance && ds2->balance < 100)
		{
			char choice;
			cout << "\n Would You Like To Withdraw Below the Minimum Balance:"
				<< endl << "Enter 'Y' or 'y' to accept . Enter any other key to cancel"
				<< endl;
			cin >> choice;
			if (choice == 'Y' || choice == 'y')
			{
				WithdrawBelowMinBalance();
			}
			else
			{
				cout << "Withdrawal Stopped!!" << endl;
			}
		}
		else
			ds2->balance -= ds2->temp_w;
	}
	void Balance()  //displaying the details
	{
		cout << ds2->balance;
	}
	void Open()
	{
		out->StoreData();
		ds2->pin = ds2->temp_p;
		ds2->id = ds2->temp_y;
		ds2->balance = ds2->temp_a;
	}
	void CorrectPinAboveMin()
	{
		cout << "Correct Pin. The Account Balance is Above Minimum" << endl;
	}
	void IncorrectPin(int x)
	{
		out->IncorrectPinMessage();
		int iterations;
		for (iterations = 0; iterations < x;)
		{
			cout << "Enter Pin Again..:" << (x - (iterations + 1)) << " Attempts Remaining!" << endl;
			int p;
			cin >> p;
			if (p == ds2->pin) 
			{
				break;
			}
			else if (p != ds2->pin) 
			{
				iterations++;
			}
			//call pin prompt
			out->PromptForPin();
		}
	}
	void WithdrawBelowMinBalance()
	{
		if (ds2->temp_w > ds2->balance)
			cout << "\n Cannot Withdraw Amount. Balance Too Little";
		else
		{
			ds2->balance -= ds2->temp_w;
			out->Penalty();
			int x = 100;
			ds2->balance -= x;
			ds2->temp_a -= x;
			cout << x << " Deducted" << endl;
		}

	}
	void AboveMinBalance()
	{
		cout << "The Account Balance is Above Minimum" << endl;
	}
	void Login()
	{
		if (ds2->temp_y == ds2->id)
		{
			cout << "...Currently Logged In..." << endl;
		}
		else { IncorrectLogin(); }
	}
	void IncorrectLogin()
	{
		//call incorrect login message function
		out->IncorrectIdMsg();
	}
	void Logout()
	{//incomplete
		ds2->temp_y = 0;
		cout << "...Currently Logged Out..." << endl;
	}
	void NoFunds()
	{
		//call no funds message
		account_b2->NoFundsMsg();
	}
	void Suspend()
	{
		cout << "Account Suspended!!" << endl;
	}
	void Activate()
	{
		cout << "Account Activated!!" << endl;
	}
	void Close()
	{
		//close account
		cout << "Account Closed" << endl;
		delete ds2;
	}
private:

}*m2;

void PIN(int x)
{
	if (x == ds2->pin)
	{
		m2->CorrectPinAboveMin();
	}
	else
	{
		m2->IncorrectPin(2);
	}
}

void DEPOSIT(float d)
{
	ds2->temp_d = d;
	m2->Deposit();
	if (ds2->temp_a < 100)
	{
		m2->Suspend();
	}
	else
	{
		m2->Activate();
	}
}

void WITHDRAW(float w)
{
	ds2->temp_w = w;
	if (ds2->balance > 100)
	{
		m2->Withdraw();
		m2->AboveMinBalance();
	}
	else
	{
		m2->NoFunds();
		m2->Suspend();
	}
}

void BALANCE()
{
	m2->Balance();
}

//STATE PATTERN for account 2 STARTS HERE
class Context2;

class State2 {
	/**
	 * @var Context
	 */
protected:
	Context2 *context2_;

public:
	virtual ~State2() {
	}

	void set_context2(Context2 *context) {
		this->context2_ = context;
	}

	virtual void Handle1() = 0;//state specific methods
	virtual void Handle2() = 0;
};

/**
 * The Context defines the interface of interest to clients. It also maintains a
 * reference to an instance of a State subclass, which represents the current
 * state of the Context.
 */
class Context2 {
	/**
	 * @var State A reference to the current state of the Context.
	 */
private:
	State2 *state1_;//change the variable to lock, unlock, login, logout

public:
	Context2(State2 *state) : state1_(nullptr) {
		this->TransitionTo(state);
	}
	~Context2() {
		delete state1_;
	}
	/**
	 * The Context allows changing the State object at runtime.
	 */
	void TransitionTo(State2 *state) {//change state of lock, unlock, login, logout
		std::cout << "Transition to " << typeid(*state).name() << ".\n";
		if (this->state1_ != nullptr)
			delete this->state1_;
		this->state1_ = state;
		this->state1_->set_context2(this);
	}
	/**
	 * The Context delegates part of its behavior to the current State object.
	 */
	void LOGINRequest() {//request specific methods
		this->state1_->Handle1();
	}
	void LOGOUTRequest() {
		this->state1_->Handle2();
	}
};

/**
 * Concrete States implement various behaviors, associated with a state of the
 * Context.
 */
 //using state pattern for the Account 1 functions below
class LOGIN : public State2 {
public:
	void Handle1() override;

	void Handle2() override {
		std::cout << "Login handles LOGOUTRequest.\n";
	}
};

class LOGOUT : public State2 {
public:
	void Handle1() override {
		std::cout << "Logout handles LOGINRequest.\n";
	}
	void Handle2() override {
		m2->Logout();
		std::cout << "Logged out. Can now login\n";
		this->context2_->TransitionTo(new LOGIN);
	}
};

void LOGIN::Handle1() {
	cout << "Enter User ID ... " << endl;
	int y;
	cin >> y;
	if (y == ds2->id)
	{
		m2->Login();
		std::cout << "Logged in. can now logout.\n";
		this->context2_->TransitionTo(new LOGOUT);
	}
	else
	{
		m2->IncorrectLogin();
	}
}

class Context2B;

class State2B {
	/**
	 * @var Context
	 */
protected:
	Context2B *context2B_;

public:
	virtual ~State2B() {
	}

	void set_context2B(Context2B *context) {
		this->context2B_ = context;
	}

	virtual void Handle1() = 0;//state specific methods
	virtual void Handle2() = 0;
};

/**
 * The Context defines the interface of interest to clients. It also maintains a
 * reference to an instance of a State subclass, which represents the current
 * state of the Context.
 */
class Context2B {
	/**
	 * @var State A reference to the current state of the Context.
	 */
private:
	State2B *state1_;//change the variable to lock, unlock, login, logout

public:
	Context2B(State2B *state) : state1_(nullptr) {
		this->TransitionTo(state);
	}
	~Context2B() {
		delete state1_;
	}
	/**
	 * The Context allows changing the State object at runtime.
	 */
	void TransitionTo(State2B *state) {//change state of lock, unlock, login, logout
		std::cout << "Transition to " << typeid(*state).name() << ".\n";
		if (this->state1_ != nullptr)
			delete this->state1_;
		this->state1_ = state;
		this->state1_->set_context2B(this);
	}
	/**
	 * The Context delegates part of its behavior to the current State object.
	 */
	void activateRequest() {//request specific methods
		this->state1_->Handle1();
	}
	void suspendRequest() {
		this->state1_->Handle2();
	}
};

/**
 * Concrete States implement various behaviors, associated with a state of the
 * Context.
 */
 //using state pattern for the Account 1 functions below
class activate : public State2B {
public:
	void Handle1() override;

	void Handle2() override {
		std::cout << "activate handles activateRequest.\n";
	}
};

class suspend : public State2B {
public:
	void Handle1() override {
		std::cout << "suspend handles activateRequest.\n";
	}
	void Handle2() override {
		m2->Suspend();
		std::cout << "suspended. Can now activate\n";
		this->context2B_->TransitionTo(new activate);
	}
};

void activate::Handle1() {
	m2->Activate();
	std::cout << "activated.\n";
	this->context2B_->TransitionTo(new suspend);
}

class Context2C;

class State2C {
	/**
	 * @var Context
	 */
protected:
	Context2C *context2C_;

public:
	virtual ~State2C() {
	}

	void set_context2C(Context2C *context) {
		this->context2C_ = context;
	}

	virtual void Handle1() = 0;//state specific methods
	virtual void Handle2() = 0;
};

/**
 * The Context defines the interface of interest to clients. It also maintains a
 * reference to an instance of a State subclass, which represents the current
 * state of the Context.
 */
class Context2C {
	/**
	 * @var State A reference to the current state of the Context.
	 */
private:
	State2C *state2C_;//change the variable to lock, unlock, login, logout

public:
	Context2C(State2C *state) : state2C_(nullptr) {
		this->TransitionTo(state);
	}
	~Context2C() {
		delete state2C_;
	}
	/**
	 * The Context allows changing the State object at runtime.
	 */
	void TransitionTo(State2C *state) {//change state of lock, unlock, login, logout
		std::cout << "Transition to " << typeid(*state).name() << ".\n";
		if (this->state2C_ != nullptr)
			delete this->state2C_;
		this->state2C_ = state;
		this->state2C_->set_context2C(this);
	}
	/**
	 * The Context delegates part of its behavior to the current State object.
	 */
	void OPENRequest() {//request specific methods
		this->state2C_->Handle1();
	}
	void CLOSERequest() {
		this->state2C_->Handle2();
	}
};

/**
 * Concrete States implement various behaviors, associated with a state of the
 * Context.
 */
 //using state pattern for the Account 1 functions below
class OPEN : public State2C {
public:
	void Handle1() override;

	void Handle2() override {
		std::cout << "open handles closeRequest.\n";
	}
};

class CLOSE : public State2C {
public:
	void Handle1() override {
		std::cout << "close handles openRequest.\n";
	}
	void Handle2() override {
		m2->Close();
		std::cout << "Closed. Can now open\n";
		this->context2C_->TransitionTo(new OPEN);
	}
};

void OPEN::Handle1() {
	int p, y, a;
	cout << "Enter pin..." << endl;
	cin >> p;
	cout << "Enter User ID..." << endl;
	cin >> y;
	cout << "Enter Balance..." << endl;
	cin >> a;
	ds2->temp_p = p;
	ds2->temp_y = y;
	ds2->temp_a = a;
	m2->Open();
	std::cout << "open. can now close.\n";
	this->context2C_->TransitionTo(new CLOSE);
}

//STATE pattern for account 2 ends here


//STRATEGY pattern for account 1 starts here
/**
 * The Strategy interface declares operations common to all supported versions
 * of some algorithm.
 *
 * The Context uses this interface to call the algorithm defined by Concrete
 * Strategies.
 */
class Strategy1
{
public:
	virtual ~Strategy1() {}
	//functions here
	virtual void MakeDeposit() const
	{
		
	}//makes deposit by increasing balance by a value stored in temp_d in data store
	virtual void MakeWithdraw() const
	{
		
	}//makes withdrawal, decreases balance by a value stored in temp_w data store
};

/**
 * The Context defines the interface of interest to clients.
 */

class Context//declaring strategy interface
{
	/**
	 * @var Strategy The Context maintains a reference to one of the Strategy
	 * objects. The Context does not know the concrete class of a strategy. It
	 * should work with all strategies via the Strategy interface.
	 */
private:
	Strategy1 *strategy1_;
	/**
	 * Usually, the Context accepts a strategy through the constructor, but also
	 * provides a setter to change it at runtime.
	 */
public:
	Context(Strategy1 *strategy = nullptr) : strategy1_(strategy)
	{
	}
	~Context()
	{
		delete this->strategy1_;
	}
	/**
	 * Usually, the Context allows replacing a Strategy object at runtime.
	 */
	void set_strategy(Strategy1 *strategy)//setter to replace values of the field
	{
		delete this->strategy1_;
		this->strategy1_ = strategy;//field for storing a reference to a strategy object in context class
	}
	/**
	 * The Context delegates some work to the Strategy object instead of
	 * implementing +multiple versions of the algorithm on its own.
	 */
	void DoSomeBusinessLogic1() const
	{
		// ...
		this->strategy1_->MakeDeposit();
		// ...
	}
	void DoSomeBusinessLogic2() const
	{
		// ...
		this->strategy1_->MakeWithdraw();
		// ...
	}
};

/**
 * Concrete Strategies implement the algorithm while following the base Strategy
 * interface. The interface makes them interchangeable in the Context.
 */

class ConcreteStrategyB : public Strategy1
{
	virtual void MakeDeposit() const override
	{
		cout << "\n Enter Deposit Amount = ";
		int d;
		cin >> d;
		deposit(d);
	}
};
class ConcreteStrategyC : public Strategy1//extracting all algorithms into their own classes and implementing the strategy interface
{
public:
	virtual void MakeWithdraw() const override
	{
		cout << "\n Enter Withdrawal Amount = ";
		int w;
		cin >> w;
		withdraw(w);
	}
};

/**
 * The client code picks a concrete strategy and passes it to the context. The
 * client should be aware of the differences between strategies in order to make
 * the right choice.
 */

void Deposit_Withdraw1()
{
	Context *context = new Context(new ConcreteStrategyB);//associating with suitable strategy to match job
	char input;
	cout << "......Deposit or Withdraw......!" << endl;
	cout << "Commands:" << endl;
	cout << " Deposit				   D" << endl;
	cout << " Withdraw			       W" << endl;
	cin >> input;
	switch (input)
	{
	case 'D':
		cout << "Deposit........" << endl;
		context->set_strategy(new ConcreteStrategyB);
		context->DoSomeBusinessLogic1();
		break;
	case 'W':
		cout << "Withdraw......." << endl;
		context->set_strategy(new ConcreteStrategyC);
		context->DoSomeBusinessLogic2();
		break;
	default:
		cout << "Invalid Character!" << endl;
	}
	delete context;
}


//STRATEGY for account 2 functions
/**
 * The Strategy interface declares operations common to all supported versions
 * of some algorithm.
 *
 * The Context uses this interface to call the algorithm defined by Concrete
 * Strategies.
 */
class Strategy2
{
public:
	virtual ~Strategy2() {}
	//functions here
	virtual void MakeDeposit() const
	{
		cout << "\n Enter Deposit Amount = ";
		float d;
		cin >> d;
		DEPOSIT(d);
	}//makes deposit by increasing balance by a value stored in temp_d in data store
	virtual void MakeWithdraw() const
	{
		cout << "\n Enter Withdraw Amount = ";
		float w;
		cin >> w;
		WITHDRAW(w);
	}//makes withdrawal, decreases balance by a value stored in temp_w data store
};

/**
 * The Context defines the interface of interest to clients.
 */

class ContextInterface2//declaring strategy interface
{
	/**
	 * @var Strategy The Context maintains a reference to one of the Strategy
	 * objects. The Context does not know the concrete class of a strategy. It
	 * should work with all strategies via the Strategy interface.
	 */
private:
	Strategy2 *strategy2_;
	/**
	 * Usually, the Context accepts a strategy through the constructor, but also
	 * provides a setter to change it at runtime.
	 */
public:
	ContextInterface2(Strategy2 *strategy = nullptr) : strategy2_(strategy)
	{
	}
	~ContextInterface2()
	{
		delete this->strategy2_;
	}
	/**
	 * Usually, the Context allows replacing a Strategy object at runtime.
	 */
	void set_strategy(Strategy2 *strategy)//setter to replace values of the field
	{
		delete this->strategy2_;
		this->strategy2_ = strategy;//field for storing a reference to a strategy object in context class
	}
	/**
	 * The Context delegates some work to the Strategy object instead of
	 * implementing +multiple versions of the algorithm on its own.
	 */
	void DoSomeBusinessLogic1() const
	{
		// ...
		this->strategy2_->MakeDeposit();
		// ...
	}
	void DoSomeBusinessLogic2() const
	{
		// ...
		this->strategy2_->MakeWithdraw();
		// ...
	}
};

/**
 * Concrete Strategies implement the algorithm while following the base Strategy
 * interface. The interface makes them interchangeable in the Context.
 */

class ConcreteStrategyA : public Strategy2
{
	virtual void MakeDeposit() const
	{
		cout << "\n Enter Deposit Amount = ";
		float d;
		cin >> d;
		DEPOSIT(d);
	}
};
class ConcreteStrategyD : public Strategy2//extracting all algorithms into their own classes and implementing the strategy interface
{
public:
	virtual void MakeWithdraw() const
	{
		cout << "\n Enter Withdraw Amount = ";
		float w;
		cin >> w;
		WITHDRAW(w);
	}
};

/**
 * The client code picks a concrete strategy and passes it to the context. The
 * client should be aware of the differences between strategies in order to make
 * the right choice.
 */

void Deposit_Withdraw2()
{
	ContextInterface2 *context = new ContextInterface2(new ConcreteStrategyA);//associating with suitable strategy to match job
	char input;
	cout << "......Deposit or Withdraw......!" << endl;
	cout << "Commands:" << endl;
	cout << " Deposit				   D" << endl;
	cout << " Withdraw			       W" << endl;
	cin >> input;
	switch (input)
	{
	case 'D':
		cout << "Deposit........" << endl;
		context->set_strategy(new ConcreteStrategyA);
		context->DoSomeBusinessLogic1();
		//break;
	case 'W':
		cout << "Withdraw......." << endl;
		context->set_strategy(new ConcreteStrategyD);
		context->DoSomeBusinessLogic2();
		//break;
	default:
		cout << "Invalid Character!" << endl;
	}
	delete context;
}
//STRATEGY ends here

/**
 * Each Concrete Factory has a corresponding product variant.
 */

int main()
{
	//implementation 
	int accountChoice;
	bool check = true;
	char menuChoice;
	cout << "Start Accout Management" << endl << "Choose Account: Enter 1 for Account 1, Enter 2 for Account 2!" << endl;
	cin >> accountChoice;
	//start accounts
	/**
	* The client code works with factories and products only through abstract
	* types: AbstractFactory and AbstractProduct. This lets you pass any factory or
	* product subclass to the client code without breaking it.
	*/
	ConcreteFactory *f1 = new ConcreteFactory();
	if (accountChoice == 1)
	{
		int p, y, a;
		cout << "Enter pin..." << endl;
		cin >> p;
		cout << "Enter User ID..." << endl;
		cin >> y;
		cout << "Enter Balance..." << endl;
		cin >> a;
		open(p, y, a);
		Context1 *objLog = new Context1(new Login);
		Context1B *objLock = new Context1B(new Lock);
		const AbstractOutputAccount1 *account_a = f1->CreateAccount1();
		account_a->DisplayMenu();
		reLogIn:
		cout <<".....Account can only...Login and Exit...."<<endl;
		cin >> menuChoice;
		switch (menuChoice)
		{
		case 'L'://check opeartion
			//login
			objLog->loginRequest();
			AfterUnlock:
			out->PromptForPin();
			int p2;
			cin >> p2;
			pin(p2);
			cout << "Deposit Withdrawal and Balance Check Now Allowed" << endl;
			while (check) 
			{
				account_a->DisplayMenu();
				cin >> menuChoice;
				if (menuChoice == 'R')
				{
					Deposit_Withdraw1();
				}
				else if (menuChoice == 'B')
				{
					out->DisplayBalance();
					balance();
				}
				else if (menuChoice == 'O') { objLog->logoutRequest(); goto reLogIn; }//logout
				else if (menuChoice == 'K')
				{//lock
					objLock->lockRequest();
					goto UnLok;
				}
				else { cout << "Account Operation Inaccessible......" << endl; }
			}
			break;
		case 'U':
			//unlock
			UnLok:
			objLock->unlockRequest();
			goto AfterUnlock;
			break;
		case 'X':
			//exit
			return 0;
			break;
		default:
			cout << "Invalid Character!" << endl;
		}
	}
	else if (accountChoice == 2)
	{
		Context2C *objOpenClose = new Context2C(new OPEN);
		objOpenClose->OPENRequest();
		Context2 *objLog = new Context2(new LOGIN);
		const AbstractOutputAccount2 *account_b = f1->CreateAccount2();
		account_b->DisplayMenu();
		reLogin2:
		cout << "Enter 'L' to Login" << endl;
		cin >> menuChoice;
		switch (menuChoice)
		{
		case 'L':
			//login
			objLog->LOGINRequest();
			out->PromptForPin();
			int p;
			cin >> p;
			PIN(p);
			cout << "Deposit Withdrawal and Balance Check Now Allowed" << endl;
			account_b->DisplayMenu();
			cin >> menuChoice;
			if (menuChoice == 'R') { Deposit_Withdraw2(); }
			else if (menuChoice == 'B')
			{
				out->DisplayBalance();
				BALANCE();
			}
			else if (menuChoice == 'O') { objLog->LOGOUTRequest(); goto reLogin2; }//logout
			else if (menuChoice == 'X') { return 0; }//EXIT
			else if (menuChoice == 'C')
			{//close
				objOpenClose->CLOSERequest();
			}
			else { cout << "Account Operation Inaccessible......" << endl; }
			break;
		default:
			cout << "Invalid Character!" << endl;
		}
	}
	else
	{
		cout << "Invalid Entry" << endl;
	}

	//delete account_a;
	//delete account_b;
	return 0;
}
//Abstract Factory ends here