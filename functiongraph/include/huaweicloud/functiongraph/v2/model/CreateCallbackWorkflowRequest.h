
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_CreateCallbackWorkflowRequest_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_CreateCallbackWorkflowRequest_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/functiongraph/v2/model/CallbackWorkflowRequestBody.h>
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
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  CreateCallbackWorkflowRequest
    : public ModelBase
{
public:
    CreateCallbackWorkflowRequest();
    virtual ~CreateCallbackWorkflowRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateCallbackWorkflowRequest members

    /// <summary>
    /// 函数工作流ID
    /// </summary>

    std::string getWorkflowId() const;
    bool workflowIdIsSet() const;
    void unsetworkflowId();
    void setWorkflowId(const std::string& value);

    /// <summary>
    /// workflow run id
    /// </summary>

    std::string getXWorkflowRunId() const;
    bool xWorkflowRunIdIsSet() const;
    void unsetxWorkflowRunId();
    void setXWorkflowRunId(const std::string& value);

    /// <summary>
    /// workflow state id
    /// </summary>

    std::string getXWorkflowStateId() const;
    bool xWorkflowStateIdIsSet() const;
    void unsetxWorkflowStateId();
    void setXWorkflowStateId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CallbackWorkflowRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CallbackWorkflowRequestBody& value);


protected:
    std::string workflowId_;
    bool workflowIdIsSet_;
    std::string xWorkflowRunId_;
    bool xWorkflowRunIdIsSet_;
    std::string xWorkflowStateId_;
    bool xWorkflowStateIdIsSet_;
    CallbackWorkflowRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateCallbackWorkflowRequest& dereference_from_shared_ptr(std::shared_ptr<CreateCallbackWorkflowRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_CreateCallbackWorkflowRequest_H_
