

#include "huaweicloud/ga/v1/model/UpdateListenerResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




UpdateListenerResponse::UpdateListenerResponse()
{
    listenerIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

UpdateListenerResponse::~UpdateListenerResponse() = default;

void UpdateListenerResponse::validate()
{
}

web::json::value UpdateListenerResponse::toJson() const
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
bool UpdateListenerResponse::fromJson(const web::json::value& val)
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


ListenerDetail UpdateListenerResponse::getListener() const
{
    return listener_;
}

void UpdateListenerResponse::setListener(const ListenerDetail& value)
{
    listener_ = value;
    listenerIsSet_ = true;
}

bool UpdateListenerResponse::listenerIsSet() const
{
    return listenerIsSet_;
}

void UpdateListenerResponse::unsetlistener()
{
    listenerIsSet_ = false;
}

std::string UpdateListenerResponse::getRequestId() const
{
    return requestId_;
}

void UpdateListenerResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool UpdateListenerResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void UpdateListenerResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


