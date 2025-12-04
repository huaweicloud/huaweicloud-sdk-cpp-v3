
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListScheduleEventsResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListScheduleEventsResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/ScheduleEventInfo.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ListScheduleEventsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListScheduleEventsResponse();
    virtual ~ListScheduleEventsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListScheduleEventsResponse members

    /// <summary>
    /// **参数解释**：  事件总数。  **约束限制**：  不涉及。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// **参数解释**：  待授权的事件数。  **约束限制**：  不涉及。
    /// </summary>

    int32_t getInquiringCount() const;
    bool inquiringCountIsSet() const;
    void unsetinquiringCount();
    void setInquiringCount(int32_t value);

    /// <summary>
    /// **参数解释**：  待执行的事件数。  **约束限制**：  不涉及。
    /// </summary>

    int32_t getScheduleCount() const;
    bool scheduleCountIsSet() const;
    void unsetscheduleCount();
    void setScheduleCount(int32_t value);

    /// <summary>
    /// **参数解释**：  正在执行的事件数。  **约束限制**：  不涉及。
    /// </summary>

    int32_t getExecutingCount() const;
    bool executingCountIsSet() const;
    void unsetexecutingCount();
    void setExecutingCount(int32_t value);

    /// <summary>
    /// **参数解释**：  执行失败的事件数。  **约束限制**：  不涉及。
    /// </summary>

    int32_t getFailedCount() const;
    bool failedCountIsSet() const;
    void unsetfailedCount();
    void setFailedCount(int32_t value);

    /// <summary>
    /// **参数解释**：  事件详情列表。  **约束限制**：  不涉及。
    /// </summary>

    std::vector<ScheduleEventInfo>& getEvents();
    bool eventsIsSet() const;
    void unsetevents();
    void setEvents(const std::vector<ScheduleEventInfo>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    int32_t inquiringCount_;
    bool inquiringCountIsSet_;
    int32_t scheduleCount_;
    bool scheduleCountIsSet_;
    int32_t executingCount_;
    bool executingCountIsSet_;
    int32_t failedCount_;
    bool failedCountIsSet_;
    std::vector<ScheduleEventInfo> events_;
    bool eventsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListScheduleEventsResponse_H_
