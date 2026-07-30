
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateWorkflowScheduleRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateWorkflowScheduleRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/WorkflowSchedule.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreateWorkflowScheduleRequest
    : public ModelBase
{
public:
    CreateWorkflowScheduleRequest();
    virtual ~CreateWorkflowScheduleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateWorkflowScheduleRequest members

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

    WorkflowSchedule getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const WorkflowSchedule& value);


protected:
    std::string workflowId_;
    bool workflowIdIsSet_;
    WorkflowSchedule body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateWorkflowScheduleRequest& dereference_from_shared_ptr(std::shared_ptr<CreateWorkflowScheduleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateWorkflowScheduleRequest_H_
