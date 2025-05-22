
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_EncoderSettingsExpand_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_EncoderSettingsExpand_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/EncoderSettingsExpand_audio_descriptions.h>
#include <vector>
#include <huaweicloud/live/v1/model/VideoDescriptions.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 输出编码扩展
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  EncoderSettingsExpand
    : public ModelBase
{
public:
    EncoderSettingsExpand();
    virtual ~EncoderSettingsExpand();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EncoderSettingsExpand members

    /// <summary>
    /// 音频输出配置的描述信息
    /// </summary>

    std::vector<EncoderSettingsExpand_audio_descriptions>& getAudioDescriptions();
    bool audioDescriptionsIsSet() const;
    void unsetaudioDescriptions();
    void setAudioDescriptions(const std::vector<EncoderSettingsExpand_audio_descriptions>& value);

    /// <summary>
    /// 
    /// </summary>

    VideoDescriptions getVideoDescriptions() const;
    bool videoDescriptionsIsSet() const;
    void unsetvideoDescriptions();
    void setVideoDescriptions(const VideoDescriptions& value);


protected:
    std::vector<EncoderSettingsExpand_audio_descriptions> audioDescriptions_;
    bool audioDescriptionsIsSet_;
    VideoDescriptions videoDescriptions_;
    bool videoDescriptionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_EncoderSettingsExpand_H_
