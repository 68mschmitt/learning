### Some questions that come up when using dotnet

- How do I run a process in a dotnet application if the process that I need to run is a service that has functionality injected using DI?
 - You cannot use a service based on the interface alone. Also, if you call the service directly instead of using its interface, then
   you are tightly coupling the service dependency. Instead, you need to build the "builder" first, thus creating that dependency
   tree for your services, and then you can use an extension method such as services.GetRequiredService<Interface>();

- What is the proper syntax for generic requirements? Also, what is the proper term for this?
 - "Constraints on type parameters"
 - where T : new()
   where Ts : default
