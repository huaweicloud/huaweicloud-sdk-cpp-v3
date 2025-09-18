

#include "huaweicloud/projectman/v4/model/CreateProjectV4RequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateProjectV4RequestBody::CreateProjectV4RequestBody()
{
    projectName_ = "";
    projectNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    source_ = "";
    sourceIsSet_ = false;
    projectType_ = "";
    projectTypeIsSet_ = false;
    enterpriseId_ = "";
    enterpriseIdIsSet_ = false;
    templateId_ = 0;
    templateIdIsSet_ = false;
}

CreateProjectV4RequestBody::~CreateProjectV4RequestBody() = default;

void CreateProjectV4RequestBody::validate()
{
}

web::json::value CreateProjectV4RequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(sourceIsSet_) {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(source_);
    }
    if(projectTypeIsSet_) {
        val[utility::conversions::to_string_t("project_type")] = ModelBase::toJson(projectType_);
    }
    if(enterpriseIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_id")] = ModelBase::toJson(enterpriseId_);
    }
    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }

    return val;
}
bool CreateProjectV4RequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSource(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enterprise_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
        }
    }
    return ok;
}


std::string CreateProjectV4RequestBody::getProjectName() const
{
    return projectName_;
}

void CreateProjectV4RequestBody::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool CreateProjectV4RequestBody::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void CreateProjectV4RequestBody::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string CreateProjectV4RequestBody::getDescription() const
{
    return description_;
}

void CreateProjectV4RequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateProjectV4RequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateProjectV4RequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateProjectV4RequestBody::getSource() const
{
    return source_;
}

void CreateProjectV4RequestBody::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool CreateProjectV4RequestBody::sourceIsSet() const
{
    return sourceIsSet_;
}

void CreateProjectV4RequestBody::unsetsource()
{
    sourceIsSet_ = false;
}

std::string CreateProjectV4RequestBody::getProjectType() const
{
    return projectType_;
}

void CreateProjectV4RequestBody::setProjectType(const std::string& value)
{
    projectType_ = value;
    projectTypeIsSet_ = true;
}

bool CreateProjectV4RequestBody::projectTypeIsSet() const
{
    return projectTypeIsSet_;
}

void CreateProjectV4RequestBody::unsetprojectType()
{
    projectTypeIsSet_ = false;
}

std::string CreateProjectV4RequestBody::getEnterpriseId() const
{
    return enterpriseId_;
}

void CreateProjectV4RequestBody::setEnterpriseId(const std::string& value)
{
    enterpriseId_ = value;
    enterpriseIdIsSet_ = true;
}

bool CreateProjectV4RequestBody::enterpriseIdIsSet() const
{
    return enterpriseIdIsSet_;
}

void CreateProjectV4RequestBody::unsetenterpriseId()
{
    enterpriseIdIsSet_ = false;
}

int32_t CreateProjectV4RequestBody::getTemplateId() const
{
    return templateId_;
}

void CreateProjectV4RequestBody::setTemplateId(int32_t value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool CreateProjectV4RequestBody::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void CreateProjectV4RequestBody::unsettemplateId()
{
    templateIdIsSet_ = false;
}

}
}
}
}
}


