

#include "huaweicloud/cloudtest/v1/model/ShowDefaultTemplateByPageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowDefaultTemplateByPageRequest::ShowDefaultTemplateByPageRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

ShowDefaultTemplateByPageRequest::~ShowDefaultTemplateByPageRequest() = default;

void ShowDefaultTemplateByPageRequest::validate()
{
}

web::json::value ShowDefaultTemplateByPageRequest::toJson() const
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
bool ShowDefaultTemplateByPageRequest::fromJson(const web::json::value& val)
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
            CommRequestGetDefaultTemplateParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowDefaultTemplateByPageRequest::getProjectId() const
{
    return projectId_;
}

void ShowDefaultTemplateByPageRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowDefaultTemplateByPageRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowDefaultTemplateByPageRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

CommRequestGetDefaultTemplateParam ShowDefaultTemplateByPageRequest::getBody() const
{
    return body_;
}

void ShowDefaultTemplateByPageRequest::setBody(const CommRequestGetDefaultTemplateParam& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowDefaultTemplateByPageRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowDefaultTemplateByPageRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


