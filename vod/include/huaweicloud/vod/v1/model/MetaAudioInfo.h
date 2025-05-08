
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_MetaAudioInfo_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_MetaAudioInfo_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  MetaAudioInfo
    : public ModelBase
{
public:
    MetaAudioInfo();
    virtual ~MetaAudioInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MetaAudioInfo members

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

    int32_t getSamplingRate() const;
    bool samplingRateIsSet() const;
    void unsetsamplingRate();
    void setSamplingRate(int32_t value);

    /// <summary>
    /// 音频码率，单位：bit/s 
    /// </summary>

    int64_t getBitrate() const;
    bool bitrateIsSet() const;
    void unsetbitrate();
    void setBitrate(int64_t value);


protected:
    std::string codec_;
    bool codecIsSet_;
    int32_t samplingRate_;
    bool samplingRateIsSet_;
    int64_t bitrate_;
    bool bitrateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_MetaAudioInfo_H_
