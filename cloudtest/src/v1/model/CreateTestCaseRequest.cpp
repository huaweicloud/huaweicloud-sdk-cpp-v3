

#include "huaweicloud/cloudtest/v1/model/CreateTestCaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CreateTestCaseRequest::CreateTestCaseRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateTestCaseRequest::~CreateTestCaseRequest() = default;

void CreateTestCaseRequest::validate()
{
}

web::json::value CreateTestCaseRequest::toJson() const
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
bool CreateTestCaseRequest::fromJson(const web::json::value& val)
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
            CreateTestCaseRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateTestCaseRequest::getProjectId() const
{
    return projectId_;
}

void CreateTestCaseRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateTestCaseRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateTestCaseRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

CreateTestCaseRequestBody CreateTestCaseRequest::getBody() const
{
    return body_;
}

void CreateTestCaseRequest::setBody(const CreateTestCaseRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateTestCaseRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateTestCaseRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


