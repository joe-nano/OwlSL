/*
	Hello world example script file.
	Author: Damián Reloaded
*/

// We want to access a C++ instance of type 'cconsole' and we want to name it 'console'.
host cconsole console();

class script_class2
{
	text val;

	// Print some text to the console
	void say(text param1)
	{
		val = "This is script_class2: " + param1;
		console.print(val, true);
	}
}

// Declare a script class. You can declare it in multiple files and they will join as one.
class script_class
{
	text val;
	script_class2 ss2;

	// Print some text to the console
	void say(text param1)
	{
		val = "Using script_class: " + param1;
		ss2.say(val);
	}

	// This get's called from c++
	void on_console_print(text param2)
	{
		console.print("Script callback called: " + param2, false);
	}

	text test_return()
	{
		text t = "Hello";
		return t;
	}
}

// This is the class we are going to instance from c++
class Program
{
	// Member variabes
	text		 val;
	script_class sclass;

	// Method we are going to call from c++
	void Main()
	{
		if (true)
		{
			console.on_print(sclass, "on_console_print(text)");

			sclass.say("Hello World");
		}
	}
}
