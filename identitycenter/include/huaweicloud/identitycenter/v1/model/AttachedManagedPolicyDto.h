
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_AttachedManagedPolicyDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_AttachedManagedPolicyDto_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 系统身份策略详细信息
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  AttachedManagedPolicyDto
    : public ModelBase
{
public:
    AttachedManagedPolicyDto();
    virtual ~AttachedManagedPolicyDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AttachedManagedPolicyDto members

    /// <summary>
    /// IAM系统身份策略唯一标识
    /// </summary>

    std::string getPolicyId() const;
    bool policyIdIsSet() const;
    void unsetpolicyId();
    void setPolicyId(const std::string& value);

    /// <summary>
    /// IAM系统身份策略名称
    /// </summary>

    std::string getPolicyName() const;
    bool policyNameIsSet() const;
    void unsetpolicyName();
    void setPolicyName(const std::string& value);


protected:
    std::string policyId_;
    bool policyIdIsSet_;
    std::string policyName_;
    bool policyNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_AttachedManagedPolicyDto_H_
