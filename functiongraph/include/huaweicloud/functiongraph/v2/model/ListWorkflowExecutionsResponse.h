
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListWorkflowExecutionsResponse_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListWorkflowExecutionsResponse_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/functiongraph/v2/model/FlowExecutionBrief.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ListWorkflowExecutionsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListWorkflowExecutionsResponse();
    virtual ~ListWorkflowExecutionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListWorkflowExecutionsResponse members

    /// <summary>
    /// 流程执行信息列表
    /// </summary>

    std::vector<FlowExecutionBrief>& getExecutions();
    bool executionsIsSet() const;
    void unsetexecutions();
    void setExecutions(const std::vector<FlowExecutionBrief>& value);


protected:
    std::vector<FlowExecutionBrief> executions_;
    bool executionsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListWorkflowExecutionsResponse_H_
