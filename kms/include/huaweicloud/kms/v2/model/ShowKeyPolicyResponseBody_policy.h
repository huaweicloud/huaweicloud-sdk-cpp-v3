
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_ShowKeyPolicyResponseBody_policy_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_ShowKeyPolicyResponseBody_policy_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kms/v2/model/ListKeyPolicyResponseBody_policy_validityPeriod.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 密钥策略 **取值范围：** 不涉及
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  ShowKeyPolicyResponseBody_policy
    : public ModelBase
{
public:
    ShowKeyPolicyResponseBody_policy();
    virtual ~ShowKeyPolicyResponseBody_policy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowKeyPolicyResponseBody_policy members

    /// <summary>
    /// **参数解释：** 密钥策略版本 **取值范围：** 不涉及
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ListKeyPolicyResponseBody_policy_validityPeriod getValidityPeriod() const;
    bool validityPeriodIsSet() const;
    void unsetvalidityPeriod();
    void setValidityPeriod(const ListKeyPolicyResponseBody_policy_validityPeriod& value);

    /// <summary>
    /// **参数解释：** 允许访问的接入点ID列表 **取值范围：** 不涉及
    /// </summary>

    std::vector<std::string>& getAllowedAccessPoint();
    bool allowedAccessPointIsSet() const;
    void unsetallowedAccessPoint();
    void setAllowedAccessPoint(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** 允许访问的数据安全专区ID列表 **取值范围：** 不涉及
    /// </summary>

    std::vector<std::string>& getAllowedDataSecurityZone();
    bool allowedDataSecurityZoneIsSet() const;
    void unsetallowedDataSecurityZone();
    void setAllowedDataSecurityZone(const std::vector<std::string>& value);


protected:
    std::string version_;
    bool versionIsSet_;
    ListKeyPolicyResponseBody_policy_validityPeriod validityPeriod_;
    bool validityPeriodIsSet_;
    std::vector<std::string> allowedAccessPoint_;
    bool allowedAccessPointIsSet_;
    std::vector<std::string> allowedDataSecurityZone_;
    bool allowedDataSecurityZoneIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_ShowKeyPolicyResponseBody_policy_H_
