

#include "huaweicloud/ga/v1/model/UpdateListenerRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




UpdateListenerRequestBody::UpdateListenerRequestBody()
{
    listenerIsSet_ = false;
}

UpdateListenerRequestBody::~UpdateListenerRequestBody() = default;

void UpdateListenerRequestBody::validate()
{
}

web::json::value UpdateListenerRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(listenerIsSet_) {
        val[utility::conversions::to_string_t("listener")] = ModelBase::toJson(listener_);
    }

    return val;
}
bool UpdateListenerRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("listener"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("listener"));
        if(!fieldValue.is_null())
        {
            UpdateListenerOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setListener(refVal);
        }
    }
    return ok;
}


UpdateListenerOption UpdateListenerRequestBody::getListener() const
{
    return listener_;
}

void UpdateListenerRequestBody::setListener(const UpdateListenerOption& value)
{
    listener_ = value;
    listenerIsSet_ = true;
}

bool UpdateListenerRequestBody::listenerIsSet() const
{
    return listenerIsSet_;
}

void UpdateListenerRequestBody::unsetlistener()
{
    listenerIsSet_ = false;
}

}
}
}
}
}


