
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CreateAuthenticationTemplate_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CreateAuthenticationTemplate_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/iotda/v5/model/AuthenticationTemplateBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建鉴权模板请求体。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  CreateAuthenticationTemplate
    : public ModelBase
{
public:
    CreateAuthenticationTemplate();
    virtual ~CreateAuthenticationTemplate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAuthenticationTemplate members

    /// <summary>
    /// **参数说明**：鉴权模板名称。 **取值范围**：长度不超过128，只允许字母、数字、下划线（_）、连接符（-）的组合。
    /// </summary>

    std::string getTemplateName() const;
    bool templateNameIsSet() const;
    void unsettemplateName();
    void setTemplateName(const std::string& value);

    /// <summary>
    /// **参数说明**：鉴权模板的描述信息。 **取值范围**：长度不超过2048，只允许中文、字母、数字、以及_?&#39;#().,&amp;%@!-等字符的组合
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数说明**：是否激活该鉴权模板，默认状态为未激活，只能有一个激活状态模板 - ACTIVE：该鉴权模板为激活状态。 - INACTIVE：该鉴权模板为停用状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AuthenticationTemplateBody getTemplateBody() const;
    bool templateBodyIsSet() const;
    void unsettemplateBody();
    void setTemplateBody(const AuthenticationTemplateBody& value);


protected:
    std::string templateName_;
    bool templateNameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string status_;
    bool statusIsSet_;
    AuthenticationTemplateBody templateBody_;
    bool templateBodyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CreateAuthenticationTemplate_H_
