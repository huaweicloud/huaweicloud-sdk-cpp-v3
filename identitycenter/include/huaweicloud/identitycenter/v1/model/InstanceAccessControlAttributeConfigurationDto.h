
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_InstanceAccessControlAttributeConfigurationDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_InstanceAccessControlAttributeConfigurationDto_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenter/v1/model/AccessControlAttributeDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Specifies the attributes to add to your attribute-based access control (ABAC) configuration.
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  InstanceAccessControlAttributeConfigurationDto
    : public ModelBase
{
public:
    InstanceAccessControlAttributeConfigurationDto();
    virtual ~InstanceAccessControlAttributeConfigurationDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InstanceAccessControlAttributeConfigurationDto members

    /// <summary>
    /// IAM Identity Center实例中ABAC配置的属性
    /// </summary>

    std::vector<AccessControlAttributeDto>& getAccessControlAttributes();
    bool accessControlAttributesIsSet() const;
    void unsetaccessControlAttributes();
    void setAccessControlAttributes(const std::vector<AccessControlAttributeDto>& value);


protected:
    std::vector<AccessControlAttributeDto> accessControlAttributes_;
    bool accessControlAttributesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_InstanceAccessControlAttributeConfigurationDto_H_
