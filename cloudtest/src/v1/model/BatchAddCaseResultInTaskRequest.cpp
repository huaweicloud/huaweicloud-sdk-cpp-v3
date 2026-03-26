

#include "huaweicloud/cloudtest/v1/model/BatchAddCaseResultInTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




BatchAddCaseResultInTaskRequest::BatchAddCaseResultInTaskRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    versionUri_ = "";
    versionUriIsSet_ = false;
    bodyIsSet_ = false;
}

BatchAddCaseResultInTaskRequest::~BatchAddCaseResultInTaskRequest() = default;

void BatchAddCaseResultInTaskRequest::validate()
{
}

web::json::value BatchAddCaseResultInTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(versionUriIsSet_) {
        val[utility::conversions::to_string_t("version_uri")] = ModelBase::toJson(versionUri_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchAddCaseResultInTaskRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("version_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchAddTestCaseResultInTaskInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchAddCaseResultInTaskRequest::getProjectId() const
{
    return projectId_;
}

void BatchAddCaseResultInTaskRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool BatchAddCaseResultInTaskRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void BatchAddCaseResultInTaskRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string BatchAddCaseResultInTaskRequest::getVersionUri() const
{
    return versionUri_;
}

void BatchAddCaseResultInTaskRequest::setVersionUri(const std::string& value)
{
    versionUri_ = value;
    versionUriIsSet_ = true;
}

bool BatchAddCaseResultInTaskRequest::versionUriIsSet() const
{
    return versionUriIsSet_;
}

void BatchAddCaseResultInTaskRequest::unsetversionUri()
{
    versionUriIsSet_ = false;
}

BatchAddTestCaseResultInTaskInfo BatchAddCaseResultInTaskRequest::getBody() const
{
    return body_;
}

void BatchAddCaseResultInTaskRequest::setBody(const BatchAddTestCaseResultInTaskInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchAddCaseResultInTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchAddCaseResultInTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


