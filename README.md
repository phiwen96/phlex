# phlex
Phlex recognizes your code dublications, thus challenging you to think modular about your code. It alerts you when it recognices code repetitions, and it gives you the option to let it automatically encapsulate similarities and factor out. Train away those bad coding habits of yours!

<!-- Phlex learns your coding habits and makes development much easier, allowing you to focus on being creative in your coding and NOT getting disrupted with easy things such as setting up your project from scratch. phlex learns how you structure your projects and it basically lets you create a new project from scratch with just a new name for the project. Perfect tool for developing crossplatform applications for your big next multi-cloud application.  -->


just run phlex from desired directory, and it reads all subfiles and directories, creates a summary with options (if found) to factor out similarities into functions.

Consider this cmake code.
```cmake
FetchContent_Declare(
  	ph_concepts
  	GIT_REPOSITORY https://github.com/phiwen96/ph_concepts.git
  	GIT_TAG        v0.0.0)

FetchContent_GetProperties (ph_concepts)
	
if (NOT ph_concepts_POPULATED)
  	FetchContent_Populate (ph_concepts)
  	add_subdirectory (${ph_concepts_SOURCE_DIR} ${ph_concepts_BINARY_DIR})
endif ()

FetchContent_Declare(
  	ph_file
  	GIT_REPOSITORY https://github.com/phiwen96/ph_file.git
  	GIT_TAG        v0.0.0)

FetchContent_GetProperties (ph_file)
	
if (NOT ph_file_POPULATED)
  	FetchContent_Populate (ph_file)
  	add_subdirectory (${ph_file_SOURCE_DIR} ${ph_file_BINARY_DIR})
endif ()

```

running phlex on the cmake files is so easy, and it directly recognizes the dublications and alerts you:
```console
foo@bar:~$ phlex 
Possible code dublications!
```


<!-- Let's say you are working on your next big application, 
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
 -->
