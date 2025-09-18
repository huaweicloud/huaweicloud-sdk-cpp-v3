

#include "huaweicloud/ga/v1/model/UpdateListenerRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




UpdateListenerRequest::UpdateListenerRequest()
{
    listenerId_ = "";
    listenerIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateListenerRequest::~UpdateListenerRequest() = default;

void UpdateListenerRequest::validate()
{
}

web::json::value UpdateListenerRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(listenerIdIsSet_) {
        val[utility::conversions::to_string_t("listener_id")] = ModelBase::toJson(listenerId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateListenerRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("listener_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("listener_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setListenerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateListenerRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateListenerRequest::getListenerId() const
{
    return listenerId_;
}

void UpdateListenerRequest::setListenerId(const std::string& value)
{
    listenerId_ = value;
    listenerIdIsSet_ = true;
}

bool UpdateListenerRequest::listenerIdIsSet() const
{
    return listenerIdIsSet_;
}

void UpdateListenerRequest::unsetlistenerId()
{
    listenerIdIsSet_ = false;
}

UpdateListenerRequestBody UpdateListenerRequest::getBody() const
{
    return body_;
}

void UpdateListenerRequest::setBody(const UpdateListenerRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateListenerRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateListenerRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


