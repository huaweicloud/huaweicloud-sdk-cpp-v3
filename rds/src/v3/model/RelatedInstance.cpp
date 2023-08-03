

#include "huaweicloud/rds/v3/model/RelatedInstance.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RelatedInstance::RelatedInstance()
{
    id_ = "";
    idIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

RelatedInstance::~RelatedInstance() = default;

void RelatedInstance::validate()
{
}

web::json::value RelatedInstance::toJson() const
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

bool RelatedInstance::fromJson(const web::json::value& val)
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

std::string RelatedInstance::getId() const
{
    return id_;
}

void RelatedInstance::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RelatedInstance::idIsSet() const
{
    return idIsSet_;
}

void RelatedInstance::unsetid()
{
    idIsSet_ = false;
}

std::string RelatedInstance::getType() const
{
    return type_;
}

void RelatedInstance::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool RelatedInstance::typeIsSet() const
{
    return typeIsSet_;
}

void RelatedInstance::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


