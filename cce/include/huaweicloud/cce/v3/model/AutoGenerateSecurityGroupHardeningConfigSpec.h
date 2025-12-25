
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_AutoGenerateSecurityGroupHardeningConfigSpec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_AutoGenerateSecurityGroupHardeningConfigSpec_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  AutoGenerateSecurityGroupHardeningConfigSpec
    : public ModelBase
{
public:
    AutoGenerateSecurityGroupHardeningConfigSpec();
    virtual ~AutoGenerateSecurityGroupHardeningConfigSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AutoGenerateSecurityGroupHardeningConfigSpec members

    /// <summary>
    /// **参数解释：** 自动创建安全组时可选择不开放node节点相关端口，支持单端口和端口段两种形式。示例如下： &#x60;&#x60;&#x60; \&quot;portsToDisable\&quot;: [\&quot;22\&quot;, \&quot;4090-4099\&quot;] &#x60;&#x60;&#x60; **约束限制：** 若指定了节点安全组SecurityGroup，该配置项将被忽略。 只针对CCE Standard和Turbo集群的node安全组生效，不支持master安全组，不支持eni安全组。 **取值范围：** 端口号仅支持整数，范围[1-65535] **默认取值：** 不涉及 
    /// </summary>

    std::vector<std::string>& getPortsToDisable();
    bool portsToDisableIsSet() const;
    void unsetportsToDisable();
    void setPortsToDisable(const std::vector<std::string>& value);


protected:
    std::vector<std::string> portsToDisable_;
    bool portsToDisableIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_AutoGenerateSecurityGroupHardeningConfigSpec_H_
