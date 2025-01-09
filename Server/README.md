# ESPHomeAI Server

## ESP-AI搭建教程 (https://espai.fun/guide/804qkkm3/)

安装Node.js和ESP-AI
```shell
# Download and install nvm:
curl -o- https://raw.githubusercontent.com/nvm-sh/nvm/v0.40.1/install.sh | bash
# Download and install Node.js:
nvm install 22
# Verify the Node.js version:
node -v # Should print "v22.13.0".
nvm current # Should print "v22.13.0".
# Verify npm version:
npm -v # Should print "10.9.2".
# Install ESP-AI
npm install esp-ai  --registry=https://registry.npmmirror.com


mkdir ESP-AI
cd ESP-AI
touch index.js
```

在 index.js 中添加以下代码（自行修改代码中的 key）:

```javascript
const espAi = require("esp-ai"); 
const config = { 
    gen_client_config: ()=>({
 
        // 官方 ASR 服务配置 
        iat_server: "esp-ai-asr",
        iat_config: {
            // 开放平台秘钥
            api_key: "xxx",

            // 等待用户首次说话时间(被唤醒后，多少时间检测不到说话就自动退下，单位 ms， 默认: 5000)
            // vad_first: 5000,
            // 对话过程中等待用户说话时间(对话过程中，多少时间检测不到说话就自动退下，单位 ms， 默认: 2000)
            // vad_course: 2000,
        }, 

        // 官方 LLM 服务
        llm_server: "esp-ai-llm",
        llm_config: { 
            // 开放平台秘钥
            api_key: "xxx",
            
            // [可选] 使用的大模型, 默认使用 qwen2.5:32b 
            // model: "wizardlm2",
        },

        // 官方 TTS 服务
        tts_server: "esp-ai-tts",
        tts_config: {  
            // 开放平台秘钥
            api_key: "xxx",
            // [可选] 音色ID，默认使用小明音色，到 ESP-AI 开放平台中可以轻松克隆音色或者使用别人的音色
            // reference_id: "f209d2acacfc407e95dedc91fe1b9741", 
        },


        // // 调用讯飞语音识别
        // iat_server: "xun_fei",
        // iat_config: {
        //     // 讯飞：https://console.xfyun.cn/services/iat  。打开网址后，右上角三个字段复制进来即可。
        //     appid: "xxx",
        //     apiSecret: "xxx",
        //     apiKey: "xxx",  
        // },

        // // 调用火山引擎LLM
        // llm_server: "volcengine",
        // llm_config: {
        //     // 1. 注册：https://console.volcengine.com/ark
        //     // 1. 开通: https://console.volcengine.com/ark/region:ark+cn-beijing/openManagement?LLM=%7B%7D&tab=LLM
        //     // 2. 创建接入点: https://console.volcengine.com/ark/region:ark+cn-beijing/endpoint
        //     apiKey: "xxx",
        //     epId: "ep-xxx", // 接入点ID 
        // },

        // // 调用火山引擎TTS
        // tts_server: "volcengine",
        // tts_config: {
        //     // 1. 注册：https://console.volcengine.com/speech/app
        //     // 2. 音色开通： https://console.volcengine.com/speech/service/8?AppID=6359932705
        //     // 3. 授权： xxx
        //     // 服务接口认证信息
        //     appid: "xxx",
        //     accessToken: "xxx",
        //     rate: 24000, //采样率，只支持 16k 或者 24k，大模型语音合成必须使用 24k
        //     // voice_type: "BV007_streaming", // 清切女声
        //     voice_type: "BV051_streaming", // 奶气萌娃
        // },


    })
};

const espAiIns = espAi(config);

// 在合适的时机可以调用方法来在服务端实现设备操作
// espAiIns.restart("[device_id]") // 重启设备
// espAiIns.tts("[device_id]", "你好啊")   // 让设备说话
// ...
```

运行项目
```
node ./index.js
```
## HomeAssistant 搭建

```shell
sudo apt install docker

sudo docker pull homeassistant/home-assistant

sudo docker run -d --name="HomeAssist" -v /home/star/docker/HA/config -p 8123:8123 homeassistant/home-assistant
```

## EMQX 搭建
```shell
sudo docker pull emqx
sudo docker run -d --name="EMQX" -p 1883:1883 -p 8083:8083 -p 8883:8883 -p 8084:8084 -p 18083:18083 emqx
```