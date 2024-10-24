
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_AudioSelectorSettings_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_AudioSelectorSettings_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/AudioSelectorPidSelection.h>
#include <huaweicloud/live/v1/model/AudioSelectorLangSelection.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 设置音频选择器
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  AudioSelectorSettings
    : public ModelBase
{
public:
    AudioSelectorSettings();
    virtual ~AudioSelectorSettings();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AudioSelectorSettings members

    /// <summary>
    /// 
    /// </summary>

    AudioSelectorLangSelection getAudioLanguageSelection() const;
    bool audioLanguageSelectionIsSet() const;
    void unsetaudioLanguageSelection();
    void setAudioLanguageSelection(const AudioSelectorLangSelection& value);

    /// <summary>
    /// 
    /// </summary>

    AudioSelectorPidSelection getAudioPidSelection() const;
    bool audioPidSelectionIsSet() const;
    void unsetaudioPidSelection();
    void setAudioPidSelection(const AudioSelectorPidSelection& value);


protected:
    AudioSelectorLangSelection audioLanguageSelection_;
    bool audioLanguageSelectionIsSet_;
    AudioSelectorPidSelection audioPidSelection_;
    bool audioPidSelectionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_AudioSelectorSettings_H_
