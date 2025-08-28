
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateInteractiveChatReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateInteractiveChatReq_H_


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
/// 创建交互助手对话请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreateInteractiveChatReq
    : public ModelBase
{
public:
    CreateInteractiveChatReq();
    virtual ~CreateInteractiveChatReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateInteractiveChatReq members

    /// <summary>
    /// 角色ID。
    /// </summary>

    std::string getRoleId() const;
    bool roleIdIsSet() const;
    void unsetroleId();
    void setRoleId(const std::string& value);

    /// <summary>
    /// 问题
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 当前对话的唯一标识，用于关联对话上下文内容。
    /// </summary>

    std::string getSessionId() const;
    bool sessionIdIsSet() const;
    void unsetsessionId();
    void setSessionId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    LanguageEnum getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const LanguageEnum& value);


protected:
    std::string roleId_;
    bool roleIdIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::string sessionId_;
    bool sessionIdIsSet_;
    LanguageEnum language_;
    bool languageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateInteractiveChatReq_H_
