

#include "huaweicloud/cloudtest/v1/model/RunTestCaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




RunTestCaseRequest::RunTestCaseRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

RunTestCaseRequest::~RunTestCaseRequest() = default;

void RunTestCaseRequest::validate()
{
}

web::json::value RunTestCaseRequest::toJson() const
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
bool RunTestCaseRequest::fromJson(const web::json::value& val)
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
            RunTestCaseRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RunTestCaseRequest::getProjectId() const
{
    return projectId_;
}

void RunTestCaseRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool RunTestCaseRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void RunTestCaseRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

RunTestCaseRequestBody RunTestCaseRequest::getBody() const
{
    return body_;
}

void RunTestCaseRequest::setBody(const RunTestCaseRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RunTestCaseRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RunTestCaseRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


