
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_OrganizationPolicy_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_OrganizationPolicy_H_


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
/// 组织策略
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  OrganizationPolicy
    : public ModelBase
{
public:
    OrganizationPolicy();
    virtual ~OrganizationPolicy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OrganizationPolicy members

    /// <summary>
    /// 组织策略ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

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
    /// 组织策略类型 - backup: 备份 -  replication: 复制
    /// </summary>

    std::string getOperationType() const;
    bool operationTypeIsSet() const;
    void unsetoperationType();
    void setOperationType(const std::string& value);

    /// <summary>
    /// 组织策略所属账号ID
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

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

    /// <summary>
    /// 组织策略状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 组织策略所属账号
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string operationType_;
    bool operationTypeIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string policyName_;
    bool policyNameIsSet_;
    bool policyEnabled_;
    bool policyEnabledIsSet_;
    PolicyoODCreate policyOperationDefinition_;
    bool policyOperationDefinitionIsSet_;
    PolicyTriggerReq policyTrigger_;
    bool policyTriggerIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string domainName_;
    bool domainNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_OrganizationPolicy_H_
