
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateWelcomeSpeechReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateWelcomeSpeechReq_H_


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
/// 创建欢迎词请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreateWelcomeSpeechReq
    : public ModelBase
{
public:
    CreateWelcomeSpeechReq();
    virtual ~CreateWelcomeSpeechReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateWelcomeSpeechReq members

    /// <summary>
    /// 应用ID。
    /// </summary>

    std::string getRobotId() const;
    bool robotIdIsSet() const;
    void unsetrobotId();
    void setRobotId(const std::string& value);

    /// <summary>
    /// 欢迎词。
    /// </summary>

    std::string getWelcomeSpeech() const;
    bool welcomeSpeechIsSet() const;
    void unsetwelcomeSpeech();
    void setWelcomeSpeech(const std::string& value);

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
    std::string welcomeSpeech_;
    bool welcomeSpeechIsSet_;
    LanguageEnum language_;
    bool languageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateWelcomeSpeechReq_H_
