

#include "huaweicloud/ga/v1/model/CreateListenerRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




CreateListenerRequestBody::CreateListenerRequestBody()
{
    listenerIsSet_ = false;
}

CreateListenerRequestBody::~CreateListenerRequestBody() = default;

void CreateListenerRequestBody::validate()
{
}

web::json::value CreateListenerRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(listenerIsSet_) {
        val[utility::conversions::to_string_t("listener")] = ModelBase::toJson(listener_);
    }

    return val;
}
bool CreateListenerRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("listener"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("listener"));
        if(!fieldValue.is_null())
        {
            CreateListenerOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setListener(refVal);
        }
    }
    return ok;
}


CreateListenerOption CreateListenerRequestBody::getListener() const
{
    return listener_;
}

void CreateListenerRequestBody::setListener(const CreateListenerOption& value)
{
    listener_ = value;
    listenerIsSet_ = true;
}

bool CreateListenerRequestBody::listenerIsSet() const
{
    return listenerIsSet_;
}

void CreateListenerRequestBody::unsetlistener()
{
    listenerIsSet_ = false;
}

}
}
}
}
}


