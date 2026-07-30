
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListScheduledEventsResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListScheduledEventsResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/ScheduledEvent.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListScheduledEventsResponse
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
    /// **参数解释**：计划事件列表
    /// </summary>

    std::vector<ScheduledEvent>& getEvents();
    bool eventsIsSet() const;
    void unsetevents();
    void setEvents(const std::vector<ScheduledEvent>& value);

    /// <summary>
    /// **参数解释**：计划事件总数。 **取值范围**：不涉及。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::vector<ScheduledEvent> events_;
    bool eventsIsSet_;
    int32_t count_;
    bool countIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListScheduledEventsResponse_H_
