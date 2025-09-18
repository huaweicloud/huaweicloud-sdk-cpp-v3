
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkflowTemplateVO_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkflowTemplateVO_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/WorkflowTemplateNodesVO.h>
#include <huaweicloud/projectman/v4/model/WorkflowTemplateFlowsVO.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 工作流信息
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  WorkflowTemplateVO
    : public ModelBase
{
public:
    WorkflowTemplateVO();
    virtual ~WorkflowTemplateVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkflowTemplateVO members

    /// <summary>
    /// 状态流中的状态信息
    /// </summary>

    std::vector<WorkflowTemplateNodesVO>& getProcessNodes();
    bool processNodesIsSet() const;
    void unsetprocessNodes();
    void setProcessNodes(const std::vector<WorkflowTemplateNodesVO>& value);

    /// <summary>
    /// 状态流中的流转线信息
    /// </summary>

    std::vector<WorkflowTemplateFlowsVO>& getProcessFlows();
    bool processFlowsIsSet() const;
    void unsetprocessFlows();
    void setProcessFlows(const std::vector<WorkflowTemplateFlowsVO>& value);


protected:
    std::vector<WorkflowTemplateNodesVO> processNodes_;
    bool processNodesIsSet_;
    std::vector<WorkflowTemplateFlowsVO> processFlows_;
    bool processFlowsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkflowTemplateVO_H_
