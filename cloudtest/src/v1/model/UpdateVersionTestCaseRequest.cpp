

#include "huaweicloud/cloudtest/v1/model/UpdateVersionTestCaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




UpdateVersionTestCaseRequest::UpdateVersionTestCaseRequest()
{
    caseId_ = "";
    caseIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateVersionTestCaseRequest::~UpdateVersionTestCaseRequest() = default;

void UpdateVersionTestCaseRequest::validate()
{
}

web::json::value UpdateVersionTestCaseRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(caseIdIsSet_) {
        val[utility::conversions::to_string_t("case_id")] = ModelBase::toJson(caseId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateVersionTestCaseRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("case_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            TestCaseInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateVersionTestCaseRequest::getCaseId() const
{
    return caseId_;
}

void UpdateVersionTestCaseRequest::setCaseId(const std::string& value)
{
    caseId_ = value;
    caseIdIsSet_ = true;
}

bool UpdateVersionTestCaseRequest::caseIdIsSet() const
{
    return caseIdIsSet_;
}

void UpdateVersionTestCaseRequest::unsetcaseId()
{
    caseIdIsSet_ = false;
}

TestCaseInfo UpdateVersionTestCaseRequest::getBody() const
{
    return body_;
}

void UpdateVersionTestCaseRequest::setBody(const TestCaseInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateVersionTestCaseRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateVersionTestCaseRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


