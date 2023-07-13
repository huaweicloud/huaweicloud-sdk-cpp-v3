
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_Policy_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_Policy_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/PolicyTriggerResp.h>
#include <huaweicloud/cbr/v1/model/PolicyAssociateVault.h>
#include <string>
#include <vector>
#include <huaweicloud/cbr/v1/model/PolicyoODCreate.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  Policy
    : public ModelBase
{
public:
    Policy();
    virtual ~Policy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Policy members

    /// <summary>
    /// 策略是否启用
    /// </summary>

    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);

    /// <summary>
    /// 策略ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 策略名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PolicyoODCreate getOperationDefinition() const;
    bool operationDefinitionIsSet() const;
    void unsetoperationDefinition();
    void setOperationDefinition(const PolicyoODCreate& value);

    /// <summary>
    /// 策略类型,例如 ‘backup’：自动备份
    /// </summary>

    std::string getOperationType() const;
    bool operationTypeIsSet() const;
    void unsetoperationType();
    void setOperationType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PolicyTriggerResp getTrigger() const;
    bool triggerIsSet() const;
    void unsettrigger();
    void setTrigger(const PolicyTriggerResp& value);

    /// <summary>
    /// 关联的存储库
    /// </summary>

    std::vector<PolicyAssociateVault>& getAssociatedVaults();
    bool associatedVaultsIsSet() const;
    void unsetassociatedVaults();
    void setAssociatedVaults(const std::vector<PolicyAssociateVault>& value);


protected:
    bool enabled_;
    bool enabledIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    PolicyoODCreate operationDefinition_;
    bool operationDefinitionIsSet_;
    std::string operationType_;
    bool operationTypeIsSet_;
    PolicyTriggerResp trigger_;
    bool triggerIsSet_;
    std::vector<PolicyAssociateVault> associatedVaults_;
    bool associatedVaultsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_Policy_H_
