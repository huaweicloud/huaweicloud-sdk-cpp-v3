

#include "huaweicloud/codehub/v4/model/ManageableGroupDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ManageableGroupDto::ManageableGroupDto()
{
    fullName_ = "";
    fullNameIsSet_ = false;
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

ManageableGroupDto::~ManageableGroupDto() = default;

void ManageableGroupDto::validate()
{
}

web::json::value ManageableGroupDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fullNameIsSet_) {
        val[utility::conversions::to_string_t("full_name")] = ModelBase::toJson(fullName_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool ManageableGroupDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("full_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("full_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFullName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
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


std::string ManageableGroupDto::getFullName() const
{
    return fullName_;
}

void ManageableGroupDto::setFullName(const std::string& value)
{
    fullName_ = value;
    fullNameIsSet_ = true;
}

bool ManageableGroupDto::fullNameIsSet() const
{
    return fullNameIsSet_;
}

void ManageableGroupDto::unsetfullName()
{
    fullNameIsSet_ = false;
}

int32_t ManageableGroupDto::getId() const
{
    return id_;
}

void ManageableGroupDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ManageableGroupDto::idIsSet() const
{
    return idIsSet_;
}

void ManageableGroupDto::unsetid()
{
    idIsSet_ = false;
}

std::string ManageableGroupDto::getName() const
{
    return name_;
}

void ManageableGroupDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ManageableGroupDto::nameIsSet() const
{
    return nameIsSet_;
}

void ManageableGroupDto::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


