
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateAuthenticationTemplate_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateAuthenticationTemplate_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/UpdateAuthenticationTemplateBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新鉴权模板请求体。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  UpdateAuthenticationTemplate
    : public ModelBase
{
public:
    UpdateAuthenticationTemplate();
    virtual ~UpdateAuthenticationTemplate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateAuthenticationTemplate members

    /// <summary>
    /// **参数说明**：鉴权模板的描述信息。 **取值范围**：长度不超过2048，只允许中文、字母、数字、以及_?&#39;#().,&amp;%@!-等字符的组合
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数说明**：是否激活该鉴权模板 - ACTIVE：该鉴权模板为激活状态。 - INACTIVE：该鉴权模板为停用状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateAuthenticationTemplateBody getTemplateBody() const;
    bool templateBodyIsSet() const;
    void unsettemplateBody();
    void setTemplateBody(const UpdateAuthenticationTemplateBody& value);


protected:
    std::string description_;
    bool descriptionIsSet_;
    std::string status_;
    bool statusIsSet_;
    UpdateAuthenticationTemplateBody templateBody_;
    bool templateBodyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateAuthenticationTemplate_H_
