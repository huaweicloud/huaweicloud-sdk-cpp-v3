
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateWelcomeSpeechSwitchReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateWelcomeSpeechSwitchReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/LanguageEnum.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改欢迎词功能开关请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  UpdateWelcomeSpeechSwitchReq
    : public ModelBase
{
public:
    UpdateWelcomeSpeechSwitchReq();
    virtual ~UpdateWelcomeSpeechSwitchReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateWelcomeSpeechSwitchReq members

    /// <summary>
    /// 应用ID。
    /// </summary>

    std::string getRobotId() const;
    bool robotIdIsSet() const;
    void unsetrobotId();
    void setRobotId(const std::string& value);

    /// <summary>
    /// 欢迎词功能开关。
    /// </summary>

    bool isEnableWelcomeSpeech() const;
    bool enableWelcomeSpeechIsSet() const;
    void unsetenableWelcomeSpeech();
    void setEnableWelcomeSpeech(bool value);

    /// <summary>
    /// 
    /// </summary>

    LanguageEnum getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const LanguageEnum& value);


protected:
    std::string robotId_;
    bool robotIdIsSet_;
    bool enableWelcomeSpeech_;
    bool enableWelcomeSpeechIsSet_;
    LanguageEnum language_;
    bool languageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateWelcomeSpeechSwitchReq_H_
