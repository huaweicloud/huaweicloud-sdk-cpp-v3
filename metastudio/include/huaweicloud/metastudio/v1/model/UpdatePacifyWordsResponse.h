
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdatePacifyWordsResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdatePacifyWordsResponse_H_


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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  UpdatePacifyWordsResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdatePacifyWordsResponse();
    virtual ~UpdatePacifyWordsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdatePacifyWordsResponse members

    /// <summary>
    /// 安抚话术ID。
    /// </summary>

    std::string getPacifyWordsId() const;
    bool pacifyWordsIdIsSet() const;
    void unsetpacifyWordsId();
    void setPacifyWordsId(const std::string& value);

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

    /// <summary>
    /// 应用ID。
    /// </summary>

    std::string getRobotId() const;
    bool robotIdIsSet() const;
    void unsetrobotId();
    void setRobotId(const std::string& value);

    /// <summary>
    /// 安抚话术类型 &gt; 0:通用安抚话术, 1:基于意图匹配安抚话术
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
    std::string pacifyWordsId_;
    bool pacifyWordsIdIsSet_;
    std::string pacifyWords_;
    bool pacifyWordsIsSet_;
    LanguageEnum language_;
    bool languageIsSet_;
    std::string robotId_;
    bool robotIdIsSet_;
    int32_t pacifyWordsType_;
    bool pacifyWordsTypeIsSet_;
    std::string intent_;
    bool intentIsSet_;
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

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdatePacifyWordsResponse_H_
