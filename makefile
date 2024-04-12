
objetivo : ingredientes
 paso 1
 paso 2
 paso 3



bin/tui : src/tui_test.cpp
         g++ src/tui_test.cpp -o bin/tui -l include -lftxui-screen -screen-lftxui-dom-lftxui-component

run : bin/tui
    ./bin/tui