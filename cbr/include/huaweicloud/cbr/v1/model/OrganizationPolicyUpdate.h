
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_OrganizationPolicyUpdate_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_OrganizationPolicyUpdate_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cbr/v1/model/PolicyoODCreate.h>
#include <huaweicloud/cbr/v1/model/PolicyTriggerReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新组织策略body体
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  OrganizationPolicyUpdate
    : public ModelBase
{
public:
    OrganizationPolicyUpdate();
    virtual ~OrganizationPolicyUpdate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OrganizationPolicyUpdate members

    /// <summary>
    /// 组织策略名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 组织策略描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 策略名称
    /// </summary>

    std::string getPolicyName() const;
    bool policyNameIsSet() const;
    void unsetpolicyName();
    void setPolicyName(const std::string& value);

    /// <summary>
    /// 策略是否开启
    /// </summary>

    bool isPolicyEnabled() const;
    bool policyEnabledIsSet() const;
    void unsetpolicyEnabled();
    void setPolicyEnabled(bool value);

    /// <summary>
    /// 
    /// </summary>

    PolicyoODCreate getPolicyOperationDefinition() const;
    bool policyOperationDefinitionIsSet() const;
    void unsetpolicyOperationDefinition();
    void setPolicyOperationDefinition(const PolicyoODCreate& value);

    /// <summary>
    /// 
    /// </summary>

    PolicyTriggerReq getPolicyTrigger() const;
    bool policyTriggerIsSet() const;
    void unsetpolicyTrigger();
    void setPolicyTrigger(const PolicyTriggerReq& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string policyName_;
    bool policyNameIsSet_;
    bool policyEnabled_;
    bool policyEnabledIsSet_;
    PolicyoODCreate policyOperationDefinition_;
    bool policyOperationDefinitionIsSet_;
    PolicyTriggerReq policyTrigger_;
    bool policyTriggerIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_OrganizationPolicyUpdate_H_
