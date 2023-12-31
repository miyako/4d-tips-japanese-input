# 4d-tips-japanese-input
Macで日本語入力プログラムを制御する方法についての考察

## 再現手順

1. フォームに**テキスト入力**と**リストボックス**を配置
2. ウィンドウを表示

## 問題点

1. タブ移動またはクリック操作でリストボックスにフォーカスを移動した場合，入力モードが**英数**に切り替わるが，その後，テキスト入力にフォーカスを移動した場合，日本語に切り替わらない
2. オブジェクトが何もフォーカスされていない状態で**英数**に切り替え，タブ移動またはクリック操作でリストボックスにフォーカスを移動した場合，日本語に切り替えられなくなる

## 公式API

1. `TISSelectInputSource`

* **問題点**: deprecated, carbon; メインスレッドで実行する必要あり
* **資料**: https://github.com/pqrs-org/Karabiner-Elements/issues/1602

2. [`selectedKeyboardInputSource`](https://developer.apple.com/documentation/appkit/nstextinputcontext/1533970-selectedkeyboardinputsource?language=objc)

* **問題点**: イベントと併せて実装する必要がある
* **資料**: https://qiita.com/callmekohei/items/29c8a020a74163772997

## 回避策

`CGEventPost`で`kVK_JIS_Kana`の使用をシミュレートする

[miyako.github.io](https://miyako.github.io/2023/08/03/4d-plugin-japanese-input.html)
