
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_AudioSelectorLangSelection_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_AudioSelectorLangSelection_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 音频选择器语言设置
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  AudioSelectorLangSelection
    : public ModelBase
{
public:
    AudioSelectorLangSelection();
    virtual ~AudioSelectorLangSelection();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AudioSelectorLangSelection members

    /// <summary>
    /// 语言简称，输入2或3个小写字母的语言代码。
    /// </summary>

    std::string getLanguageCode() const;
    bool languageCodeIsSet() const;
    void unsetlanguageCode();
    void setLanguageCode(const std::string& value);

    /// <summary>
    /// 语言输出策略。  取值如下： - LOOSE：宽松匹配，示例“eng”会优先匹配源流中语言为English的音轨，如果匹配不到，则选择PID最小的音轨。 - STRICT：严格匹配，示例“eng”会严格匹配源流中语言为English的音轨，如果匹配不到，媒体直播服务会自动补齐一个静音分片，当终端使用此音频选择器播放视频时，会静音播放。
    /// </summary>

    std::string getLanguageSelectionPolicy() const;
    bool languageSelectionPolicyIsSet() const;
    void unsetlanguageSelectionPolicy();
    void setLanguageSelectionPolicy(const std::string& value);


protected:
    std::string languageCode_;
    bool languageCodeIsSet_;
    std::string languageSelectionPolicy_;
    bool languageSelectionPolicyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_AudioSelectorLangSelection_H_
