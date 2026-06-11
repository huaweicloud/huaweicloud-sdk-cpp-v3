
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListHistoryWaitEventsResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListHistoryWaitEventsResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/Event.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ListHistoryWaitEventsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListHistoryWaitEventsResponse();
    virtual ~ListHistoryWaitEventsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListHistoryWaitEventsResponse members

    /// <summary>
    /// 总记录数
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 事件列表
    /// </summary>

    std::vector<Event>& getEvents();
    bool eventsIsSet() const;
    void unsetevents();
    void setEvents(const std::vector<Event>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<Event> events_;
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

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListHistoryWaitEventsResponse_H_
