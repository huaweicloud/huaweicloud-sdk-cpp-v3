
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkItemFlowInfoVO_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkItemFlowInfoVO_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/FlowsInfoVO.h>
#include <string>
#include <huaweicloud/projectman/v4/model/WorkItemFlowProcessNodeVO.h>
#include <huaweicloud/projectman/v4/model/WorkItemFlowProcessInstanceVO.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 工作项流转信息
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  WorkItemFlowInfoVO
    : public ModelBase
{
public:
    WorkItemFlowInfoVO();
    virtual ~WorkItemFlowInfoVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkItemFlowInfoVO members

    /// <summary>
    /// 
    /// </summary>

    WorkItemFlowProcessInstanceVO getProcessInstance() const;
    bool processInstanceIsSet() const;
    void unsetprocessInstance();
    void setProcessInstance(const WorkItemFlowProcessInstanceVO& value);

    /// <summary>
    /// **参数解释**： 工作项关联的全部工作流节点列表。 **取值范围**： 不涉及。
    /// </summary>

    std::vector<WorkItemFlowProcessNodeVO>& getProcessNodes();
    bool processNodesIsSet() const;
    void unsetprocessNodes();
    void setProcessNodes(const std::vector<WorkItemFlowProcessNodeVO>& value);

    /// <summary>
    /// 
    /// </summary>

    WorkItemFlowProcessNodeVO getCurrentProcessNode() const;
    bool currentProcessNodeIsSet() const;
    void unsetcurrentProcessNode();
    void setCurrentProcessNode(const WorkItemFlowProcessNodeVO& value);

    /// <summary>
    /// **参数解释**： 可以流转的流转线信息。 **取值范围**： 不涉及。
    /// </summary>

    std::vector<FlowsInfoVO>& getNextFlow();
    bool nextFlowIsSet() const;
    void unsetnextFlow();
    void setNextFlow(const std::vector<FlowsInfoVO>& value);

    /// <summary>
    /// **参数解释**： 流转失败时的失败原因。 **取值范围**： 不涉及。
    /// </summary>

    std::string getFailResult() const;
    bool failResultIsSet() const;
    void unsetfailResult();
    void setFailResult(const std::string& value);


protected:
    WorkItemFlowProcessInstanceVO processInstance_;
    bool processInstanceIsSet_;
    std::vector<WorkItemFlowProcessNodeVO> processNodes_;
    bool processNodesIsSet_;
    WorkItemFlowProcessNodeVO currentProcessNode_;
    bool currentProcessNodeIsSet_;
    std::vector<FlowsInfoVO> nextFlow_;
    bool nextFlowIsSet_;
    std::string failResult_;
    bool failResultIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkItemFlowInfoVO_H_
