
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_InputAudioSelector_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_InputAudioSelector_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/live/v1/model/AudioSelectorSettings.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 音频选择器
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  InputAudioSelector
    : public ModelBase
{
public:
    InputAudioSelector();
    virtual ~InputAudioSelector();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InputAudioSelector members

    /// <summary>
    /// 音频选择器的名称。仅支持大小写字母、数字、中划线和下划线。  同一个频道中每个选择器的名称需要唯一。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AudioSelectorSettings getSelectorSettings() const;
    bool selectorSettingsIsSet() const;
    void unsetselectorSettings();
    void setSelectorSettings(const AudioSelectorSettings& value);


protected:
    std::string name_;
    bool nameIsSet_;
    AudioSelectorSettings selectorSettings_;
    bool selectorSettingsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_InputAudioSelector_H_
