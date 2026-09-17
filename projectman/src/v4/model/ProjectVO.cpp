

#include "huaweicloud/projectman/v4/model/ProjectVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ProjectVO::ProjectVO()
{
    identifier_ = "";
    identifierIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    id_ = 0;
    idIsSet_ = false;
    projectType_ = "";
    projectTypeIsSet_ = false;
}

ProjectVO::~ProjectVO() = default;

void ProjectVO::validate()
{
}

web::json::value ProjectVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(identifierIsSet_) {
        val[utility::conversions::to_string_t("identifier")] = ModelBase::toJson(identifier_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(projectTypeIsSet_) {
        val[utility::conversions::to_string_t("project_type")] = ModelBase::toJson(projectType_);
    }

    return val;
}
bool ProjectVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectType(refVal);
        }
    }
    return ok;
}


std::string ProjectVO::getIdentifier() const
{
    return identifier_;
}

void ProjectVO::setIdentifier(const std::string& value)
{
    identifier_ = value;
    identifierIsSet_ = true;
}

bool ProjectVO::identifierIsSet() const
{
    return identifierIsSet_;
}

void ProjectVO::unsetidentifier()
{
    identifierIsSet_ = false;
}

std::string ProjectVO::getName() const
{
    return name_;
}

void ProjectVO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ProjectVO::nameIsSet() const
{
    return nameIsSet_;
}

void ProjectVO::unsetname()
{
    nameIsSet_ = false;
}

int32_t ProjectVO::getId() const
{
    return id_;
}

void ProjectVO::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ProjectVO::idIsSet() const
{
    return idIsSet_;
}

void ProjectVO::unsetid()
{
    idIsSet_ = false;
}

std::string ProjectVO::getProjectType() const
{
    return projectType_;
}

void ProjectVO::setProjectType(const std::string& value)
{
    projectType_ = value;
    projectTypeIsSet_ = true;
}

bool ProjectVO::projectTypeIsSet() const
{
    return projectTypeIsSet_;
}

void ProjectVO::unsetprojectType()
{
    projectTypeIsSet_ = false;
}

}
}
}
}
}


