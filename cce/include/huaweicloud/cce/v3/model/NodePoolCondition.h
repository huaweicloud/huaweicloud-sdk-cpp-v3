
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePoolCondition_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePoolCondition_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 节点池/伸缩组详细状态。
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  NodePoolCondition
    : public ModelBase
{
public:
    NodePoolCondition();
    virtual ~NodePoolCondition();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodePoolCondition members

    /// <summary>
    /// **参数解释**： 状态类型。 **约束限制**： 不涉及 **取值范围**： - \&quot;TaintSynchronizing\&quot;: 节点池正在同步节点K8s污点，不影响节点池可扩容状态（该状态类型为节点池级别，伸缩组中无该状态类型）。 - \&quot;LabelSynchronizing\&quot;: 节点池正在同步节点K8s标签，不影响节点池可扩容状态（该状态类型为节点池级别，伸缩组中无该状态类型）。 - \&quot;UserTagsSynchronizing\&quot;: 节点池正在同步节点资源标签，不影响节点池可扩容状态（该状态类型为节点池级别，伸缩组中无该状态类型）。 - \&quot;ConfigurationSynchronizing\&quot;: 节点池正在同步节点配置，不影响节点池可扩容状态（该状态类型为节点池级别，伸缩组中无该状态类型）。 - \&quot;Scalable\&quot;：节点池/伸缩组实际的可扩容状态，如果状态为\&quot;False\&quot;时则不会再次触发节点池扩容行为。 - \&quot;QuotaInsufficient\&quot;：节点池/伸缩组扩容依赖的配额不足，影响节点池可扩容状态。 - \&quot;ResourceInsufficient\&quot;：节点池/伸缩组扩容依赖的资源不足，影响节点池可扩容状态。 - \&quot;UnexpectedError\&quot;：节点池/伸缩组非预期扩容失败，影响节点池可扩容状态。 [- \&quot;LockedByOrder\&quot;：节点池/伸缩组被订单锁定，此时Reason为待支付订单ID。](tag:hws,hws_hk) - \&quot;Error\&quot;：节点池/伸缩组错误，通常由于删除失败触发。  **默认取值**： 不涉及
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// Condition当前状态，取值如下 - \&quot;True\&quot; - \&quot;False\&quot; 
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 上次状态检查时间。
    /// </summary>

    std::string getLastProbeTime() const;
    bool lastProbeTimeIsSet() const;
    void unsetlastProbeTime();
    void setLastProbeTime(const std::string& value);

    /// <summary>
    /// 上次状态变更时间。
    /// </summary>

    std::string getLastTransitTime() const;
    bool lastTransitTimeIsSet() const;
    void unsetlastTransitTime();
    void setLastTransitTime(const std::string& value);

    /// <summary>
    /// 上次状态变更原因。
    /// </summary>

    std::string getReason() const;
    bool reasonIsSet() const;
    void unsetreason();
    void setReason(const std::string& value);

    /// <summary>
    /// Condition详细描述。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string lastProbeTime_;
    bool lastProbeTimeIsSet_;
    std::string lastTransitTime_;
    bool lastTransitTimeIsSet_;
    std::string reason_;
    bool reasonIsSet_;
    std::string message_;
    bool messageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePoolCondition_H_
