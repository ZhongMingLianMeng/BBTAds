## 更新
### 1.2.0
1.修复部分无效链接导致的崩溃问题
### 1.1.0
1.添加错误日志上报功能

## 集成
### CocoaPods 集成

1. 在 Podfile 中添加依赖：

```ruby
pod 'BBTPod'
```

2. 执行安装命令：

```bash
pod install
```

### 手动集成

1. 将 BBTAds.xcframework 拖入您的项目中
2. 在项目的 General 设置页面，将 BBTAds.xcframework 添加到 Frameworks, Libraries, and Embedded Content 部分
3. 确保 Embed 选项设置为 "Embed & Sign"
