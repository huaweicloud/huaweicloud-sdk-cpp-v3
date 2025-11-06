

#include "huaweicloud/codeartsrepo/v4/model/ListProjectMergeRequestTemplatesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListProjectMergeRequestTemplatesRequest::ListProjectMergeRequestTemplatesRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    templateName_ = "";
    templateNameIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListProjectMergeRequestTemplatesRequest::~ListProjectMergeRequestTemplatesRequest() = default;

void ListProjectMergeRequestTemplatesRequest::validate()
{
}

web::json::value ListProjectMergeRequestTemplatesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(templateNameIsSet_) {
        val[utility::conversions::to_string_t("template_name")] = ModelBase::toJson(templateName_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListProjectMergeRequestTemplatesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("template_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ListProjectMergeRequestTemplatesRequest::getProjectId() const
{
    return projectId_;
}

void ListProjectMergeRequestTemplatesRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListProjectMergeRequestTemplatesRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListProjectMergeRequestTemplatesRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListProjectMergeRequestTemplatesRequest::getTemplateName() const
{
    return templateName_;
}

void ListProjectMergeRequestTemplatesRequest::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool ListProjectMergeRequestTemplatesRequest::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void ListProjectMergeRequestTemplatesRequest::unsettemplateName()
{
    templateNameIsSet_ = false;
}

int32_t ListProjectMergeRequestTemplatesRequest::getOffset() const
{
    return offset_;
}

void ListProjectMergeRequestTemplatesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListProjectMergeRequestTemplatesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListProjectMergeRequestTemplatesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListProjectMergeRequestTemplatesRequest::getLimit() const
{
    return limit_;
}

void ListProjectMergeRequestTemplatesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListProjectMergeRequestTemplatesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListProjectMergeRequestTemplatesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


