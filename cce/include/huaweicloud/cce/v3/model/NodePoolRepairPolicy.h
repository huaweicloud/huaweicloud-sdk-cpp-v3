
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePoolRepairPolicy_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePoolRepairPolicy_H_


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
/// 节点故障自愈配置
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  NodePoolRepairPolicy
    : public ModelBase
{
public:
    NodePoolRepairPolicy();
    virtual ~NodePoolRepairPolicy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodePoolRepairPolicy members

    /// <summary>
    /// **参数解释**： 系统与 K8s 组件异常时是否启用policy中配置的自愈策略。 **约束限制**： 不涉及 **取值范围**： - false：使用基础自愈策略 - true：使用policy中配置的自愈策略  **默认取值**： false
    /// </summary>

    bool isEnable() const;
    bool enableIsSet() const;
    void unsetenable();
    void setEnable(bool value);

    /// <summary>
    /// **参数解释**： 节点自愈的恢复策略 **约束限制**： - 当 enable 为 true 时，此字段必填。 - 当 enable 为 false 时，此字段无效，用户填写任意值均不会生效，系统使用基础自愈策略。  **取值范围**： - restartNode：系统与 K8s 组件异常时允许通过重启节点自愈  **默认取值**： 不涉及
    /// </summary>

    std::string getPolicy() const;
    bool policyIsSet() const;
    void unsetpolicy();
    void setPolicy(const std::string& value);


protected:
    bool enable_;
    bool enableIsSet_;
    std::string policy_;
    bool policyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePoolRepairPolicy_H_
