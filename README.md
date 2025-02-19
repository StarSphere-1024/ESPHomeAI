# ESPHomeAI - 基于 ESP32 和 LLM 的智能家居中央控制器

## 项目简介

ESPHomeAI 是一个基于 ESP32、触摸屏和云端 LLM 的智能家居中央控制器，旨在提供更智能、便捷和个性化的家居控制体验。它集成了 Home Assistant 平台，实现对各种智能家居设备的统一管理和控制，并通过 LLM 提供自然语言语音交互、个性化推荐和自动化场景等功能。

## 主要功能

* **触摸屏交互:**  友好的图形化界面，方便用户进行设备控制和场景切换。
* **语音控制:**  基于云端 LLM 的自然语言语音交互，支持语音指令控制家居设备。
* **Home Assistant 集成:**  无缝集成 Home Assistant 平台，实现对各种智能家居设备的统一管理。

## 硬件需求

* ESP32 开发板 (立创·ESP32S3R8N8)
* 触摸屏 (中景园3.5寸TFT 320x480)
* 麦克风模块 (INMP441)
* 音频放大模块 (MAX98357)
* 扬声器 (8欧 3W)
* 语音识别模块 (ASR PRO)
* 温湿度气压模块 (AHT20+BMP280)

## 软件需求

* PlatformIO IDE
* Home Assistant
* ESP-AI


## 项目进度

### 基础功能

+ [ ] LLM自然语言语音交互
+ [ ] HomeAssistant集成
+ [ ] 触摸屏界面开发

### 扩展功能

+ [ ] 低功耗休眠模式
+ [ ] 温湿度监测
+ [ ] 天气等信息接入
