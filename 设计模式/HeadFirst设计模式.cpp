


class duck {
	behavior flyBehavior
	behavior quackBehavior

	setFlyBehavior()
	setQuackBehavior()

	performFly()
	performQuack()
}







class Beverage {
	getDescription()
	virtual cost() = 0
}
class CondimentDecortor {
	Beverage beverage
	virtual getDescription() = 0
}
class DarkRoast:Beverage {
	double cost {
		return 0.1
	}
	string getDescription() {
		return "DarkRoast"
	}
}
class Mocha:CondimentDecortor {
	Mocha(beverage) {
		this.beverage = beverage
	}
	string getDescription() {
		return beverage.getDescription() + ", Mocha"
	}
	double cost(){
		return beverage.cost() + 0.2
	}
}

Beverage beverage = new DarkRoast()
//两倍的抹茶
beverage = Mocha:new(beverage)
beverage = Mocha:new(beverage)
beverage.cost()






class Singleton {
	private static instance;
	private singleton(){}
	public static getInstance() {
		if (instance == NULL)
			instance = new Singleton()

		return instance
	}
}






class Command{
	virtual void execute() = 0;
}
class LightOnCommand : Command {
	Light light;
	LightOnCommand(light) {
		this.light = light
	}
	void execute() {
		this.light.on()
	} 
}
class remoteControl {
	Command slot
	void setCommand(Command command) {
		this.slot = command
	}
	void buttonPressed() {
		this.slot.execute()
	}
}






