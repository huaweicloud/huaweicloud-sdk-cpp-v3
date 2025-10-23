

#include "huaweicloud/codehub/v4/model/DeleteProjectMergeRequestTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




DeleteProjectMergeRequestTemplateRequest::DeleteProjectMergeRequestTemplateRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    templateId_ = 0;
    templateIdIsSet_ = false;
}

DeleteProjectMergeRequestTemplateRequest::~DeleteProjectMergeRequestTemplateRequest() = default;

void DeleteProjectMergeRequestTemplateRequest::validate()
{
}

web::json::value DeleteProjectMergeRequestTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }

    return val;
}
bool DeleteProjectMergeRequestTemplateRequest::fromJson(const web::json::value& val)
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


std::string DeleteProjectMergeRequestTemplateRequest::getProjectId() const
{
    return projectId_;
}

void DeleteProjectMergeRequestTemplateRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DeleteProjectMergeRequestTemplateRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DeleteProjectMergeRequestTemplateRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t DeleteProjectMergeRequestTemplateRequest::getTemplateId() const
{
    return templateId_;
}

void DeleteProjectMergeRequestTemplateRequest::setTemplateId(int32_t value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool DeleteProjectMergeRequestTemplateRequest::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void DeleteProjectMergeRequestTemplateRequest::unsettemplateId()
{
    templateIdIsSet_ = false;
}

}
}
}
}
}


