

#include "huaweicloud/metastudio/v1/model/LiveNotifyConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




LiveNotifyConfig::LiveNotifyConfig()
{
    notifyEventsIsSet_ = false;
}

LiveNotifyConfig::~LiveNotifyConfig() = default;

void LiveNotifyConfig::validate()
{
}

web::json::value LiveNotifyConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(notifyEventsIsSet_) {
        val[utility::conversions::to_string_t("notify_events")] = ModelBase::toJson(notifyEvents_);
    }

    return val;
}
bool LiveNotifyConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("notify_events"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notify_events"));
        if(!fieldValue.is_null())
        {
            std::vector<NotifyEventEnum> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotifyEvents(refVal);
        }
    }
    return ok;
}


std::vector<NotifyEventEnum>& LiveNotifyConfig::getNotifyEvents()
{
    return notifyEvents_;
}

void LiveNotifyConfig::setNotifyEvents(const std::vector<NotifyEventEnum>& value)
{
    notifyEvents_ = value;
    notifyEventsIsSet_ = true;
}

bool LiveNotifyConfig::notifyEventsIsSet() const
{
    return notifyEventsIsSet_;
}

void LiveNotifyConfig::unsetnotifyEvents()
{
    notifyEventsIsSet_ = false;
}

}
}
}
}
}


