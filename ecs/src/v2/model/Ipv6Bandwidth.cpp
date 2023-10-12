

#include "huaweicloud/ecs/v2/model/Ipv6Bandwidth.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




Ipv6Bandwidth::Ipv6Bandwidth()
{
    id_ = "";
    idIsSet_ = false;
}

Ipv6Bandwidth::~Ipv6Bandwidth() = default;

void Ipv6Bandwidth::validate()
{
}

web::json::value Ipv6Bandwidth::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool Ipv6Bandwidth::fromJson(const web::json::value& val)
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
    return ok;
}


std::string Ipv6Bandwidth::getId() const
{
    return id_;
}

void Ipv6Bandwidth::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Ipv6Bandwidth::idIsSet() const
{
    return idIsSet_;
}

void Ipv6Bandwidth::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


