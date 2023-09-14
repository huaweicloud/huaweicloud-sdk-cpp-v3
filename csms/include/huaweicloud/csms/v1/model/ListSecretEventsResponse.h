
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_ListSecretEventsResponse_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_ListSecretEventsResponse_H_

#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/csms/v1/model/Event.h>
#include <huaweicloud/csms/v1/model/PageInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  ListSecretEventsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSecretEventsResponse();
    virtual ~ListSecretEventsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListSecretEventsResponse members

    /// <summary>
    /// 事件详情列表。
    /// </summary>

    std::vector<Event>& getEvents();
    bool eventsIsSet() const;
    void unsetevents();
    void setEvents(const std::vector<Event>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfo getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfo& value);


protected:
    std::vector<Event> events_;
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

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_ListSecretEventsResponse_H_
