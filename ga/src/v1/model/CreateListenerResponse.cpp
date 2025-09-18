

#include "huaweicloud/ga/v1/model/CreateListenerResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




CreateListenerResponse::CreateListenerResponse()
{
    listenerIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

CreateListenerResponse::~CreateListenerResponse() = default;

void CreateListenerResponse::validate()
{
}

web::json::value CreateListenerResponse::toJson() const
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
bool CreateListenerResponse::fromJson(const web::json::value& val)
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


ListenerDetail CreateListenerResponse::getListener() const
{
    return listener_;
}

void CreateListenerResponse::setListener(const ListenerDetail& value)
{
    listener_ = value;
    listenerIsSet_ = true;
}

bool CreateListenerResponse::listenerIsSet() const
{
    return listenerIsSet_;
}

void CreateListenerResponse::unsetlistener()
{
    listenerIsSet_ = false;
}

std::string CreateListenerResponse::getRequestId() const
{
    return requestId_;
}

void CreateListenerResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool CreateListenerResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void CreateListenerResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


