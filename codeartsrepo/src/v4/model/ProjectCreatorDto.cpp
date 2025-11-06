

#include "huaweicloud/codeartsrepo/v4/model/ProjectCreatorDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ProjectCreatorDto::ProjectCreatorDto()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    username_ = "";
    usernameIsSet_ = false;
}

ProjectCreatorDto::~ProjectCreatorDto() = default;

void ProjectCreatorDto::validate()
{
}

web::json::value ProjectCreatorDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(usernameIsSet_) {
        val[utility::conversions::to_string_t("username")] = ModelBase::toJson(username_);
    }

    return val;
}
bool ProjectCreatorDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("username"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("username"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsername(refVal);
        }
    }
    return ok;
}


int32_t ProjectCreatorDto::getId() const
{
    return id_;
}

void ProjectCreatorDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ProjectCreatorDto::idIsSet() const
{
    return idIsSet_;
}

void ProjectCreatorDto::unsetid()
{
    idIsSet_ = false;
}

std::string ProjectCreatorDto::getName() const
{
    return name_;
}

void ProjectCreatorDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ProjectCreatorDto::nameIsSet() const
{
    return nameIsSet_;
}

void ProjectCreatorDto::unsetname()
{
    nameIsSet_ = false;
}

std::string ProjectCreatorDto::getUsername() const
{
    return username_;
}

void ProjectCreatorDto::setUsername(const std::string& value)
{
    username_ = value;
    usernameIsSet_ = true;
}

bool ProjectCreatorDto::usernameIsSet() const
{
    return usernameIsSet_;
}

void ProjectCreatorDto::unsetusername()
{
    usernameIsSet_ = false;
}

}
}
}
}
}


