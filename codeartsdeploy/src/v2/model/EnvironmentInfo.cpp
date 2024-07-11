

#include "huaweicloud/codeartsdeploy/v2/model/EnvironmentInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




EnvironmentInfo::EnvironmentInfo()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
    appName_ = "";
    appNameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
}

EnvironmentInfo::~EnvironmentInfo() = default;

void EnvironmentInfo::validate()
{
}

web::json::value EnvironmentInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(appNameIsSet_) {
        val[utility::conversions::to_string_t("app_name")] = ModelBase::toJson(appName_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool EnvironmentInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    return ok;
}


std::string EnvironmentInfo::getId() const
{
    return id_;
}

void EnvironmentInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool EnvironmentInfo::idIsSet() const
{
    return idIsSet_;
}

void EnvironmentInfo::unsetid()
{
    idIsSet_ = false;
}

std::string EnvironmentInfo::getName() const
{
    return name_;
}

void EnvironmentInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool EnvironmentInfo::nameIsSet() const
{
    return nameIsSet_;
}

void EnvironmentInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string EnvironmentInfo::getAppId() const
{
    return appId_;
}

void EnvironmentInfo::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool EnvironmentInfo::appIdIsSet() const
{
    return appIdIsSet_;
}

void EnvironmentInfo::unsetappId()
{
    appIdIsSet_ = false;
}

std::string EnvironmentInfo::getAppName() const
{
    return appName_;
}

void EnvironmentInfo::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool EnvironmentInfo::appNameIsSet() const
{
    return appNameIsSet_;
}

void EnvironmentInfo::unsetappName()
{
    appNameIsSet_ = false;
}

std::string EnvironmentInfo::getProjectId() const
{
    return projectId_;
}

void EnvironmentInfo::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool EnvironmentInfo::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void EnvironmentInfo::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


