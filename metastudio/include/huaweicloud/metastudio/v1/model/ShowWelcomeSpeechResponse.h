
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowWelcomeSpeechResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowWelcomeSpeechResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShowWelcomeSpeechResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowWelcomeSpeechResponse();
    virtual ~ShowWelcomeSpeechResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowWelcomeSpeechResponse members

    /// <summary>
    /// 欢迎词ID。
    /// </summary>

    std::string getWelcomeSpeechId() const;
    bool welcomeSpeechIdIsSet() const;
    void unsetwelcomeSpeechId();
    void setWelcomeSpeechId(const std::string& value);

    /// <summary>
    /// 欢迎词。
    /// </summary>

    std::string getWelcomeSpeech() const;
    bool welcomeSpeechIsSet() const;
    void unsetwelcomeSpeech();
    void setWelcomeSpeech(const std::string& value);

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

    /// <summary>
    /// 应用ID。
    /// </summary>

    std::string getRobotId() const;
    bool robotIdIsSet() const;
    void unsetrobotId();
    void setRobotId(const std::string& value);

    /// <summary>
    /// 创建时间，格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 更新时间，格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;。
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string welcomeSpeechId_;
    bool welcomeSpeechIdIsSet_;
    std::string welcomeSpeech_;
    bool welcomeSpeechIsSet_;
    bool enableWelcomeSpeech_;
    bool enableWelcomeSpeechIsSet_;
    LanguageEnum language_;
    bool languageIsSet_;
    std::string robotId_;
    bool robotIdIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowWelcomeSpeechResponse_H_
