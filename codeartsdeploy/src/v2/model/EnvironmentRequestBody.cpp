

#include "huaweicloud/codeartsdeploy/v2/model/EnvironmentRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




EnvironmentRequestBody::EnvironmentRequestBody()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    deployType_ = 0;
    deployTypeIsSet_ = false;
    os_ = "";
    osIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

EnvironmentRequestBody::~EnvironmentRequestBody() = default;

void EnvironmentRequestBody::validate()
{
}

web::json::value EnvironmentRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(deployTypeIsSet_) {
        val[utility::conversions::to_string_t("deploy_type")] = ModelBase::toJson(deployType_);
    }
    if(osIsSet_) {
        val[utility::conversions::to_string_t("os")] = ModelBase::toJson(os_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool EnvironmentRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("deploy_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deploy_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeployType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}


std::string EnvironmentRequestBody::getProjectId() const
{
    return projectId_;
}

void EnvironmentRequestBody::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool EnvironmentRequestBody::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void EnvironmentRequestBody::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string EnvironmentRequestBody::getName() const
{
    return name_;
}

void EnvironmentRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool EnvironmentRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void EnvironmentRequestBody::unsetname()
{
    nameIsSet_ = false;
}

int32_t EnvironmentRequestBody::getDeployType() const
{
    return deployType_;
}

void EnvironmentRequestBody::setDeployType(int32_t value)
{
    deployType_ = value;
    deployTypeIsSet_ = true;
}

bool EnvironmentRequestBody::deployTypeIsSet() const
{
    return deployTypeIsSet_;
}

void EnvironmentRequestBody::unsetdeployType()
{
    deployTypeIsSet_ = false;
}

std::string EnvironmentRequestBody::getOs() const
{
    return os_;
}

void EnvironmentRequestBody::setOs(const std::string& value)
{
    os_ = value;
    osIsSet_ = true;
}

bool EnvironmentRequestBody::osIsSet() const
{
    return osIsSet_;
}

void EnvironmentRequestBody::unsetos()
{
    osIsSet_ = false;
}

std::string EnvironmentRequestBody::getDescription() const
{
    return description_;
}

void EnvironmentRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool EnvironmentRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void EnvironmentRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


