

#include "huaweicloud/cloudtest/v1/model/ShowTestcaseByPageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowTestcaseByPageRequest::ShowTestcaseByPageRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

ShowTestcaseByPageRequest::~ShowTestcaseByPageRequest() = default;

void ShowTestcaseByPageRequest::validate()
{
}

web::json::value ShowTestcaseByPageRequest::toJson() const
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
bool ShowTestcaseByPageRequest::fromJson(const web::json::value& val)
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
            CommRequestTestCasePageParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowTestcaseByPageRequest::getProjectId() const
{
    return projectId_;
}

void ShowTestcaseByPageRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowTestcaseByPageRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowTestcaseByPageRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

CommRequestTestCasePageParam ShowTestcaseByPageRequest::getBody() const
{
    return body_;
}

void ShowTestcaseByPageRequest::setBody(const CommRequestTestCasePageParam& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowTestcaseByPageRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowTestcaseByPageRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


