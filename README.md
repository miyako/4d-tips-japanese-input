# 4d-tips-japanese-input
Macで日本語入力プログラムを制御する方法についての考察

## 問題点

1. フォームに**テキスト入力**と**リストボックス**を配置
2. ウィンドウを表示
  
* タブ移動またはクリック操作でリストボックスにフォーカスを移動した場合，入力モードが**英数**に切り替わるが，その後，テキスト入力にフォーカスを移動した場合，日本語に切り割らない
* オブジェクトが何もフォーカスされていない状態で**英数**に切り替え，タブ移動またはクリック操作でリストボックスにフォーカスを移動した場合，日本語に切り割えられなくなる

### `TISSelectInputSource` (carbon)

* https://github.com/miyako/4d-plugin-text-input-service/blob/master/Text%20Input%20Service/4DPlugin.cpp

### 既知の問題

* https://github.com/pqrs-org/Karabiner-Elements/issues/1602
* https://teratail.com/questions/141913

### [`selectedKeyboardInputSource`](https://developer.apple.com/documentation/appkit/nstextinputcontext/1533970-selectedkeyboardinputsource?language=objc)
