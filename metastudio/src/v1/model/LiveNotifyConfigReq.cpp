

#include "huaweicloud/metastudio/v1/model/LiveNotifyConfigReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




LiveNotifyConfigReq::LiveNotifyConfigReq()
{
    action_ = "";
    actionIsSet_ = false;
    notifyEventsIsSet_ = false;
}

LiveNotifyConfigReq::~LiveNotifyConfigReq() = default;

void LiveNotifyConfigReq::validate()
{
}

web::json::value LiveNotifyConfigReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(notifyEventsIsSet_) {
        val[utility::conversions::to_string_t("notify_events")] = ModelBase::toJson(notifyEvents_);
    }

    return val;
}
bool LiveNotifyConfigReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
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


std::string LiveNotifyConfigReq::getAction() const
{
    return action_;
}

void LiveNotifyConfigReq::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool LiveNotifyConfigReq::actionIsSet() const
{
    return actionIsSet_;
}

void LiveNotifyConfigReq::unsetaction()
{
    actionIsSet_ = false;
}

std::vector<NotifyEventEnum>& LiveNotifyConfigReq::getNotifyEvents()
{
    return notifyEvents_;
}

void LiveNotifyConfigReq::setNotifyEvents(const std::vector<NotifyEventEnum>& value)
{
    notifyEvents_ = value;
    notifyEventsIsSet_ = true;
}

bool LiveNotifyConfigReq::notifyEventsIsSet() const
{
    return notifyEventsIsSet_;
}

void LiveNotifyConfigReq::unsetnotifyEvents()
{
    notifyEventsIsSet_ = false;
}

}
}
}
}
}


