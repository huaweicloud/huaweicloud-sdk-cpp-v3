
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Workload_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Workload_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/WorkloadNodeVO.h>
#include <huaweicloud/modelarts/v1/model/Workload_resourceRequirement.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 作业详细信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Workload
    : public ModelBase
{
public:
    Workload();
    virtual ~Workload();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Workload members

    /// <summary>
    /// **参数解释**：资源的API版本。 **取值范围**：可选值如下： - v1：当前资源版本为v1
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// **参数解释**：资源的类型。 **取值范围**：可选值如下： - Workload：资源池作业
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// **参数解释**：资源池中作业的业务类型。 **取值范围**：可选值如下： - train：训练作业 - infer：推理服务 - notebook：Notebook作业 - x-infer：新版推理作业
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：集群中作业所属的命名空间。 **取值范围**：不涉及。
    /// </summary>

    std::string getNamespace() const;
    bool namespaceIsSet() const;
    void unsetnamespace();
    void setNamespace(const std::string& value);

    /// <summary>
    /// **参数解释**：作业的名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：作业的归属的上层业务的名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getJobName() const;
    bool jobNameIsSet() const;
    void unsetjobName();
    void setJobName(const std::string& value);

    /// <summary>
    /// **参数解释**：作业的ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getUid() const;
    bool uidIsSet() const;
    void unsetuid();
    void setUid(const std::string& value);

    /// <summary>
    /// **参数解释**：作业的归属的上层业务的ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getJobUUID() const;
    bool jobUUIDIsSet() const;
    void unsetjobUUID();
    void setJobUUID(const std::string& value);

    /// <summary>
    /// **参数解释**：作业的资源规格。 **取值范围**：不涉及。
    /// </summary>

    std::string getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const std::string& value);

    /// <summary>
    /// **参数解释**：作业状态。 **取值范围**：不涉及。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Workload_resourceRequirement getResourceRequirement() const;
    bool resourceRequirementIsSet() const;
    void unsetresourceRequirement();
    void setResourceRequirement(const Workload_resourceRequirement& value);

    /// <summary>
    /// **参数解释**：作业的优先级。 **取值范围**：不涉及。
    /// </summary>

    std::string getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(const std::string& value);

    /// <summary>
    /// **参数解释**：作业的运行时长，以秒为单位。 **取值范围**：不涉及。
    /// </summary>

    int32_t getRunningDuration() const;
    bool runningDurationIsSet() const;
    void unsetrunningDuration();
    void setRunningDuration(int32_t value);

    /// <summary>
    /// **参数解释**：作业的排队时长，以秒为单位。 **取值范围**：不涉及。
    /// </summary>

    int32_t getPendingDuration() const;
    bool pendingDurationIsSet() const;
    void unsetpendingDuration();
    void setPendingDuration(int32_t value);

    /// <summary>
    /// **参数解释**：作业当前的排队位置。 **取值范围**：不涉及。
    /// </summary>

    int32_t getPendingPosition() const;
    bool pendingPositionIsSet() const;
    void unsetpendingPosition();
    void setPendingPosition(int32_t value);

    /// <summary>
    /// **参数解释**：作业的Unix创建时间戳，以毫秒为单位。 **取值范围**：不涉及。
    /// </summary>

    int32_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int32_t value);

    /// <summary>
    /// **参数解释**：作业的k8s资源类型、分组和版本。 **取值范围**：不涉及。
    /// </summary>

    std::string getGvk() const;
    bool gvkIsSet() const;
    void unsetgvk();
    void setGvk(const std::string& value);

    /// <summary>
    /// **参数解释**：作业运行的节点IP列表，以“,”分隔。 **取值范围**：不涉及。
    /// </summary>

    std::string getHostIps() const;
    bool hostIpsIsSet() const;
    void unsethostIps();
    void setHostIps(const std::string& value);

    /// <summary>
    /// **参数解释**：作业运行时占用的节点资源信息。
    /// </summary>

    std::vector<WorkloadNodeVO>& getNodes();
    bool nodesIsSet() const;
    void unsetnodes();
    void setNodes(const std::vector<WorkloadNodeVO>& value);


protected:
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::string kind_;
    bool kindIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string namespace_;
    bool namespaceIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string jobName_;
    bool jobNameIsSet_;
    std::string uid_;
    bool uidIsSet_;
    std::string jobUUID_;
    bool jobUUIDIsSet_;
    std::string flavor_;
    bool flavorIsSet_;
    std::string status_;
    bool statusIsSet_;
    Workload_resourceRequirement resourceRequirement_;
    bool resourceRequirementIsSet_;
    std::string priority_;
    bool priorityIsSet_;
    int32_t runningDuration_;
    bool runningDurationIsSet_;
    int32_t pendingDuration_;
    bool pendingDurationIsSet_;
    int32_t pendingPosition_;
    bool pendingPositionIsSet_;
    int32_t createTime_;
    bool createTimeIsSet_;
    std::string gvk_;
    bool gvkIsSet_;
    std::string hostIps_;
    bool hostIpsIsSet_;
    std::vector<WorkloadNodeVO> nodes_;
    bool nodesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Workload_H_
