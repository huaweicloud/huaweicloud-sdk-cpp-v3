
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateWorkflowServiceAuthRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateWorkflowServiceAuthRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/WorkflowMainServiceAuthReq.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreateWorkflowServiceAuthRequest
    : public ModelBase
{
public:
    CreateWorkflowServiceAuthRequest();
    virtual ~CreateWorkflowServiceAuthRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateWorkflowServiceAuthRequest members

    /// <summary>
    /// 
    /// </summary>

    WorkflowMainServiceAuthReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const WorkflowMainServiceAuthReq& value);


protected:
    WorkflowMainServiceAuthReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateWorkflowServiceAuthRequest& dereference_from_shared_ptr(std::shared_ptr<CreateWorkflowServiceAuthRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateWorkflowServiceAuthRequest_H_
