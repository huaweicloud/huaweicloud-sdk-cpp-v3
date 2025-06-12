
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CoStreamerConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CoStreamerConfig_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/VoiceConfig.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 助播配置
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CoStreamerConfig
    : public ModelBase
{
public:
    CoStreamerConfig();
    virtual ~CoStreamerConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CoStreamerConfig members

    /// <summary>
    /// 
    /// </summary>

    VoiceConfig getVoiceConfig() const;
    bool voiceConfigIsSet() const;
    void unsetvoiceConfig();
    void setVoiceConfig(const VoiceConfig& value);

    /// <summary>
    /// **参数解释**： 助播出声时主播行为设置。 **约束限制**： 不涉及 **取值范围**： * SILENCE：静默 * VOLUME_DOWN：音量降低  **默认取值**： 不涉及。
    /// </summary>

    std::string getStreamerAction() const;
    bool streamerActionIsSet() const;
    void unsetstreamerAction();
    void setStreamerAction(const std::string& value);


protected:
    VoiceConfig voiceConfig_;
    bool voiceConfigIsSet_;
    std::string streamerAction_;
    bool streamerActionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CoStreamerConfig_H_
