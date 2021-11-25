
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_TtsConfig_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_TtsConfig_H_

#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 语音合成配置数据结构。
/// </summary>
class HUAWEICLOUD_SIS_V1_EXPORT  TtsConfig
    : public ModelBase
{
public:
    TtsConfig();
    virtual ~TtsConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// TtsConfig members

    /// <summary>
    /// 语音格式头：wav、mp3、pcm。 默认：wav
    /// </summary>

    std::string getAudioFormat() const;
    bool audioFormatIsSet() const;
    void unsetaudioFormat();
    void setAudioFormat(const std::string& value);

    /// <summary>
    /// 采样率：16000、8000 默认：8000
    /// </summary>

    std::string getSampleRate() const;
    bool sampleRateIsSet() const;
    void unsetsampleRate();
    void setSampleRate(const std::string& value);

    /// <summary>
    /// 语音合成特征字符串，组成形式为{language}_{speaker}_{domain}，即“语种_人员标识_领域”。发音人分为普通发音人和精品发音人。  普通发音人每100字计一次调用，取值范围如下：   chinese_xiaoqi_common  小琪，标准女声发音人。  chinese_xiaoyu_common  小宇，标准男声发音人。  chinese_xiaoyan_common  小燕，温柔女声发音人。  chinese_xiaowang_common  小王，童声发音人。  chinese_xiaowen_common   小雯，柔美女声发音人。  chinese_xiaojing_common 小婧，俏皮女声发音人。  chinese_xiaosong_common  小宋，激昂男声发音人。  chinese_xiaoxia_common   小夏，热情女声发音人。  chinese_xiaodai_common   小呆，呆萌童声发音人。  chinese_xiaoqian_common  小倩，成熟女声发音人。  english_cameal_common    cameal，柔美女声英文发音人。   精品发音人每50字计一次调用，区域仅支持cn-north-4，cn-east-3，暂时不支持音高调节，取值范围如下：  chinese_huaxiaoxia_common  华小夏，热情女声发音人。  chinese_huaxiaogang_common  华晓刚，利落男声发音人。  chinese_huaxiaolu_common  华小璐，知性女声发音人。  chinese_huaxiaoshu_common  华小舒，舒缓女声发音人。  chinese_huaxiaowei_common  华小唯，嗲柔女声发音人。  chinese_huaxiaoliang_common  华小靓，嘹亮女声发音人。  chinese_huaxiaodong_common  华晓东，成熟男声发音人。  chinese_huaxiaoyan_common  华小颜，严厉女声发音人。  chinese_huaxiaoxuan_common  华小萱，台湾女声发音人。  chinese_huaxiaowen_common  华小雯，柔美女声发音人。  chinese_huaxiaoyang_common  华晓阳，朝气男声发音人。  chinese_huaxiaomin_common  华小闽，闽南女声发音人。  chinese_huanvxia_literature 华女侠，武侠女生发音人，只支持16k的采样率。  chinese_huaxiaoxuan_literature 华晓悬，悬疑男声发音人，只支持16k的采样率。  默认：chinese_xiaoyan_common
    /// </summary>

    std::string getProperty() const;
    bool propertyIsSet() const;
    void unsetproperty();
    void setProperty(const std::string& value);

    /// <summary>
    /// 语速。 取值范围：[-500,500]  默认值：0
    /// </summary>

    int32_t getSpeed() const;
    bool speedIsSet() const;
    void unsetspeed();
    void setSpeed(int32_t value);

    /// <summary>
    /// 音高。 取值范围： [-500,500]  默认值：0
    /// </summary>

    int32_t getPitch() const;
    bool pitchIsSet() const;
    void unsetpitch();
    void setPitch(int32_t value);

    /// <summary>
    /// 音量。 取值范围：[0, 100]  默认值：50
    /// </summary>

    int32_t getVolume() const;
    bool volumeIsSet() const;
    void unsetvolume();
    void setVolume(int32_t value);


protected:
    std::string audioFormat_;
    bool audioFormatIsSet_;
    std::string sampleRate_;
    bool sampleRateIsSet_;
    std::string property_;
    bool propertyIsSet_;
    int32_t speed_;
    bool speedIsSet_;
    int32_t pitch_;
    bool pitchIsSet_;
    int32_t volume_;
    bool volumeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_TtsConfig_H_
