
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_StartWorkflowExecutionRequest_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_StartWorkflowExecutionRequest_H_


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
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  StartWorkflowExecutionRequest
    : public ModelBase
{
public:
    StartWorkflowExecutionRequest();
    virtual ~StartWorkflowExecutionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StartWorkflowExecutionRequest members

    /// <summary>
    /// 函数流定义ID
    /// </summary>

    std::string getWorkflowId() const;
    bool workflowIdIsSet() const;
    void unsetworkflowId();
    void setWorkflowId(const std::string& value);

    /// <summary>
    /// workflowRun task create time
    /// </summary>

    std::string getXCreateTime() const;
    bool xCreateTimeIsSet() const;
    void unsetxCreateTime();
    void setXCreateTime(const std::string& value);

    /// <summary>
    /// workflowRun id
    /// </summary>

    std::string getXWorkflowRunID() const;
    bool xWorkflowRunIDIsSet() const;
    void unsetxWorkflowRunID();
    void setXWorkflowRunID(const std::string& value);

    /// <summary>
    /// Combines the output of the previous node with the input of the next node into an input.
    /// </summary>

    std::string getXWorkflowRunMergeFnParameters() const;
    bool xWorkflowRunMergeFnParametersIsSet() const;
    void unsetxWorkflowRunMergeFnParameters();
    void setXWorkflowRunMergeFnParameters(const std::string& value);

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
    std::string xCreateTime_;
    bool xCreateTimeIsSet_;
    std::string xWorkflowRunID_;
    bool xWorkflowRunIDIsSet_;
    std::string xWorkflowRunMergeFnParameters_;
    bool xWorkflowRunMergeFnParametersIsSet_;
    FlowExecuteBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    StartWorkflowExecutionRequest& dereference_from_shared_ptr(std::shared_ptr<StartWorkflowExecutionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_StartWorkflowExecutionRequest_H_
