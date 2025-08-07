
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListScheduleTasksResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListScheduleTasksResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/ScheduleTaskInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListScheduleTasksResponse
    : public ModelBase, public HttpResponse
{
public:
    ListScheduleTasksResponse();
    virtual ~ListScheduleTasksResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListScheduleTasksResponse members

    /// <summary>
    /// 定时任务列表。
    /// </summary>

    std::vector<ScheduleTaskInfo>& getScheduleTasks();
    bool scheduleTasksIsSet() const;
    void unsetscheduleTasks();
    void setScheduleTasks(const std::vector<ScheduleTaskInfo>& value);

    /// <summary>
    /// 总任务数量。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<ScheduleTaskInfo> scheduleTasks_;
    bool scheduleTasksIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListScheduleTasksResponse_H_
