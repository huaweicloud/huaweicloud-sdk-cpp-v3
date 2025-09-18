

#include "huaweicloud/ga/v1/model/ShowListenerResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




ShowListenerResponse::ShowListenerResponse()
{
    listenerIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

ShowListenerResponse::~ShowListenerResponse() = default;

void ShowListenerResponse::validate()
{
}

web::json::value ShowListenerResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(listenerIsSet_) {
        val[utility::conversions::to_string_t("listener")] = ModelBase::toJson(listener_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool ShowListenerResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("listener"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("listener"));
        if(!fieldValue.is_null())
        {
            ListenerDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setListener(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    return ok;
}


ListenerDetail ShowListenerResponse::getListener() const
{
    return listener_;
}

void ShowListenerResponse::setListener(const ListenerDetail& value)
{
    listener_ = value;
    listenerIsSet_ = true;
}

bool ShowListenerResponse::listenerIsSet() const
{
    return listenerIsSet_;
}

void ShowListenerResponse::unsetlistener()
{
    listenerIsSet_ = false;
}

std::string ShowListenerResponse::getRequestId() const
{
    return requestId_;
}

void ShowListenerResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ShowListenerResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ShowListenerResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


