
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreatePacifyWordsReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreatePacifyWordsReq_H_


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
/// 创建安抚话术请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreatePacifyWordsReq
    : public ModelBase
{
public:
    CreatePacifyWordsReq();
    virtual ~CreatePacifyWordsReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreatePacifyWordsReq members

    /// <summary>
    /// 应用ID。
    /// </summary>

    std::string getRobotId() const;
    bool robotIdIsSet() const;
    void unsetrobotId();
    void setRobotId(const std::string& value);

    /// <summary>
    /// 安抚话术类型 &gt; 0:通用安抚话术, 1:意图匹配安抚话术
    /// </summary>

    int32_t getPacifyWordsType() const;
    bool pacifyWordsTypeIsSet() const;
    void unsetpacifyWordsType();
    void setPacifyWordsType(int32_t value);

    /// <summary>
    /// 意图名称
    /// </summary>

    std::string getIntent() const;
    bool intentIsSet() const;
    void unsetintent();
    void setIntent(const std::string& value);

    /// <summary>
    /// 安抚话术。
    /// </summary>

    std::string getPacifyWords() const;
    bool pacifyWordsIsSet() const;
    void unsetpacifyWords();
    void setPacifyWords(const std::string& value);

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
    int32_t pacifyWordsType_;
    bool pacifyWordsTypeIsSet_;
    std::string intent_;
    bool intentIsSet_;
    std::string pacifyWords_;
    bool pacifyWordsIsSet_;
    LanguageEnum language_;
    bool languageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreatePacifyWordsReq_H_
