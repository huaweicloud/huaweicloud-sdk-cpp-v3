
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListEventsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListEventsResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/ScheduleEventInfoResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListEventsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListEventsResponse();
    virtual ~ListEventsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListEventsResponse members

    /// <summary>
    /// **参数解释**: 事件总数。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// **参数解释**: 待授权的事件数。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getInquiringCount() const;
    bool inquiringCountIsSet() const;
    void unsetinquiringCount();
    void setInquiringCount(int32_t value);

    /// <summary>
    /// **参数解释**: 待执行的事件数。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getScheduleCount() const;
    bool scheduleCountIsSet() const;
    void unsetscheduleCount();
    void setScheduleCount(int32_t value);

    /// <summary>
    /// **参数解释**: 正在执行的事件数。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getExecutingCount() const;
    bool executingCountIsSet() const;
    void unsetexecutingCount();
    void setExecutingCount(int32_t value);

    /// <summary>
    /// **参数解释**: 执行失败的事件数。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getFailedCount() const;
    bool failedCountIsSet() const;
    void unsetfailedCount();
    void setFailedCount(int32_t value);

    /// <summary>
    /// **参数解释**: 事件详情列表。
    /// </summary>

    std::vector<ScheduleEventInfoResult>& getEvents();
    bool eventsIsSet() const;
    void unsetevents();
    void setEvents(const std::vector<ScheduleEventInfoResult>& value);


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
    std::vector<ScheduleEventInfoResult> events_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListEventsResponse_H_
