

#include "huaweicloud/cloudtest/v1/model/AssignedUserInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AssignedUserInfo::AssignedUserInfo()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

AssignedUserInfo::~AssignedUserInfo() = default;

void AssignedUserInfo::validate()
{
}

web::json::value AssignedUserInfo::toJson() const
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
bool AssignedUserInfo::fromJson(const web::json::value& val)
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


std::string AssignedUserInfo::getId() const
{
    return id_;
}

void AssignedUserInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AssignedUserInfo::idIsSet() const
{
    return idIsSet_;
}

void AssignedUserInfo::unsetid()
{
    idIsSet_ = false;
}

std::string AssignedUserInfo::getName() const
{
    return name_;
}

void AssignedUserInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AssignedUserInfo::nameIsSet() const
{
    return nameIsSet_;
}

void AssignedUserInfo::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


