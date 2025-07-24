

#include "huaweicloud/cloudtest/v1/model/ShowReviewByPageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowReviewByPageRequest::ShowReviewByPageRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

ShowReviewByPageRequest::~ShowReviewByPageRequest() = default;

void ShowReviewByPageRequest::validate()
{
}

web::json::value ShowReviewByPageRequest::toJson() const
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
bool ShowReviewByPageRequest::fromJson(const web::json::value& val)
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
            CommRequestReviewPageParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowReviewByPageRequest::getProjectId() const
{
    return projectId_;
}

void ShowReviewByPageRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowReviewByPageRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowReviewByPageRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

CommRequestReviewPageParam ShowReviewByPageRequest::getBody() const
{
    return body_;
}

void ShowReviewByPageRequest::setBody(const CommRequestReviewPageParam& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowReviewByPageRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowReviewByPageRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


