
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ProvisioningTemplateBody_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ProvisioningTemplateBody_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/TemplateResource.h>
#include <huaweicloud/core/utils/Object.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 预调配模板详细内容。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ProvisioningTemplateBody
    : public ModelBase
{
public:
    ProvisioningTemplateBody();
    virtual ~ProvisioningTemplateBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProvisioningTemplateBody members

    /// <summary>
    /// **参数说明**：预调配模板参数， ，配置格式为{\&quot;parameter\&quot;:{\&quot;type\&quot;:\&quot;String\&quot;}} ，其中parameter目前支持从预调配设备的证书的使用者字段提取内容，证书必须包含模板中定义的所有参数值，华为云IoT平台定义了可在预调配模板中声明和引用的如下参数: - iotda::certificate::country (国家/地区,C ) - iotda::certificate::organization (组织,O) - iotda::certificate::organizational_unit (组织单位,OU) - iotda::certificate::distinguished_name_qualifier (可辨别名称限定符,dnQualifier) - iotda::certificate::state_name (省市,ST) - iotda::certificate::common_name (公用名,CN) - iotda::certificate::serial_number (序列号,serialNumber)  type描述parameter的类型，目前仅支持string。  配置样例：  &#39;{\&quot;iotda::certificate::country\&quot;:{\&quot;type\&quot;:\&quot;String\&quot;},  \&quot;iotda::certificate::organization\&quot;:{\&quot;type\&quot;:\&quot;String\&quot;},  \&quot;iotda::certificate::organizational_unit\&quot;:{\&quot;type\&quot;:\&quot;String\&quot;},  \&quot;iotda::certificate::distinguished_name_qualifier\&quot;:{\&quot;type\&quot;:\&quot;String\&quot;},  \&quot;iotda::certificate::state_name\&quot;:{\&quot;type\&quot;:\&quot;String\&quot;},  \&quot;iotda::certificate::common_name\&quot;:{\&quot;type\&quot;:\&quot;String\&quot;},  \&quot;iotda::certificate::serial_number\&quot;:{\&quot;type\&quot;:\&quot;String\&quot;}}&#39;
    /// </summary>

    Object getParameters() const;
    bool parametersIsSet() const;
    void unsetparameters();
    void setParameters(const Object& value);

    /// <summary>
    /// 
    /// </summary>

    TemplateResource getResources() const;
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const TemplateResource& value);


protected:
    Object parameters_;
    bool parametersIsSet_;
    TemplateResource resources_;
    bool resourcesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ProvisioningTemplateBody_H_
