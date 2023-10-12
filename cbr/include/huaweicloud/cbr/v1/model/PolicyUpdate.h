
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_PolicyUpdate_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_PolicyUpdate_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  PolicyUpdate
    : public ModelBase
{
public:
    PolicyUpdate();
    virtual ~PolicyUpdate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PolicyUpdate members

    /// <summary>
    /// 是否启用策略
    /// </summary>

    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);

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
    /// 
    /// </summary>

    PolicyTriggerReq getTrigger() const;
    bool triggerIsSet() const;
    void unsettrigger();
    void setTrigger(const PolicyTriggerReq& value);


protected:
    bool enabled_;
    bool enabledIsSet_;
    std::string name_;
    bool nameIsSet_;
    PolicyoODCreate operationDefinition_;
    bool operationDefinitionIsSet_;
    PolicyTriggerReq trigger_;
    bool triggerIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_PolicyUpdate_H_
