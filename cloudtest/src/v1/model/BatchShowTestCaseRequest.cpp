

#include "huaweicloud/cloudtest/v1/model/BatchShowTestCaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




BatchShowTestCaseRequest::BatchShowTestCaseRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchShowTestCaseRequest::~BatchShowTestCaseRequest() = default;

void BatchShowTestCaseRequest::validate()
{
}

web::json::value BatchShowTestCaseRequest::toJson() const
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
bool BatchShowTestCaseRequest::fromJson(const web::json::value& val)
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


std::string BatchShowTestCaseRequest::getProjectId() const
{
    return projectId_;
}

void BatchShowTestCaseRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool BatchShowTestCaseRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void BatchShowTestCaseRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

CommRequestTestCasePageParam BatchShowTestCaseRequest::getBody() const
{
    return body_;
}

void BatchShowTestCaseRequest::setBody(const CommRequestTestCasePageParam& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchShowTestCaseRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchShowTestCaseRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


