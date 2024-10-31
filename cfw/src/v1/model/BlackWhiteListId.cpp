

#include "huaweicloud/cfw/v1/model/BlackWhiteListId.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BlackWhiteListId::BlackWhiteListId()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

BlackWhiteListId::~BlackWhiteListId() = default;

void BlackWhiteListId::validate()
{
}

web::json::value BlackWhiteListId::toJson() const
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
bool BlackWhiteListId::fromJson(const web::json::value& val)
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


std::string BlackWhiteListId::getId() const
{
    return id_;
}

void BlackWhiteListId::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BlackWhiteListId::idIsSet() const
{
    return idIsSet_;
}

void BlackWhiteListId::unsetid()
{
    idIsSet_ = false;
}

std::string BlackWhiteListId::getName() const
{
    return name_;
}

void BlackWhiteListId::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BlackWhiteListId::nameIsSet() const
{
    return nameIsSet_;
}

void BlackWhiteListId::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


