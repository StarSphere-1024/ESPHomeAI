# ESPHomeAI - 基于ESP32与LLM的智能家居中央控制器

## 项目简介

ESPHomeAI 是一款结合了 ESP32-S3 开发板、小智 AI 聊天机器人框架以及 Home Assistant 的智能家居解决方案。它致力于为用户提供一个更加智能、便捷和个性化的家居控制体验。通过集成 Home Assistant 平台，ESPHomeAI 可以实现对各种智能家居设备的统一管理和控制，并借助小智 AI 提供自然语言处理、个性化推荐及自动化场景设置等先进功能。

## 核心特性

- **图形界面操作**：借助 EEZ Studio 和 LVGL 构建的直观图形用户界面，使得设备控制和场景切换变得简单易行。
- **语音指令控制**：支持基于云端大型语言模型（LLM）的自然语言处理技术，允许用户通过语音指令来操作家中的智能设备。
- **与 Home Assistant 集成**： 完美兼容 Home Assistant 平台，确保各类智能家居设备可以被有效地集中管理。

## 硬件需求

- [立创·实战派ESP32-S3开发板](https://lckfb.com/project/detail/lckfb-esp32-s3-va?param=baseInfo)
- 温湿度气压传感器模块（AHT20+BMP280）

## 软件需求

### 客户端

- [XiaoZhi AI Chatbot](https://github.com/78/xiaozhi-esp32)
- [EEZ Studio](https://www.envox.eu/studio/studio-introduction/)

### 服务端

- [Home Assistant](https://www.home-assistant.io/)
- [小智后端服务xiaozhi-esp32-server]<https://github.com/xinnan-tech/xiaozhi-esp32-server>

## 开发进度

### 基础功能

- [ ] LLM自然语言语音交互
- [ ] HomeAssistant集成
- [ ] 触摸屏界面开发

### 扩展功能

- [ ] 低功耗休眠模式
- [ ] 温湿度监测
- [ ] 天气等信息接入
