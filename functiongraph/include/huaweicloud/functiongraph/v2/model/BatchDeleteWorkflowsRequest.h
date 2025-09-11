
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_BatchDeleteWorkflowsRequest_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_BatchDeleteWorkflowsRequest_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/functiongraph/v2/model/WorkflowDeleteBody.h>

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
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  BatchDeleteWorkflowsRequest
    : public ModelBase
{
public:
    BatchDeleteWorkflowsRequest();
    virtual ~BatchDeleteWorkflowsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteWorkflowsRequest members

    /// <summary>
    /// 
    /// </summary>

    WorkflowDeleteBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const WorkflowDeleteBody& value);


protected:
    WorkflowDeleteBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchDeleteWorkflowsRequest& dereference_from_shared_ptr(std::shared_ptr<BatchDeleteWorkflowsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_BatchDeleteWorkflowsRequest_H_
