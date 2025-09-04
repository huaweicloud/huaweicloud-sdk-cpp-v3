

#include "huaweicloud/ecs/v2/model/Promotion.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




Promotion::Promotion()
{
    type_ = "";
    typeIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

Promotion::~Promotion() = default;

void Promotion::validate()
{
}

web::json::value Promotion::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool Promotion::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
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


std::string Promotion::getType() const
{
    return type_;
}

void Promotion::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Promotion::typeIsSet() const
{
    return typeIsSet_;
}

void Promotion::unsettype()
{
    typeIsSet_ = false;
}

std::string Promotion::getId() const
{
    return id_;
}

void Promotion::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Promotion::idIsSet() const
{
    return idIsSet_;
}

void Promotion::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


