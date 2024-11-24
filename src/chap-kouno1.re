= 幅を広げる学習のススメ

//flushright{
	こうの@hk_it7
//}

== 深く学ぶか広く学ぶか

学習時のテーマ選びはどうしているでしょうか？

 * 使っている技術の深堀り
 * 最新技術を試す
 * 作りたいものを作ってみる（そして周辺技術を拾う）

他にも、人それぞれのテーマ選びで興味の持ったものを学んでいくことが多いかと思います。

一方で能動的なテーマ選びのみを続けていると、未知の技術の開拓や知識の幅を広げる機会が少なくなってしまいます。

この章では、知識の幅を広げるために実践していることを理由とともに解説していきます。

== なぜ広く学ぶのか

まず、なぜ広く学ぶのかについて考えていきます。

エンジニアリングは専門的な知識が必要とされていますが、対象は多岐にわたります。

プログラマであれば、言語やネットワーク関係、インフラ関係などが大きなジャンルとしてありますね。さらに言語ではC言語、Java、JavaScriptなど無数に領域が存在します。例えば、その中の1つであるJavaを極めたからといってエンジニアとして優れているとは言い難いと思います。なぜなら、多くのエンジニアはJavaを使うことが目的ではなく、ソフトウェアを開発するための1要素に過ぎないからです。

また、多くのエンジニアは0から発明するのではなく、既存技術の組み合わせで開発を進めていきます。

開発を行っているとエラーであったり調査であったりでどうしても周辺技術の知識が必要になります。一方で未知であっても人間には過去の経験や知識から推測するという能力があります（もちろん推測だけで進めてはいけませんが）。

未知に遭遇したときにChatGPT等の生成AI技術の台頭により、最新の技術以外はある程度、AIに聞けば良い時代に変わりつつあります。

「既存技術の組み合わせ」と「AIとの協業」を前提にすれば、今後のエンジニア像として「広く浅い知識を身につけて、場面（コンテキスト）に合わせた対応（技術選定/課題解決）ができること」を求められていくと私は考えています。

どういうことかと言うと、「既存技術の組み合わせ」であれば、「AIとの協業」のもと、ある程度の回答が得られます。しかし、これには2つの課題があります。

1つ目は、ちゃんと聞き出せるかという点です。2つ目はコンテキストをAIに伝えることの限界です。

それぞれ見ていきましょう。

=== AIにうまく聞き出せるか

既存技術を自ら再実装してしまうことを「車輪の再発明」と呼びます。意図的に実施する場合は良いですが、業務的な開発としては無駄なコストと考えられるため、避けたほうが良いとされています。

なぜ、車輪の再発明をしてしまうのでしょうか？これは既存技術を知らなかったこと、あるいは聞き出せなかったことによる悲劇だと考えます。

既存技術を知らなかったことについては人間の限界があるため、仕方がないです。しかし聞き出せなかったという部分は改善の余地があります。

聞き出せなかった理由は「聞くという発想に至れなかった」や「うまく質問できなかった」が考えられます。筆者はこの2つの原因を解決するのが、広い知識であると考えています。

少しでも似たような話を聞いたことがあれば、それを手がかりにAIにたずねることで、過去に開発された「車輪」を導き出せます。

=== コンテキストをAIに伝えることの限界

「AIにうまく聞き出せるか」とも重複しますが、AIに聞く際にはコンテキストが重要になります。課題に対して周辺技術としてどのようなものがあるかであったり、もっと大きく見ればビジネス的な制約の有無なんかもコンテキストに当たります。

開発には、さまざまな制約があることが多いです。その制約を常にすべてプロンプトに設定することは現実的ではなく、AIに伝える制約事項の取捨選択が必要になります。

その際に、この質問であればこの情報が必要かな、というのは人間が判断する必要があります。必要な情報もAIに聞いて進めていくという手法もありますので、まずはこの方法を試してみるのは良いと思います。

また、多少知っているものであれば、選択肢を人間が提示して、AIにメリット・デメリットを列挙して検討材料にするという使い方もできます。

このようにAIと協業する上でも、広い知識があるかないかで大きな差が生まれます。

さて、知識の幅を広げるためにはどうしたら良いでしょうか？

== 知識の幅を広げるきっかけづくり

幅を広げるためにはきっかけづくりが重要です。きっかけづくりを能動的に行い、得た情報の選択（テーマ選び）を受動的に行えば、今まで知らなかったことに対しての学習の機会を得ることができます。

きっかけづくりの例には次のようなものが挙げられます。

 * 本屋に行って話題の本、新刊を買う
 * 技術系雑誌を定期購読する
 * 技術イベント（LT会、カンファレンス）に参加する

少し個別に深堀りしていきます。

=== 本屋に行って話題の本、新刊を買う

ここでの本屋はネットの本屋（Amazon等）ではなく、リアルな本屋を指しています。出版不況と言われて久しく、段々とリアルな本屋が減りつつありますが、新しいジャンルを開拓するには持って来いの場所です。

本屋に並んでいるのに、全く聞いたことのない技術というのは幅を広げるチャンスに満ちています。なぜなら、出版されるには、ある程度の期間と需要が必要であるためです。つまり、本屋で並んでいる時点で、世間に認知され、ある程度利用が進んでいる技術であると言えます。

にもかかわらず、全く聞いたことがないとなると、その技術ジャンルについてアンテナが張れていない可能性があります。もちろん全てに精通する必要はないので、アンテナが張れていないから問題であるというわけではありません。しかし、詳しくない部分を知っておくことは、開発業務を行う上で重要であると考えます。

=== 技術系雑誌を定期購読する

書籍としては技術系雑誌も有効だと考えています。定期購読をすることで受動的なテーマ選びを可能にします。雑誌は毎回異なる特集が組まれ、広範な話題に触れています。紙面の関係上、手を動かして試すのにちょうどよい量になることが多いことも魅力です。

類似するものとして、企業等が出している合同誌タイプの技術同人誌も同じような効果があります。この本もそうですね。

いろんな人が書いているからこそ、広い知識や考え方を得るきっかけになります。

=== 技術イベント（LT会、カンファレンス）に参加する

特にオフラインイベントだと良いと考えています。複数トラック構成でも、そうでなくても、興味の薄いトピックの時間というのはけっこう発生します。その興味の薄いトピックこそが、知識の幅を広げるきっかけになります。

オンラインでの視聴では、興味の薄いトピックが並んだときに、つい他のことをやってしまいがちです。「後日アーカイブで見れば良い」も、実現しないことがけっこうあるかと思います。

オフラインイベントであれば、とりあえず聞いておこうという判断をする可能性が高くなり、結果として、新しいことを知ることができます。

== 知識を広げたあとは？

ここまで紹介した内容は「ある程度、受動的に知識を広げる手段」でした。広げるだけ広げても実践で役立つものになるとは限りません。

そのため、気になったものについては、深堀りをすることをオススメします。知識の深堀りをする方法は......他の誰かがきっと書いていてくれると思います！

本章を読んで、知識を広げることで、さまざまな場面でベターな選択ができるようになることを願っています。
