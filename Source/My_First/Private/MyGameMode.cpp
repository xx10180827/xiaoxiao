// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameMode.h"

AMyGameMode::AMyGameMode()
{

	DefaultPawnClass = AMyPawn::StaticClass();
	PlayerControllerClass = AMyPlayerController::StaticClass();
	GameStateClass = AMyGameState::StaticClass();
	PlayerStateClass = AMyPlayerState::StaticClass();
	HUDClass = AMyHUD::StaticClass();
}
void AMyGameMode::BeginPlay()
{
	Super::BeginPlay();
	//UE_LOG的使用
	//LogTemp是临时生成日志的类别名称  ,第二个参数是日志的级别, 第三个是打印的内容 TEXT("")
	//日志的优先级:  Error>Warning>Display   分别为红色 黄色 白色
	UE_LOG(LogTemp, Warning, TEXT("myWarning"));
	UE_LOG(LogTemp, Error, TEXT("myError"));
	UE_LOG(LogTemp, Display, TEXT("myDisplay"));
	//打印到屏幕上
	//-1为默认值, 5.0为显示时间, FColor::red表示显示为红色, TEXT("");
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("My name is XX"));
	
	//创建一个Fstring
	FString Mystring = TEXT("This is a String");
	//FString 转化为 FName 
	FName Myname = FName(*Mystring);
	//FString 转化为 FTEXT
	FText Mytext = FText::FromString(Mystring);
		
	//FName 转化为  FString
	FString new_string = Myname.ToString();
	//FName 转化为 FText
	FText Mynwetext = FText::FromName(Myname);

	//FText 转化为 FString
	 new_string = Mytext.ToString();	
	//FText 不能直接转化为 FName  只能先转化为 FString 之后在转化为 FName

	//增
	//MyArray.Add(10);
	//MyArray.Add(20);
	//MyArray.Add(30);
	//MyArray.AddUnique(20);//数组中不存在的 数才会添加到 数组中
	//MyArray.AddUnique(40);
	//Print();

	////删
	//MyArray.Remove(20);//删除所有等值 元素
	//MyArray.RemoveSingle(10);//删除 第一个匹配值
	//MyArray.RemoveAt(0);//一处索引值 为0的元素
	//MyArray.Empty();//清空数组
	//MyArray.Reset();//重置数组所有元素为 0

	////改
	//MyArray.Insert(60, 0);//在索引为0处 插入60
	//int32& temp = MyArray[0];
	//temp = 90;

	////查找
	//MyArray.Contains(10);//查找是否有该元素
	//MyArray.Find(10);//正向查找第一个匹配值
	//MyArray.FindLast(10);//反向查找第一个匹配值

	//TMap的增删查
	//增
	MyMap.Emplace(0, 1);
	MyMap.Emplace(1, 2);
	MyMap.Emplace(2, 3);
	PrintMap();

	////删
	//MyMap.Remove(0);//这个就是删除key值
	//MyMap.Empty();//将整个TMap清空

	////查找
	//MyMap.Contains(1);//根据key值查找 若存在返回值为真 否则为假 查找两次
	//int32 * isFind = MyMap.Find(2);// 这个也是根据key值查找 若存在返回值为真 否则为假 之查找一次并且返回值 为一个指针
	//MyMap.FindKey(2);//是根据value值 来查找key值
	//
	////分别获取 keys 和values
	//TArray<int32> MyKey;
	//TArray<int32> MyValue;
	//MyMap.GenerateKeyArray(MyKey);
	//MyMap.GenerateValueArray(MyValue);

	////TSet的使用
	////增加元素
	//TSet<int32>MySet0;
	//MySet0.Add(1);//添加整形数据 到该SET容器中
	//MySet.Add(TEXT("xiaoxiao"));//会创建临时对象 后在复制或者移动到容器中
	//MySet.Add(TEXT("dada"));//Add 的返回值为 FSetElementId
	//MySet.Add(TEXT("666"));
	//MySet.Emplace(TEXT("xiao"));//相对于add 他不会创建临时对象 而是直接在容器内存中创建构造对象 所以性能更好
	////PrintMySet(); 

	////合并元素
	//TSet<FString> MySet1;
	//MySet1.Add(TEXT("apple"));
	//MySet1.Add(TEXT("banana"));
	//MySet1.Add(TEXT("pear"));
	//MySet.Append(MySet1);//将MySet1的元素合并到MySet
	//PrintMySet();

	////移除元素
	//MySet.Remove(TEXT("banana"));//会返回移除的该元素的个数 返回值为int32类型 失败返回0
	//MySet.Empty(); //该集合置为空 内存释放
	//MySet.Reset();//重置集合 但不释放内存

	////查
	//int32 count = MySet.Num();//查询集合中保存的元素数量 返回值为 int32
	//bool isFind = MySet.Contains(TEXT("xiaoxiao"));//返回值为 bool
	//FString* isFind1 = MySet.Find(TEXT("xiaoxiao"));//返回值为 元素类型的指针 找不到返回nullptr
	//
	////Array 函数
	//TArray<FString> Array2 = MySet.Array();//返回值为一个 TArray 填充了每一个TSet元素的副本

	////排序
	//TSet<FString> testSet = { TEXT("a"),TEXT("aa"), TEXT("aaa"), TEXT("aaaa")};
	//testSet.Sort([](FString A, FString B) { return A.Len() > B.Len(); });//通过lumda表达式

	////运算符 = 
	//TSet<FString>newSet;
	//newSet = MySet;

	////[]
	//FSetElementId Index = newSet.Add(TEXT("111"));//因为 Add 返回值是FSetElementId 所以 可以用
	//newSet[Index] = TEXT("222");

	////Reserve 重新分配内存
	//TSet<FString> newSet2;
	//newSet2.Reserve(10);//预先分配内存 如果输入的num比元素个数多 则会产生闲置内存

	////Shrink
	//for (int32 i = 0;i < 10;i++)
	//{
	//	newSet2.Add(TEXT("newSet2 %d", i));
	//}
	//for (int32 j = 0; j < 10; j += 2)
	//{
	//	newSet2.Remove(FSetElementId::FromInteger(j));//删除索引为j的元素
	//}
	//newSet2.Shrink();//删除末端的空元素

	////Compact 将容器中的所有空白元素 放到末尾一起删除
	//newSet2.Compact();//但是这样删除可能会 改变元素之间的顺序 可以用CompactStable

	////基础数据类型的输出打印
	//int32 MyInt = 18;
	//float MyFloat = 5.0f;
	//bool MyBool = true;
	//FString  MyString0 = TEXT("xiaoxiao");
	//TCHAR MyChar = 'A';
	//FVector MyVector = FVector(0, 0, 0);
	//UE_LOG(LogTemp, Warning, TEXT("%d"), MyInt);
	//UE_LOG(LogTemp, Warning, TEXT("%f"), MyFloat);
	//UE_LOG(LogTemp, Warning, TEXT("%d"), (int32)MyBool);
	//UE_LOG(LogTemp, Warning, TEXT("%c"), MyChar);
	//UE_LOG(LogTemp, Warning, TEXT("%s"), *MyString0);
	//UE_LOG(LogTemp, Warning, TEXT("%s"), *MyVector.ToString());

	
}

void AMyGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMyGameMode::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}

void AMyGameMode::Print()
{
	for (auto it = MyArray.CreateIterator();it;it++)
	{
		UE_LOG(LogTemp, Warning, TEXT("%d"), *it);
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, FString::Printf(TEXT("%d\n"),*it));
	}
}

	void AMyGameMode::PrintMap()
	{
		for (auto& TestMap : MyMap)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT("key :%d" "value :%d"), TestMap.Key, TestMap.Value));
			UE_LOG(LogTemp, Warning, TEXT("key :%d , value :%d"), TestMap.Key, TestMap.Value);
		}
	}

	void AMyGameMode::PrintMySet()
	{
		for (auto & testset:MySet )//这里打印使用的是泛型循环 c++特性 auto x : name  
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, FString::Printf(TEXT("%s"), *testset));
			UE_LOG(LogTemp,Warning,TEXT("%s"),*testset)
		}
	}
