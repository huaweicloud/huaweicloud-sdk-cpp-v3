
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_Common_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_Common_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 模板信息。
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  Common
    : public ModelBase
{
public:
    Common();
    virtual ~Common();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Common members

    /// <summary>
    /// pvc开关。
    /// </summary>

    std::string getPvc() const;
    bool pvcIsSet() const;
    void unsetpvc();
    void setPvc(const std::string& value);

    /// <summary>
    /// pvc版本。
    /// </summary>

    std::string getPvcVersion() const;
    bool pvcVersionIsSet() const;
    void unsetpvcVersion();
    void setPvcVersion(const std::string& value);

    /// <summary>
    /// 视频编码格式。
    /// </summary>

    std::string getVideoCodec() const;
    bool videoCodecIsSet() const;
    void unsetvideoCodec();
    void setVideoCodec(const std::string& value);

    /// <summary>
    /// 音频编码格式(有效值范围) - 1：AUDIO_CODECTYPE_AAC - 2：AUDIO_CODECTYPE_HEAAC1 - 3：AUDIO_CODECTYPE_HEAAC2 - 4：AUDIO_CODECTYPE_MP3  默认值为1。
    /// </summary>

    std::string getAudioCodec() const;
    bool audioCodecIsSet() const;
    void unsetaudioCodec();
    void setAudioCodec(const std::string& value);

    /// <summary>
    /// 分片时长(默认为5秒)。
    /// </summary>

    int32_t getHlsInterval() const;
    bool hlsIntervalIsSet() const;
    void unsethlsInterval();
    void setHlsInterval(int32_t value);


protected:
    std::string pvc_;
    bool pvcIsSet_;
    std::string pvcVersion_;
    bool pvcVersionIsSet_;
    std::string videoCodec_;
    bool videoCodecIsSet_;
    std::string audioCodec_;
    bool audioCodecIsSet_;
    int32_t hlsInterval_;
    bool hlsIntervalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_Common_H_
