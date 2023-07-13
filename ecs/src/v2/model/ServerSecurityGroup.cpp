

#include "huaweicloud/ecs/v2/model/ServerSecurityGroup.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ServerSecurityGroup::ServerSecurityGroup()
{
    name_ = "";
    nameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

ServerSecurityGroup::~ServerSecurityGroup() = default;

void ServerSecurityGroup::validate()
{
}

web::json::value ServerSecurityGroup::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}

bool ServerSecurityGroup::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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

std::string ServerSecurityGroup::getName() const
{
    return name_;
}

void ServerSecurityGroup::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ServerSecurityGroup::nameIsSet() const
{
    return nameIsSet_;
}

void ServerSecurityGroup::unsetname()
{
    nameIsSet_ = false;
}

std::string ServerSecurityGroup::getId() const
{
    return id_;
}

void ServerSecurityGroup::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ServerSecurityGroup::idIsSet() const
{
    return idIsSet_;
}

void ServerSecurityGroup::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


