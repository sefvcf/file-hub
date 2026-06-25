# 小猪的文件站 🐷

带提取码保护的便携式文件下载站。纯静态HTML，部署到GitHub Pages即用。

## 功能

- 🔐 **提取码验证** — 输入正确密码才能看到文件列表
- 🔍 **文件搜索** — 按文件名、类型、日期搜索
- 📱 **移动端适配** — 手机也能流畅使用
- 💾 **零后端** — 纯HTML/JS，无服务器成本
- 🔒 **会话保护** — 关闭标签页后需重新验证

## 自定义你的站点

打开 `index.html`，修改顶部 `<script>` 中的配置：

```javascript
// 提取码（改成你想要的）
const ACCESS_CODE = '1234';

// 文件列表（改成你的文件）
const FILES = [
  {
    name: '你的文件名.pdf',
    size: '1.5 MB',
    type: 'PDF',
    desc: '2024-06-20',
    url: 'https://你的文件下载链接',
    icon: '📄'
  },
  // ... 添加更多文件
];
```

## 部署

1. Fork 或创建自己的仓库
2. 上传文件到仓库
3. Settings → Pages → Source: `main` branch → Save
4. 访问 `https://你的用户名.github.io/file-hub/`

或者直接推送到现有仓库，启用GitHub Pages即可。

## 许可

MIT
