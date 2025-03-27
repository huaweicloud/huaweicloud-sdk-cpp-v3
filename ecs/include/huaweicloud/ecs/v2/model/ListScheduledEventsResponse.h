
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ListScheduledEventsResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ListScheduledEventsResponse_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/EventResponse.h>
#include <huaweicloud/ecs/v2/model/ListEventsResponsePageInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ListScheduledEventsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListScheduledEventsResponse();
    virtual ~ListScheduledEventsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListScheduledEventsResponse members

    /// <summary>
    /// 计划事件列表
    /// </summary>

    std::vector<EventResponse>& getEvents();
    bool eventsIsSet() const;
    void unsetevents();
    void setEvents(const std::vector<EventResponse>& value);

    /// <summary>
    /// 
    /// </summary>

    ListEventsResponsePageInfo getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const ListEventsResponsePageInfo& value);


protected:
    std::vector<EventResponse> events_;
    bool eventsIsSet_;
    ListEventsResponsePageInfo pageInfo_;
    bool pageInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ListScheduledEventsResponse_H_
