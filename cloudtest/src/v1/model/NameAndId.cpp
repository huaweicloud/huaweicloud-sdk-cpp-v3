

#include "huaweicloud/cloudtest/v1/model/NameAndId.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




NameAndId::NameAndId()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

NameAndId::~NameAndId() = default;

void NameAndId::validate()
{
}

web::json::value NameAndId::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool NameAndId::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string NameAndId::getId() const
{
    return id_;
}

void NameAndId::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NameAndId::idIsSet() const
{
    return idIsSet_;
}

void NameAndId::unsetid()
{
    idIsSet_ = false;
}

std::string NameAndId::getName() const
{
    return name_;
}

void NameAndId::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NameAndId::nameIsSet() const
{
    return nameIsSet_;
}

void NameAndId::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


