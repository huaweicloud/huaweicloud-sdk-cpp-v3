

#include "huaweicloud/cloudtest/v1/model/CreateVersionTestCaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CreateVersionTestCaseRequest::CreateVersionTestCaseRequest()
{
    versionId_ = "";
    versionIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateVersionTestCaseRequest::~CreateVersionTestCaseRequest() = default;

void CreateVersionTestCaseRequest::validate()
{
}

web::json::value CreateVersionTestCaseRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionIdIsSet_) {
        val[utility::conversions::to_string_t("version_id")] = ModelBase::toJson(versionId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateVersionTestCaseRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("version_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionId(refVal);
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


std::string CreateVersionTestCaseRequest::getVersionId() const
{
    return versionId_;
}

void CreateVersionTestCaseRequest::setVersionId(const std::string& value)
{
    versionId_ = value;
    versionIdIsSet_ = true;
}

bool CreateVersionTestCaseRequest::versionIdIsSet() const
{
    return versionIdIsSet_;
}

void CreateVersionTestCaseRequest::unsetversionId()
{
    versionIdIsSet_ = false;
}

TestCaseInfo CreateVersionTestCaseRequest::getBody() const
{
    return body_;
}

void CreateVersionTestCaseRequest::setBody(const TestCaseInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateVersionTestCaseRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateVersionTestCaseRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


