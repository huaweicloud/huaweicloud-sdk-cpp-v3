
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ChangeDeploymentSolutionRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ChangeDeploymentSolutionRequestBody_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**: 部署方案变更请求体。 **约束限制**: 不涉及。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ChangeDeploymentSolutionRequestBody
    : public ModelBase
{
public:
    ChangeDeploymentSolutionRequestBody();
    virtual ~ChangeDeploymentSolutionRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChangeDeploymentSolutionRequestBody members

    /// <summary>
    /// **参数解释**: 变更后的目标部署形态。 **约束限制**: 必填。取值需为当前实例允许变更的目标形态。 **取值范围**: - logger：一主一备一日志节点 - triset：一主两备三节点  **默认取值**: 不涉及。
    /// </summary>

    std::string getSolution() const;
    bool solutionIsSet() const;
    void unsetsolution();
    void setSolution(const std::string& value);

    /// <summary>
    /// **参数解释**: 部署可用区，多个可用区以英文逗号\&quot;,\&quot;隔开。 **约束限制**: 必填。不可包含 []()^%&amp;\\\\&#39;&#x60;|\&quot;;&#x3D;?$&lt;&gt; 等特殊字符。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// **参数解释**: 主可用区。 **约束限制**: 不填时默认使用当前主可用区。 **取值范围**: 不涉及。 **默认取值**: 当前实例的主可用区。
    /// </summary>

    std::string getMasterAz() const;
    bool masterAzIsSet() const;
    void unsetmasterAz();
    void setMasterAz(const std::string& value);

    /// <summary>
    /// **参数解释**: 日志可用区。 **约束限制**: 带日志节点的部署形态（如 logger）需要传该参数。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getLoggerAz() const;
    bool loggerAzIsSet() const;
    void unsetloggerAz();
    void setLoggerAz(const std::string& value);


protected:
    std::string solution_;
    bool solutionIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    std::string masterAz_;
    bool masterAzIsSet_;
    std::string loggerAz_;
    bool loggerAzIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ChangeDeploymentSolutionRequestBody_H_
