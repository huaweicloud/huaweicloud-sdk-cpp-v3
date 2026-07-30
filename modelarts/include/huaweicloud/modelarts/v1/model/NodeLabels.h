
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeLabels_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeLabels_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：节点的标签信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NodeLabels
    : public ModelBase
{
public:
    NodeLabels();
    virtual ~NodeLabels();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeLabels members

    /// <summary>
    /// **参数解释**：节点所在的集群名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getOsModelartsNodeCluster() const;
    bool osModelartsNodeClusterIsSet() const;
    void unsetosModelartsNodeCluster();
    void setOsModelartsNodeCluster(const std::string& value);

    /// <summary>
    /// **参数解释**：节点绑定的逻辑池。 **取值范围**：不涉及。
    /// </summary>

    std::string getOsModelartsNodeElasticQuota() const;
    bool osModelartsNodeElasticQuotaIsSet() const;
    void unsetosModelartsNodeElasticQuota();
    void setOsModelartsNodeElasticQuota(const std::string& value);

    /// <summary>
    /// **参数解释**：节点所在的节点池id。 **取值范围**：不涉及。
    /// </summary>

    std::string getOsModelartsNodeNodepool() const;
    bool osModelartsNodeNodepoolIsSet() const;
    void unsetosModelartsNodeNodepool();
    void setOsModelartsNodeNodepool(const std::string& value);

    /// <summary>
    /// **参数解释**：批量创建批次标识。 **取值范围**：不涉及。
    /// </summary>

    std::string getOsModelartsNodeBatchUid() const;
    bool osModelartsNodeBatchUidIsSet() const;
    void unsetosModelartsNodeBatchUid();
    void setOsModelartsNodeBatchUid(const std::string& value);

    /// <summary>
    /// **参数解释**：批量创建批次名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getOsModelartsNodeBatchName() const;
    bool osModelartsNodeBatchNameIsSet() const;
    void unsetosModelartsNodeBatchName();
    void setOsModelartsNodeBatchName(const std::string& value);

    /// <summary>
    /// **参数解释**：批量创建批次类型。 **取值范围**：可选值如下：   - hyperinstance：超节点。
    /// </summary>

    std::string getOsModelartsNodeBatchType() const;
    bool osModelartsNodeBatchTypeIsSet() const;
    void unsetosModelartsNodeBatchType();
    void setOsModelartsNodeBatchType(const std::string& value);

    /// <summary>
    /// **参数解释**：批量创建的节点个数。 **取值范围**：不涉及。
    /// </summary>

    std::string getOsModelartsNodeBatchCount() const;
    bool osModelartsNodeBatchCountIsSet() const;
    void unsetosModelartsNodeBatchCount();
    void setOsModelartsNodeBatchCount(const std::string& value);

    /// <summary>
    /// **参数解释**：HPS超节点ID。该值相同的节点，A5代表在同一框内，A3代表在同一个超节点内。 **取值范围**：不涉及。
    /// </summary>

    std::string getOsModelartsNodeSpodId() const;
    bool osModelartsNodeSpodIdIsSet() const;
    void unsetosModelartsNodeSpodId();
    void setOsModelartsNodeSpodId(const std::string& value);

    /// <summary>
    /// **参数解释**：节点的资源id。 **取值范围**：不涉及。
    /// </summary>

    std::string getOsModelartsResourceId() const;
    bool osModelartsResourceIdIsSet() const;
    void unsetosModelartsResourceId();
    void setOsModelartsResourceId(const std::string& value);

    /// <summary>
    /// **参数解释**：节点的租户id，记录节点创建在哪个租户账号下。 **取值范围**：不涉及。
    /// </summary>

    std::string getOsModelartsTenantDomainId() const;
    bool osModelartsTenantDomainIdIsSet() const;
    void unsetosModelartsTenantDomainId();
    void setOsModelartsTenantDomainId(const std::string& value);

    /// <summary>
    /// **参数解释**：节点的项目id，记录节点创建在租户账号下哪个项目中。 **取值范围**：不涉及。
    /// </summary>

    std::string getOsModelartsTenantProjectId() const;
    bool osModelartsTenantProjectIdIsSet() const;
    void unsetosModelartsTenantProjectId();
    void setOsModelartsTenantProjectId(const std::string& value);

    /// <summary>
    /// **参数解释**：节点计费状态。 **取值范围**：可选值如下： - 0：正常状态。 - 1：冻结状态。 - 2：删除状态或者终止状态。
    /// </summary>

    std::string getOsModelartsBillingStatus() const;
    bool osModelartsBillingStatusIsSet() const;
    void unsetosModelartsBillingStatus();
    void setOsModelartsBillingStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：标识该节点是否被整柜作业独占。当被某个整柜作业独占时，该标签存在，标签的值为独占的训练作业ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getOsModelartsNodeVolcanoSchedulerCabinetExclusive() const;
    bool osModelartsNodeVolcanoSchedulerCabinetExclusiveIsSet() const;
    void unsetosModelartsNodeVolcanoSchedulerCabinetExclusive();
    void setOsModelartsNodeVolcanoSchedulerCabinetExclusive(const std::string& value);

    /// <summary>
    /// **参数解释**：节点所在tor交换机ip。多个tor交换机ip之间以中划线-分隔。 **取值范围**：不涉及。
    /// </summary>

    std::string getCceKubectlKubernetesIoCabinet() const;
    bool cceKubectlKubernetesIoCabinetIsSet() const;
    void unsetcceKubectlKubernetesIoCabinet();
    void setCceKubectlKubernetesIoCabinet(const std::string& value);

    /// <summary>
    /// **参数解释**：节点底层资源的实例ID，如超节点的ECS实例ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getOsModelartsNodeUnderlyingInstanceId() const;
    bool osModelartsNodeUnderlyingInstanceIdIsSet() const;
    void unsetosModelartsNodeUnderlyingInstanceId();
    void setOsModelartsNodeUnderlyingInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**：节点是否启用高可用冗余。 **取值范围**：   - true：开启   - false：未开启
    /// </summary>

    std::string getOsModelartsNodeHaRedundantEnabled() const;
    bool osModelartsNodeHaRedundantEnabledIsSet() const;
    void unsetosModelartsNodeHaRedundantEnabled();
    void setOsModelartsNodeHaRedundantEnabled(const std::string& value);

    /// <summary>
    /// **参数解释**：节点所在的节点池名称,最小长度为2，最大长度为50的小写字母、中划线-、数字组成，由小写字母开头，不能 以-，-default结尾。 **取值范围**：不涉及。
    /// </summary>

    std::string getOsModelartsNodeNodepoolname() const;
    bool osModelartsNodeNodepoolnameIsSet() const;
    void unsetosModelartsNodeNodepoolname();
    void setOsModelartsNodeNodepoolname(const std::string& value);


protected:
    std::string osModelartsNodeCluster_;
    bool osModelartsNodeClusterIsSet_;
    std::string osModelartsNodeElasticQuota_;
    bool osModelartsNodeElasticQuotaIsSet_;
    std::string osModelartsNodeNodepool_;
    bool osModelartsNodeNodepoolIsSet_;
    std::string osModelartsNodeBatchUid_;
    bool osModelartsNodeBatchUidIsSet_;
    std::string osModelartsNodeBatchName_;
    bool osModelartsNodeBatchNameIsSet_;
    std::string osModelartsNodeBatchType_;
    bool osModelartsNodeBatchTypeIsSet_;
    std::string osModelartsNodeBatchCount_;
    bool osModelartsNodeBatchCountIsSet_;
    std::string osModelartsNodeSpodId_;
    bool osModelartsNodeSpodIdIsSet_;
    std::string osModelartsResourceId_;
    bool osModelartsResourceIdIsSet_;
    std::string osModelartsTenantDomainId_;
    bool osModelartsTenantDomainIdIsSet_;
    std::string osModelartsTenantProjectId_;
    bool osModelartsTenantProjectIdIsSet_;
    std::string osModelartsBillingStatus_;
    bool osModelartsBillingStatusIsSet_;
    std::string osModelartsNodeVolcanoSchedulerCabinetExclusive_;
    bool osModelartsNodeVolcanoSchedulerCabinetExclusiveIsSet_;
    std::string cceKubectlKubernetesIoCabinet_;
    bool cceKubectlKubernetesIoCabinetIsSet_;
    std::string osModelartsNodeUnderlyingInstanceId_;
    bool osModelartsNodeUnderlyingInstanceIdIsSet_;
    std::string osModelartsNodeHaRedundantEnabled_;
    bool osModelartsNodeHaRedundantEnabledIsSet_;
    std::string osModelartsNodeNodepoolname_;
    bool osModelartsNodeNodepoolnameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeLabels_H_
