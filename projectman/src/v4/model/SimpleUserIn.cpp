

#include "huaweicloud/projectman/v4/model/SimpleUserIn.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




SimpleUserIn::SimpleUserIn()
{
    id_ = 0;
    idIsSet_ = false;
    identifier_ = "";
    identifierIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

SimpleUserIn::~SimpleUserIn() = default;

void SimpleUserIn::validate()
{
}

web::json::value SimpleUserIn::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(identifierIsSet_) {
        val[utility::conversions::to_string_t("identifier")] = ModelBase::toJson(identifier_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool SimpleUserIn::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("identifier"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identifier"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentifier(refVal);
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


int32_t SimpleUserIn::getId() const
{
    return id_;
}

void SimpleUserIn::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SimpleUserIn::idIsSet() const
{
    return idIsSet_;
}

void SimpleUserIn::unsetid()
{
    idIsSet_ = false;
}

std::string SimpleUserIn::getIdentifier() const
{
    return identifier_;
}

void SimpleUserIn::setIdentifier(const std::string& value)
{
    identifier_ = value;
    identifierIsSet_ = true;
}

bool SimpleUserIn::identifierIsSet() const
{
    return identifierIsSet_;
}

void SimpleUserIn::unsetidentifier()
{
    identifierIsSet_ = false;
}

std::string SimpleUserIn::getName() const
{
    return name_;
}

void SimpleUserIn::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SimpleUserIn::nameIsSet() const
{
    return nameIsSet_;
}

void SimpleUserIn::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


