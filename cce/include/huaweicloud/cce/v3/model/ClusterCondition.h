
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterCondition_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterCondition_H_


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
/// 集群详细状态。
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ClusterCondition
    : public ModelBase
{
public:
    ClusterCondition();
    virtual ~ClusterCondition();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ClusterCondition members

    /// <summary>
    /// **参数解释**： 状态类型。 **约束限制**： 不涉及 **取值范围**： - \&quot;AgencyAvailable\&quot;: CCE集群自定义委托的状态。 - \&quot;ClusterCertificate\&quot;: CCE集群证书的状态。 - \&quot;ClusterCustomCertificate\&quot;: CCE集群自有证书的状态。 - \&quot;CertificateRotation\&quot;: CCE集群证书更新的状态。 - \&quot;CustomCertificateRotation\&quot;: CCE集群自有证书更新的状态。 - \&quot;OpenIDConnectProcessing\&quot;: CCE集群开启OIDC特性处理中状态。 - \&quot;OpenIDConnectProcessSuccess\&quot;: CCE集群开启OIDC特性成功状态。 - \&quot;OpenIDConnectProcessFailed\&quot;: CCE集群开启OIDC特性失败状态。  **默认取值**： 不涉及
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**： Condition当前状态。 **约束限制**： 不涉及 **取值范围**： - \&quot;True\&quot; - \&quot;False\&quot;  **默认取值**： 不涉及
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**： 上次状态检查时间。 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getLastProbeTime() const;
    bool lastProbeTimeIsSet() const;
    void unsetlastProbeTime();
    void setLastProbeTime(const std::string& value);

    /// <summary>
    /// **参数解释**： 上次状态变更时间。 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getLastTransitTime() const;
    bool lastTransitTimeIsSet() const;
    void unsetlastTransitTime();
    void setLastTransitTime(const std::string& value);

    /// <summary>
    /// **参数解释**： 上次状态变更原因。 **约束限制**： 不涉及 **取值范围**： - type为ClusterCertificate、ClusterCustomCertificate时取值范围：   - CertificateValid：证书状态正常   - CertificateExpiringWithin180Days：证书有效期低于180天   - CertificateExpiringWithin30Days：证书有效期低于30天   - CertificateExpired：证书已过期 - type为CertificateRotation、CustomCertificateRotation时取值范围：   - RotationInProgress：更新中   - RotationSucceeded：更新成功   - RotationFailed：更新失败  **默认取值**： 不涉及
    /// </summary>

    std::string getReason() const;
    bool reasonIsSet() const;
    void unsetreason();
    void setReason(const std::string& value);

    /// <summary>
    /// **参数解释**： Condition详细描述。 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
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

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterCondition_H_
