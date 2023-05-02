
# tiny timer

## Introduction

    クラスが生成された時間から計測を行うだけのタイマークラスです。  
    実装はヘッダー内で完結させています。  
    C++のchronoを利用していますのでc++11が必要になります。  

## Build

    ex. VS2017 の場合  
    powershell.exe cmake -S . -B build -G "\"Visual Studio 15 2017 Win64\""  
    powershell.exe cmake --build build  

    ex. VS2019以上の場合  
    powershell.exe cmake -S . -B build  
    powershell.exe cmake --build build  

    ex. Ninja + LLVMの場合(LLVM 15 win64で検証)  
    powershell.exe cmake -S . -B build -G "\"Ninja Multi-Config\""  
    powershell.exe cmake --build build --config debug

## License

[MIT](https://github.com/IwachanOrigin/tinyTimer/blob/master/LICENSE)
