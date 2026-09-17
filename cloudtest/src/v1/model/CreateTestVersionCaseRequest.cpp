

#include "huaweicloud/cloudtest/v1/model/CreateTestVersionCaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CreateTestVersionCaseRequest::CreateTestVersionCaseRequest()
{
    versionUri_ = "";
    versionUriIsSet_ = false;
    bodyIsSet_ = false;
}

CreateTestVersionCaseRequest::~CreateTestVersionCaseRequest() = default;

void CreateTestVersionCaseRequest::validate()
{
}

web::json::value CreateTestVersionCaseRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionUriIsSet_) {
        val[utility::conversions::to_string_t("version_uri")] = ModelBase::toJson(versionUri_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateTestVersionCaseRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
            TestCaseInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateTestVersionCaseRequest::getVersionUri() const
{
    return versionUri_;
}

void CreateTestVersionCaseRequest::setVersionUri(const std::string& value)
{
    versionUri_ = value;
    versionUriIsSet_ = true;
}

bool CreateTestVersionCaseRequest::versionUriIsSet() const
{
    return versionUriIsSet_;
}

void CreateTestVersionCaseRequest::unsetversionUri()
{
    versionUriIsSet_ = false;
}

TestCaseInfo CreateTestVersionCaseRequest::getBody() const
{
    return body_;
}

void CreateTestVersionCaseRequest::setBody(const TestCaseInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateTestVersionCaseRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateTestVersionCaseRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


