
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowWorkflowScheduleListResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowWorkflowScheduleListResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/WorkflowScheduleResp.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowWorkflowScheduleListResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowWorkflowScheduleListResponse();
    virtual ~ShowWorkflowScheduleListResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowWorkflowScheduleListResponse members

    /// <summary>
    /// **参数解释**：工作流定时调度列表
    /// </summary>

    std::vector<WorkflowScheduleResp>& getSchedules();
    bool schedulesIsSet() const;
    void unsetschedules();
    void setSchedules(const std::vector<WorkflowScheduleResp>& value);


protected:
    std::vector<WorkflowScheduleResp> schedules_;
    bool schedulesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowWorkflowScheduleListResponse_H_
