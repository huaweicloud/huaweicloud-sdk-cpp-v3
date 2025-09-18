

#include "huaweicloud/projectman/v4/model/TemplateListV4ResponseBody_templates.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




TemplateListV4ResponseBody_templates::TemplateListV4ResponseBody_templates()
{
    id_ = 0;
    idIsSet_ = false;
    projectId_ = 0;
    projectIdIsSet_ = false;
    trackerId_ = 0;
    trackerIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    issueFieldConfig_ = "";
    issueFieldConfigIsSet_ = false;
}

TemplateListV4ResponseBody_templates::~TemplateListV4ResponseBody_templates() = default;

void TemplateListV4ResponseBody_templates::validate()
{
}

web::json::value TemplateListV4ResponseBody_templates::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(trackerIdIsSet_) {
        val[utility::conversions::to_string_t("tracker_id")] = ModelBase::toJson(trackerId_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(issueFieldConfigIsSet_) {
        val[utility::conversions::to_string_t("issue_field_config")] = ModelBase::toJson(issueFieldConfig_);
    }

    return val;
}
bool TemplateListV4ResponseBody_templates::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tracker_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tracker_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrackerId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("issue_field_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_field_config"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueFieldConfig(refVal);
        }
    }
    return ok;
}


int32_t TemplateListV4ResponseBody_templates::getId() const
{
    return id_;
}

void TemplateListV4ResponseBody_templates::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool TemplateListV4ResponseBody_templates::idIsSet() const
{
    return idIsSet_;
}

void TemplateListV4ResponseBody_templates::unsetid()
{
    idIsSet_ = false;
}

int32_t TemplateListV4ResponseBody_templates::getProjectId() const
{
    return projectId_;
}

void TemplateListV4ResponseBody_templates::setProjectId(int32_t value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool TemplateListV4ResponseBody_templates::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void TemplateListV4ResponseBody_templates::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t TemplateListV4ResponseBody_templates::getTrackerId() const
{
    return trackerId_;
}

void TemplateListV4ResponseBody_templates::setTrackerId(int32_t value)
{
    trackerId_ = value;
    trackerIdIsSet_ = true;
}

bool TemplateListV4ResponseBody_templates::trackerIdIsSet() const
{
    return trackerIdIsSet_;
}

void TemplateListV4ResponseBody_templates::unsettrackerId()
{
    trackerIdIsSet_ = false;
}

std::string TemplateListV4ResponseBody_templates::getDescription() const
{
    return description_;
}

void TemplateListV4ResponseBody_templates::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool TemplateListV4ResponseBody_templates::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void TemplateListV4ResponseBody_templates::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string TemplateListV4ResponseBody_templates::getIssueFieldConfig() const
{
    return issueFieldConfig_;
}

void TemplateListV4ResponseBody_templates::setIssueFieldConfig(const std::string& value)
{
    issueFieldConfig_ = value;
    issueFieldConfigIsSet_ = true;
}

bool TemplateListV4ResponseBody_templates::issueFieldConfigIsSet() const
{
    return issueFieldConfigIsSet_;
}

void TemplateListV4ResponseBody_templates::unsetissueFieldConfig()
{
    issueFieldConfigIsSet_ = false;
}

}
}
}
}
}


