

#include "huaweicloud/ga/v1/model/DeleteListenerRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




DeleteListenerRequest::DeleteListenerRequest()
{
    listenerId_ = "";
    listenerIdIsSet_ = false;
}

DeleteListenerRequest::~DeleteListenerRequest() = default;

void DeleteListenerRequest::validate()
{
}

web::json::value DeleteListenerRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(listenerIdIsSet_) {
        val[utility::conversions::to_string_t("listener_id")] = ModelBase::toJson(listenerId_);
    }

    return val;
}
bool DeleteListenerRequest::fromJson(const web::json::value& val)
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


std::string DeleteListenerRequest::getListenerId() const
{
    return listenerId_;
}

void DeleteListenerRequest::setListenerId(const std::string& value)
{
    listenerId_ = value;
    listenerIdIsSet_ = true;
}

bool DeleteListenerRequest::listenerIdIsSet() const
{
    return listenerIdIsSet_;
}

void DeleteListenerRequest::unsetlistenerId()
{
    listenerIdIsSet_ = false;
}

}
}
}
}
}


