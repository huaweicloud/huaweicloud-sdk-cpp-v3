

#include "huaweicloud/ga/v1/model/AssociateListenerRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




AssociateListenerRequestBody::AssociateListenerRequestBody()
{
    listenerId_ = "";
    listenerIdIsSet_ = false;
    typeIsSet_ = false;
}

AssociateListenerRequestBody::~AssociateListenerRequestBody() = default;

void AssociateListenerRequestBody::validate()
{
}

web::json::value AssociateListenerRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(listenerIdIsSet_) {
        val[utility::conversions::to_string_t("listener_id")] = ModelBase::toJson(listenerId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool AssociateListenerRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            ListenerAccessControlType refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string AssociateListenerRequestBody::getListenerId() const
{
    return listenerId_;
}

void AssociateListenerRequestBody::setListenerId(const std::string& value)
{
    listenerId_ = value;
    listenerIdIsSet_ = true;
}

bool AssociateListenerRequestBody::listenerIdIsSet() const
{
    return listenerIdIsSet_;
}

void AssociateListenerRequestBody::unsetlistenerId()
{
    listenerIdIsSet_ = false;
}

ListenerAccessControlType AssociateListenerRequestBody::getType() const
{
    return type_;
}

void AssociateListenerRequestBody::setType(const ListenerAccessControlType& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool AssociateListenerRequestBody::typeIsSet() const
{
    return typeIsSet_;
}

void AssociateListenerRequestBody::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


