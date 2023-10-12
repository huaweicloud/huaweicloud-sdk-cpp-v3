
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_DeleteActiveAlarmsRequestBody_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_DeleteActiveAlarmsRequestBody_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/Event.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  DeleteActiveAlarmsRequestBody
    : public ModelBase
{
public:
    DeleteActiveAlarmsRequestBody();
    virtual ~DeleteActiveAlarmsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteActiveAlarmsRequestBody members

    /// <summary>
    /// 主题信息
    /// </summary>

    std::vector<Event>& getEvents();
    bool eventsIsSet() const;
    void unsetevents();
    void setEvents(const std::vector<Event>& value);


protected:
    std::vector<Event> events_;
    bool eventsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_DeleteActiveAlarmsRequestBody_H_
