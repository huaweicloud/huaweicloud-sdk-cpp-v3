

#include "huaweicloud/ga/v1/model/ListenerAccessControlPolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




ListenerAccessControlPolicy::ListenerAccessControlPolicy()
{
    listenerId_ = "";
    listenerIdIsSet_ = false;
    typeIsSet_ = false;
}

ListenerAccessControlPolicy::~ListenerAccessControlPolicy() = default;

void ListenerAccessControlPolicy::validate()
{
}

web::json::value ListenerAccessControlPolicy::toJson() const
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
bool ListenerAccessControlPolicy::fromJson(const web::json::value& val)
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


std::string ListenerAccessControlPolicy::getListenerId() const
{
    return listenerId_;
}

void ListenerAccessControlPolicy::setListenerId(const std::string& value)
{
    listenerId_ = value;
    listenerIdIsSet_ = true;
}

bool ListenerAccessControlPolicy::listenerIdIsSet() const
{
    return listenerIdIsSet_;
}

void ListenerAccessControlPolicy::unsetlistenerId()
{
    listenerIdIsSet_ = false;
}

ListenerAccessControlType ListenerAccessControlPolicy::getType() const
{
    return type_;
}

void ListenerAccessControlPolicy::setType(const ListenerAccessControlType& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListenerAccessControlPolicy::typeIsSet() const
{
    return typeIsSet_;
}

void ListenerAccessControlPolicy::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


