
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_EditAudioInfo_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_EditAudioInfo_H_

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
class HUAWEICLOUD_MPC_V1_EXPORT  EditAudioInfo
    : public ModelBase
{
public:
    EditAudioInfo();
    virtual ~EditAudioInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// EditAudioInfo members

    /// <summary>
    /// 音频编码格式,取值有：[AAC, HEAAC, MP3]。
    /// </summary>

    std::string getCodec() const;
    bool codecIsSet() const;
    void unsetcodec();
    void setCodec(const std::string& value);

    /// <summary>
    /// 视频码率，单位: bit/s 
    /// </summary>

    int32_t getBitrate() const;
    bool bitrateIsSet() const;
    void unsetbitrate();
    void setBitrate(int32_t value);

    /// <summary>
    /// 采样率, 单位: HZ 
    /// </summary>

    int32_t getSample() const;
    bool sampleIsSet() const;
    void unsetsample();
    void setSample(int32_t value);

    /// <summary>
    /// 声道数。
    /// </summary>

    std::string getChannels() const;
    bool channelsIsSet() const;
    void unsetchannels();
    void setChannels(const std::string& value);


protected:
    std::string codec_;
    bool codecIsSet_;
    int32_t bitrate_;
    bool bitrateIsSet_;
    int32_t sample_;
    bool sampleIsSet_;
    std::string channels_;
    bool channelsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_EditAudioInfo_H_
