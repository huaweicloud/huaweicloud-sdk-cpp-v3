
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateProvisioningTemplate_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateProvisioningTemplate_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/iotda/v5/model/ProvisioningTemplateBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新预调配模板请求体。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  UpdateProvisioningTemplate
    : public ModelBase
{
public:
    UpdateProvisioningTemplate();
    virtual ~UpdateProvisioningTemplate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateProvisioningTemplate members

    /// <summary>
    /// **参数说明**：预调配模板的描述信息。 **取值范围**：长度不超过2048，只允许中文、字母、数字、以及_?&#39;#().,&amp;%@!-等字符的组合
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ProvisioningTemplateBody getTemplateBody() const;
    bool templateBodyIsSet() const;
    void unsettemplateBody();
    void setTemplateBody(const ProvisioningTemplateBody& value);


protected:
    std::string description_;
    bool descriptionIsSet_;
    ProvisioningTemplateBody templateBody_;
    bool templateBodyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateProvisioningTemplate_H_
