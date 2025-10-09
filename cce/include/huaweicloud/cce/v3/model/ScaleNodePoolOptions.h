
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ScaleNodePoolOptions_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ScaleNodePoolOptions_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/ScaleUpBillingConfigOverride.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 节点池伸缩选项配置
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ScaleNodePoolOptions
    : public ModelBase
{
public:
    ScaleNodePoolOptions();
    virtual ~ScaleNodePoolOptions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ScaleNodePoolOptions members

    /// <summary>
    /// 扩容状态检查策略: instant(同步检查), async(异步检查)。默认同步检查instant 
    /// </summary>

    std::string getScalableChecking() const;
    bool scalableCheckingIsSet() const;
    void unsetscalableChecking();
    void setScalableChecking(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩容的策略，允许为空，该参数scaleGroups传多项时有效。 **约束限制**： 不涉及 **取值范围**： - AZBalance：AZ优先策略，扩容节点池时，系统会使各个AZ间的节点数尽可能的均衡，规格会在所选伸缩组中随机指定。该策略适用于对节点成本和可用区无特殊要求的场景，优点是配置简便、降低单点故障风险。注意：如果某个AZ资源不足，该AZ期望的扩容节点会向其他AZ扩容，可能会使AZ间节点不均衡。如需解决该问题，可在该AZ资源充足时尝试再次扩容。 - Random：随机策略，从下发的规格scaleGroups列表中随机选择伸缩组扩容。  **默认取值**： Random 
    /// </summary>

    std::string getScalePolicy() const;
    bool scalePolicyIsSet() const;
    void unsetscalePolicy();
    void setScalePolicy(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ScaleUpBillingConfigOverride getBillingConfigOverride() const;
    bool billingConfigOverrideIsSet() const;
    void unsetbillingConfigOverride();
    void setBillingConfigOverride(const ScaleUpBillingConfigOverride& value);


protected:
    std::string scalableChecking_;
    bool scalableCheckingIsSet_;
    std::string scalePolicy_;
    bool scalePolicyIsSet_;
    ScaleUpBillingConfigOverride billingConfigOverride_;
    bool billingConfigOverrideIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ScaleNodePoolOptions_H_
