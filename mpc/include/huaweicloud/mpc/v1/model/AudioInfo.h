
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_AudioInfo_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_AudioInfo_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
class HUAWEICLOUD_MPC_V1_EXPORT  AudioInfo
    : public ModelBase
{
public:
    AudioInfo();
    virtual ~AudioInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AudioInfo members

    /// <summary>
    /// 音频编码格式
    /// </summary>

    std::string getCodec() const;
    bool codecIsSet() const;
    void unsetcodec();
    void setCodec(const std::string& value);

    /// <summary>
    /// 音频采样率
    /// </summary>

    int32_t getSample() const;
    bool sampleIsSet() const;
    void unsetsample();
    void setSample(int32_t value);

    /// <summary>
    /// 音频信道
    /// </summary>

    int32_t getChannels() const;
    bool channelsIsSet() const;
    void unsetchannels();
    void setChannels(int32_t value);

    /// <summary>
    /// 音频码率，单位: kbit/s 
    /// </summary>

    int32_t getBitrate() const;
    bool bitrateIsSet() const;
    void unsetbitrate();
    void setBitrate(int32_t value);

    /// <summary>
    /// 音频码率，单位: bit/s 
    /// </summary>

    int64_t getBitrateBps() const;
    bool bitrateBpsIsSet() const;
    void unsetbitrateBps();
    void setBitrateBps(int64_t value);


protected:
    std::string codec_;
    bool codecIsSet_;
    int32_t sample_;
    bool sampleIsSet_;
    int32_t channels_;
    bool channelsIsSet_;
    int32_t bitrate_;
    bool bitrateIsSet_;
    int64_t bitrateBps_;
    bool bitrateBpsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_AudioInfo_H_
