
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateHotQuestionReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateHotQuestionReq_H_


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
/// 创建热点问题请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreateHotQuestionReq
    : public ModelBase
{
public:
    CreateHotQuestionReq();
    virtual ~CreateHotQuestionReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateHotQuestionReq members

    /// <summary>
    /// 机器人ID。
    /// </summary>

    std::string getRobotId() const;
    bool robotIdIsSet() const;
    void unsetrobotId();
    void setRobotId(const std::string& value);

    /// <summary>
    /// 热点问题。
    /// </summary>

    std::string getHotQuestion() const;
    bool hotQuestionIsSet() const;
    void unsethotQuestion();
    void setHotQuestion(const std::string& value);

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
    std::string hotQuestion_;
    bool hotQuestionIsSet_;
    LanguageEnum language_;
    bool languageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateHotQuestionReq_H_
