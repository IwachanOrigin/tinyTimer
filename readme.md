
# tiny timer

## Introduction

    クラスが生成された時間から計測を行うだけのタイマークラスです。  
    実装はヘッダー内で完結させています。  
    C++のchronoを利用していますのでc++11が必要になります。  

## How to use

    Headerにインクルード後、クラスを宣言します。  
    コンストラクタで計測を開始する関数を実行しています。  
    計測終了時にはelapsed関数またはelapsed_micro関数を呼び出します。  
    これらの関数は終了時間 - 開始時間を行い、ミリ秒、またはマイクロ秒を返します。  
    now関数は、関数が呼び出された時点の時間を返します。  
    計測開始時点の時間ではありません。  

## Build

    ex. VS2017 の場合  
    powershell.exe cmake -S . -B build -G "\"Visual Studio 15 2017 Win64\""  
    powershell.exe cmake --build build  

    ex. VS2019以上の場合  
    powershell.exe cmake -S . -B build  
    powershell.exe cmake --build build  

    ex. Ninja + LLVMの場合(LLVM 16 win64で検証)  
    powershell.exe cmake -S . -B build -G "\"Ninja Multi-Config\""  
    powershell.exe cmake --build build --config debug

## License

[MIT](https://github.com/IwachanOrigin/tinyTimer/blob/master/LICENSE)
