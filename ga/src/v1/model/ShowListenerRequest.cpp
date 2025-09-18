

#include "huaweicloud/ga/v1/model/ShowListenerRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




ShowListenerRequest::ShowListenerRequest()
{
    listenerId_ = "";
    listenerIdIsSet_ = false;
}

ShowListenerRequest::~ShowListenerRequest() = default;

void ShowListenerRequest::validate()
{
}

web::json::value ShowListenerRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(listenerIdIsSet_) {
        val[utility::conversions::to_string_t("listener_id")] = ModelBase::toJson(listenerId_);
    }

    return val;
}
bool ShowListenerRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowListenerRequest::getListenerId() const
{
    return listenerId_;
}

void ShowListenerRequest::setListenerId(const std::string& value)
{
    listenerId_ = value;
    listenerIdIsSet_ = true;
}

bool ShowListenerRequest::listenerIdIsSet() const
{
    return listenerIdIsSet_;
}

void ShowListenerRequest::unsetlistenerId()
{
    listenerIdIsSet_ = false;
}

}
}
}
}
}


