

#include "huaweicloud/ga/v1/model/DisassociateListenerRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




DisassociateListenerRequestBody::DisassociateListenerRequestBody()
{
    listenerId_ = "";
    listenerIdIsSet_ = false;
}

DisassociateListenerRequestBody::~DisassociateListenerRequestBody() = default;

void DisassociateListenerRequestBody::validate()
{
}

web::json::value DisassociateListenerRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(listenerIdIsSet_) {
        val[utility::conversions::to_string_t("listener_id")] = ModelBase::toJson(listenerId_);
    }

    return val;
}
bool DisassociateListenerRequestBody::fromJson(const web::json::value& val)
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


std::string DisassociateListenerRequestBody::getListenerId() const
{
    return listenerId_;
}

void DisassociateListenerRequestBody::setListenerId(const std::string& value)
{
    listenerId_ = value;
    listenerIdIsSet_ = true;
}

bool DisassociateListenerRequestBody::listenerIdIsSet() const
{
    return listenerIdIsSet_;
}

void DisassociateListenerRequestBody::unsetlistenerId()
{
    listenerIdIsSet_ = false;
}

}
}
}
}
}


