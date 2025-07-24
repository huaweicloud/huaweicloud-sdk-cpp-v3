

#include "huaweicloud/cloudtest/v1/model/BatchUpdateVersionTestCasesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




BatchUpdateVersionTestCasesRequest::BatchUpdateVersionTestCasesRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchUpdateVersionTestCasesRequest::~BatchUpdateVersionTestCasesRequest() = default;

void BatchUpdateVersionTestCasesRequest::validate()
{
}

web::json::value BatchUpdateVersionTestCasesRequest::toJson() const
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
bool BatchUpdateVersionTestCasesRequest::fromJson(const web::json::value& val)
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
            UpdateTestCaseListInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchUpdateVersionTestCasesRequest::getProjectId() const
{
    return projectId_;
}

void BatchUpdateVersionTestCasesRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool BatchUpdateVersionTestCasesRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void BatchUpdateVersionTestCasesRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

UpdateTestCaseListInfo BatchUpdateVersionTestCasesRequest::getBody() const
{
    return body_;
}

void BatchUpdateVersionTestCasesRequest::setBody(const UpdateTestCaseListInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchUpdateVersionTestCasesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchUpdateVersionTestCasesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


