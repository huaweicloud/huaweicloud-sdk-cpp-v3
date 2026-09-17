

#include "huaweicloud/cloudtest/v1/model/UpdateTestVersionCaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




UpdateTestVersionCaseRequest::UpdateTestVersionCaseRequest()
{
    caseUri_ = "";
    caseUriIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateTestVersionCaseRequest::~UpdateTestVersionCaseRequest() = default;

void UpdateTestVersionCaseRequest::validate()
{
}

web::json::value UpdateTestVersionCaseRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(caseUriIsSet_) {
        val[utility::conversions::to_string_t("case_uri")] = ModelBase::toJson(caseUri_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateTestVersionCaseRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("case_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseUri(refVal);
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


std::string UpdateTestVersionCaseRequest::getCaseUri() const
{
    return caseUri_;
}

void UpdateTestVersionCaseRequest::setCaseUri(const std::string& value)
{
    caseUri_ = value;
    caseUriIsSet_ = true;
}

bool UpdateTestVersionCaseRequest::caseUriIsSet() const
{
    return caseUriIsSet_;
}

void UpdateTestVersionCaseRequest::unsetcaseUri()
{
    caseUriIsSet_ = false;
}

TestCaseInfo UpdateTestVersionCaseRequest::getBody() const
{
    return body_;
}

void UpdateTestVersionCaseRequest::setBody(const TestCaseInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateTestVersionCaseRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateTestVersionCaseRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


