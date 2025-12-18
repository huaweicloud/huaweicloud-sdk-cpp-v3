
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePoolUpgradeSpec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePoolUpgradeSpec_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/NodeTemplate.h>
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
/// 同步点池请求详细参数
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  NodePoolUpgradeSpec
    : public ModelBase
{
public:
    NodePoolUpgradeSpec();
    virtual ~NodePoolUpgradeSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodePoolUpgradeSpec members

    /// <summary>
    /// **参数解释**： 每批最大同步节点。节点升级时，允许节点不可用的最大数量。节点重置方式进行同步时节点将不可用，请合理设置该参数，尽量避免出现集群节点不可用数量过多导致Pod无法调度的情况。 **约束限制**： 不涉及 **取值范围**： 取值范围[1-20] **默认取值**： 不涉及 
    /// </summary>

    int32_t getMaxUnavailable() const;
    bool maxUnavailableIsSet() const;
    void unsetmaxUnavailable();
    void setMaxUnavailable(int32_t value);

    /// <summary>
    /// Pod无法驱逐时，是否强制重置。
    /// </summary>

    bool isForce() const;
    bool forceIsSet() const;
    void unsetforce();
    void setForce(bool value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getRetryTimes() const;
    bool retryTimesIsSet() const;
    void unsetretryTimes();
    void setRetryTimes(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getSkippedNodes();
    bool skippedNodesIsSet() const;
    void unsetskippedNodes();
    void setSkippedNodes(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 本次操作同步的节点池中选择的节点ID列表，获取方式请参见[如何获取接口URI中参数](cce_02_0271.xml)。 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    std::vector<std::string>& getNodeIDs();
    bool nodeIDsIsSet() const;
    void unsetnodeIDs();
    void setNodeIDs(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 节点池ID，获取方式请参见[如何获取接口URI中参数](cce_02_0271.xml)。 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    std::string getNodePoolID() const;
    bool nodePoolIDIsSet() const;
    void unsetnodePoolID();
    void setNodePoolID(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NodeTemplate getNodeTemplate() const;
    bool nodeTemplateIsSet() const;
    void unsetnodeTemplate();
    void setNodeTemplate(const NodeTemplate& value);

    /// <summary>
    /// **参数解释**： 是否在同步节点池任务下发前校验节点storage参数。如果开启校验，当存在节点storage参数异常时接口将直接返回错误；如果不开启校验，接口将先下发同步节点池任务，当存在节点storage参数异常时，同步节点池任务将失败。 **约束限制**： 当开启节点storage参数校验时，每次同步的节点池节点个数不能大于200个。 **取值范围**： - false：不校验节点storage参数 - true：校验节点storage参数  **默认取值**： false
    /// </summary>

    bool isValidateStorage() const;
    bool validateStorageIsSet() const;
    void unsetvalidateStorage();
    void setValidateStorage(bool value);


protected:
    int32_t maxUnavailable_;
    bool maxUnavailableIsSet_;
    bool force_;
    bool forceIsSet_;
    int32_t retryTimes_;
    bool retryTimesIsSet_;
    std::vector<std::string> skippedNodes_;
    bool skippedNodesIsSet_;
    std::vector<std::string> nodeIDs_;
    bool nodeIDsIsSet_;
    std::string nodePoolID_;
    bool nodePoolIDIsSet_;
    NodeTemplate nodeTemplate_;
    bool nodeTemplateIsSet_;
    bool validateStorage_;
    bool validateStorageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePoolUpgradeSpec_H_
