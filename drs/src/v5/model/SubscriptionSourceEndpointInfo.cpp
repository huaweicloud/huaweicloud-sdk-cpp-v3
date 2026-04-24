

#include "huaweicloud/drs/v5/model/SubscriptionSourceEndpointInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




SubscriptionSourceEndpointInfo::SubscriptionSourceEndpointInfo()
{
    id_ = "";
    idIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

SubscriptionSourceEndpointInfo::~SubscriptionSourceEndpointInfo() = default;

void SubscriptionSourceEndpointInfo::validate()
{
}

web::json::value SubscriptionSourceEndpointInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool SubscriptionSourceEndpointInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string SubscriptionSourceEndpointInfo::getId() const
{
    return id_;
}

void SubscriptionSourceEndpointInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SubscriptionSourceEndpointInfo::idIsSet() const
{
    return idIsSet_;
}

void SubscriptionSourceEndpointInfo::unsetid()
{
    idIsSet_ = false;
}

std::string SubscriptionSourceEndpointInfo::getType() const
{
    return type_;
}

void SubscriptionSourceEndpointInfo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool SubscriptionSourceEndpointInfo::typeIsSet() const
{
    return typeIsSet_;
}

void SubscriptionSourceEndpointInfo::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


