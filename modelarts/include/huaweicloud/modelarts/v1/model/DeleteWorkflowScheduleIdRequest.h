
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteWorkflowScheduleIdRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteWorkflowScheduleIdRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  DeleteWorkflowScheduleIdRequest
    : public ModelBase
{
public:
    DeleteWorkflowScheduleIdRequest();
    virtual ~DeleteWorkflowScheduleIdRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteWorkflowScheduleIdRequest members

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


protected:
    std::string workflowId_;
    bool workflowIdIsSet_;
    std::string scheduleId_;
    bool scheduleIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteWorkflowScheduleIdRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteWorkflowScheduleIdRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteWorkflowScheduleIdRequest_H_
