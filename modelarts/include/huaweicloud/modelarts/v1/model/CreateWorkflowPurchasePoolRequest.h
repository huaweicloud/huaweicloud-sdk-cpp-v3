
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateWorkflowPurchasePoolRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateWorkflowPurchasePoolRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/WorkflowServicePackage.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreateWorkflowPurchasePoolRequest
    : public ModelBase
{
public:
    CreateWorkflowPurchasePoolRequest();
    virtual ~CreateWorkflowPurchasePoolRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateWorkflowPurchasePoolRequest members

    /// <summary>
    /// 工作流的ID。
    /// </summary>

    std::string getWorkflowId() const;
    bool workflowIdIsSet() const;
    void unsetworkflowId();
    void setWorkflowId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    WorkflowServicePackage getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const WorkflowServicePackage& value);


protected:
    std::string workflowId_;
    bool workflowIdIsSet_;
    WorkflowServicePackage body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateWorkflowPurchasePoolRequest& dereference_from_shared_ptr(std::shared_ptr<CreateWorkflowPurchasePoolRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateWorkflowPurchasePoolRequest_H_
