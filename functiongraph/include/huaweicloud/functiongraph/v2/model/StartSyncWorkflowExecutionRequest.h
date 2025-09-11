
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_StartSyncWorkflowExecutionRequest_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_StartSyncWorkflowExecutionRequest_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/functiongraph/v2/model/FlowExecuteBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  StartSyncWorkflowExecutionRequest
    : public ModelBase
{
public:
    StartSyncWorkflowExecutionRequest();
    virtual ~StartSyncWorkflowExecutionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StartSyncWorkflowExecutionRequest members

    /// <summary>
    /// 函数流定义ID
    /// </summary>

    std::string getWorkflowId() const;
    bool workflowIdIsSet() const;
    void unsetworkflowId();
    void setWorkflowId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    FlowExecuteBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const FlowExecuteBody& value);


protected:
    std::string workflowId_;
    bool workflowIdIsSet_;
    FlowExecuteBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    StartSyncWorkflowExecutionRequest& dereference_from_shared_ptr(std::shared_ptr<StartSyncWorkflowExecutionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_StartSyncWorkflowExecutionRequest_H_
