# phlex

Learns your coding habits and makes development much easier and automated, allowing you to focus on being creative in your coding and NOT getting disrupted with easy things such as setting up your project from scratch. phlex learns how you structure your projects and it basically lets you create a new project from scratch with just a new name for the project. Perfect tool for developing crossplatform applications for your big next multi-cloud application. 



Let's say you are working on your next big application, 
here is a taste of using phlex.
```console
foo@bar:~$ phlex 
<spotify> run
...
<spotify> finish
<spotify> file templates

file templates 
[
	{
		name: "class"
		word_count: 20
	}
	{
		name: "private lib file"
		word_count: 18
	}
]

<spotify> new private lib file
	name << Window
<spotify> 


name << "Window"




foo@bar:~Hej$  
```



```console
foo@bar:myApp$ phlex
{
	project_name: myApp
	last_push: 87 days ago
	versions: 7
	README.md: ""
}
```

example of a .phlex file, hint to it the things you want it to know, for example to let it know where and how to create a new file for your c++ application.


spotify/src/.phlex
```json
.cpp 

```

