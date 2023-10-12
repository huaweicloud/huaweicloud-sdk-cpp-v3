

#include "huaweicloud/mpc/v1/model/ListNotifyEventResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ListNotifyEventResponse::ListNotifyEventResponse()
{
    eventNameIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListNotifyEventResponse::~ListNotifyEventResponse() = default;

void ListNotifyEventResponse::validate()
{
}

web::json::value ListNotifyEventResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(eventNameIsSet_) {
        val[utility::conversions::to_string_t("event_name")] = ModelBase::toJson(eventName_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListNotifyEventResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("event_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_name"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ListNotifyEventResponse::getEventName()
{
    return eventName_;
}

void ListNotifyEventResponse::setEventName(const std::vector<std::string>& value)
{
    eventName_ = value;
    eventNameIsSet_ = true;
}

bool ListNotifyEventResponse::eventNameIsSet() const
{
    return eventNameIsSet_;
}

void ListNotifyEventResponse::unseteventName()
{
    eventNameIsSet_ = false;
}

int32_t ListNotifyEventResponse::getTotal() const
{
    return total_;
}

void ListNotifyEventResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListNotifyEventResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListNotifyEventResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


