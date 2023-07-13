
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_MpeMetaData_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_MpeMetaData_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  MpeMetaData
    : public ModelBase
{
public:
    MpeMetaData();
    virtual ~MpeMetaData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// MpeMetaData members

    /// <summary>
    /// 封装类型。
    /// </summary>

    std::string getPackType() const;
    bool packTypeIsSet() const;
    void unsetpackType();
    void setPackType(const std::string& value);

    /// <summary>
    /// 视频时长。
    /// </summary>

    double getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(double value);

    /// <summary>
    /// 视频大小。
    /// </summary>

    int64_t getVideoSize() const;
    bool videoSizeIsSet() const;
    void unsetvideoSize();
    void setVideoSize(int64_t value);

    /// <summary>
    /// 视频宽度。
    /// </summary>

    int32_t getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(int32_t value);

    /// <summary>
    /// 视频高度。
    /// </summary>

    int32_t getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(int32_t value);

    /// <summary>
    /// 码率。
    /// </summary>

    int32_t getBitRate() const;
    bool bitRateIsSet() const;
    void unsetbitRate();
    void setBitRate(int32_t value);

    /// <summary>
    /// 音频码率。
    /// </summary>

    int32_t getAudioBitRate() const;
    bool audioBitRateIsSet() const;
    void unsetaudioBitRate();
    void setAudioBitRate(int32_t value);

    /// <summary>
    /// 帧率。  取值范围：0或[5,60]，0表示自适应。  单位：帧每秒。  &gt; 若设置的帧率不在取值范围内，则自动调整为0，若设置的帧率高于片源帧率，则自动调整为片源帧率。 
    /// </summary>

    int32_t getFrameRate() const;
    bool frameRateIsSet() const;
    void unsetframeRate();
    void setFrameRate(int32_t value);

    /// <summary>
    /// 编码类型名称。
    /// </summary>

    std::string getCodecName() const;
    bool codecNameIsSet() const;
    void unsetcodecName();
    void setCodecName(const std::string& value);

    /// <summary>
    /// 音频编码类型。
    /// </summary>

    std::string getAudioCodecName() const;
    bool audioCodecNameIsSet() const;
    void unsetaudioCodecName();
    void setAudioCodecName(const std::string& value);

    /// <summary>
    /// 声道数。
    /// </summary>

    int32_t getChannels() const;
    bool channelsIsSet() const;
    void unsetchannels();
    void setChannels(int32_t value);

    /// <summary>
    /// 采样率。
    /// </summary>

    int32_t getSample() const;
    bool sampleIsSet() const;
    void unsetsample();
    void setSample(int32_t value);

    /// <summary>
    /// 是否音频。
    /// </summary>

    bool isIsAudio() const;
    bool isAudioIsSet() const;
    void unsetisAudio();
    void setIsAudio(bool value);


protected:
    std::string packType_;
    bool packTypeIsSet_;
    double duration_;
    bool durationIsSet_;
    int64_t videoSize_;
    bool videoSizeIsSet_;
    int32_t width_;
    bool widthIsSet_;
    int32_t height_;
    bool heightIsSet_;
    int32_t bitRate_;
    bool bitRateIsSet_;
    int32_t audioBitRate_;
    bool audioBitRateIsSet_;
    int32_t frameRate_;
    bool frameRateIsSet_;
    std::string codecName_;
    bool codecNameIsSet_;
    std::string audioCodecName_;
    bool audioCodecNameIsSet_;
    int32_t channels_;
    bool channelsIsSet_;
    int32_t sample_;
    bool sampleIsSet_;
    bool isAudio_;
    bool isAudioIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_MpeMetaData_H_
