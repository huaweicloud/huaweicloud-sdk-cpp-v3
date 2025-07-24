

#include "huaweicloud/cloudtest/v1/model/ShowTemplateByPageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowTemplateByPageRequest::ShowTemplateByPageRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

ShowTemplateByPageRequest::~ShowTemplateByPageRequest() = default;

void ShowTemplateByPageRequest::validate()
{
}

web::json::value ShowTemplateByPageRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowTemplateByPageRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CommRequestTemplatePageParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowTemplateByPageRequest::getProjectId() const
{
    return projectId_;
}

void ShowTemplateByPageRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowTemplateByPageRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowTemplateByPageRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

CommRequestTemplatePageParam ShowTemplateByPageRequest::getBody() const
{
    return body_;
}

void ShowTemplateByPageRequest::setBody(const CommRequestTemplatePageParam& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowTemplateByPageRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowTemplateByPageRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


