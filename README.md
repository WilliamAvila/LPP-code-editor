## Getting Started

To run the LPP code editor web application follow these steps:
Clone the repo: `git clone https://github.com/WilliamAvila/LPP-code-editor.git`

## Run the server
1.Go to the server folder and compile the program example on LINUX `g++ -std=c++11 -pthread -o example example.cpp` or `clang++ -std=c++11 -pthread -o example example.cpp`on MAC OSX

2.Get the LPP compiler from here [LPP-compiler](https://github.com/WilliamAvila/LPP-compiler) once you get the executable move it to the server folder 

3.Download websocketd for your os [here](http://websocketd.com/#download) and move it to the server folder

4.Start the server run `./websocketd --port=8080  ./example` in the server folder


## Copyright and License

Copyright 2013-2016 Blackrock Digital LLC. Code released under the [MIT](https://github.com/WilliamAvila/LPP-code-editor/blob/master/LICENSE) license.
