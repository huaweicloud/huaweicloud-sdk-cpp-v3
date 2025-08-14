
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DeleteRuleRequest_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DeleteRuleRequest_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  DeleteRuleRequest
    : public ModelBase
{
public:
    DeleteRuleRequest();
    virtual ~DeleteRuleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteRuleRequest members

    /// <summary>
    /// **参数说明**：实例ID。物理多租下各实例的唯一标识，一般华为云租户无需携带该参数，仅在物理多租场景下从管理面访问API时需要携带该参数。您可以在IoTDA管理控制台界面，选择左侧导航栏“总览”页签查看当前实例的ID。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数说明**：规则ID，用于唯一标识一条规则，在创建规则时由物联网平台分配获得。 **取值范围**：长度不超过32，只允许字母、数字的组合。
    /// </summary>

    std::string getRuleId() const;
    bool ruleIdIsSet() const;
    void unsetruleId();
    void setRuleId(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string ruleId_;
    bool ruleIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteRuleRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteRuleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DeleteRuleRequest_H_
