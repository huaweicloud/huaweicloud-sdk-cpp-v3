
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ListActiveOrHistoryAlarmsResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ListActiveOrHistoryAlarmsResponse_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/PageInfo.h>
#include <huaweicloud/lts/v2/model/Events.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  ListActiveOrHistoryAlarmsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListActiveOrHistoryAlarmsResponse();
    virtual ~ListActiveOrHistoryAlarmsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListActiveOrHistoryAlarmsResponse members

    /// <summary>
    /// 告警信息
    /// </summary>

    std::vector<Events>& getEvents();
    bool eventsIsSet() const;
    void unsetevents();
    void setEvents(const std::vector<Events>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfo getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfo& value);


protected:
    std::vector<Events> events_;
    bool eventsIsSet_;
    PageInfo pageInfo_;
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

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ListActiveOrHistoryAlarmsResponse_H_
