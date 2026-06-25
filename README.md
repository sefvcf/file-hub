# 🐷 小猪的文件站

带提取码保护的便携式文件下载站，部署在 GitHub Pages。

## 🔗 访问地址

**https://sefvcf.github.io/file-hub/**

默认提取码：`1234`

## 📤 上传文件

1. 把要分享的文件放到 `files/` 目录下
2. 编辑 `index.html`，在 `FILES` 数组里添加文件信息：

```javascript
{
  name: '文件名.zip',
  size: '15 MB',
  type: 'ZIP',
  desc: '2024-06-25',
  url: 'files/文件名.zip',    // ← 相对路径，自动匹配 GitHub Pages
  icon: '📦'
}
```

3. 提交推送，GitHub Pages 自动更新

## 🔐 修改提取码

编辑 `index.html` 第 260 行附近：

```javascript
const ACCESS_CODE = '你的新密码';
```

## 🛠️ 技术

纯静态 HTML + CSS + JS，零后端，零依赖。

## 📄 许可

MIT
