

#include "huaweicloud/eip/v3/model/PublicPoolType.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




PublicPoolType::PublicPoolType()
{
    id_ = "";
    idIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

PublicPoolType::~PublicPoolType() = default;

void PublicPoolType::validate()
{
}

web::json::value PublicPoolType::toJson() const
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
bool PublicPoolType::fromJson(const web::json::value& val)
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


std::string PublicPoolType::getId() const
{
    return id_;
}

void PublicPoolType::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PublicPoolType::idIsSet() const
{
    return idIsSet_;
}

void PublicPoolType::unsetid()
{
    idIsSet_ = false;
}

std::string PublicPoolType::getType() const
{
    return type_;
}

void PublicPoolType::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool PublicPoolType::typeIsSet() const
{
    return typeIsSet_;
}

void PublicPoolType::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


