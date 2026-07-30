
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateWorkflowScheduleRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateWorkflowScheduleRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/WorkflowScheduleUpdate.h>
#include <string>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  UpdateWorkflowScheduleRequest
    : public ModelBase
{
public:
    UpdateWorkflowScheduleRequest();
    virtual ~UpdateWorkflowScheduleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateWorkflowScheduleRequest members

    /// <summary>
    /// 工作流的ID。
    /// </summary>

    std::string getWorkflowId() const;
    bool workflowIdIsSet() const;
    void unsetworkflowId();
    void setWorkflowId(const std::string& value);

    /// <summary>
    /// 工作流调度信息ID。
    /// </summary>

    std::string getScheduleId() const;
    bool scheduleIdIsSet() const;
    void unsetscheduleId();
    void setScheduleId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    WorkflowScheduleUpdate getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const WorkflowScheduleUpdate& value);


protected:
    std::string workflowId_;
    bool workflowIdIsSet_;
    std::string scheduleId_;
    bool scheduleIdIsSet_;
    WorkflowScheduleUpdate body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateWorkflowScheduleRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateWorkflowScheduleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateWorkflowScheduleRequest_H_
