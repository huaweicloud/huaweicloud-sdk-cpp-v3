

#include "huaweicloud/gaussdbforopengauss/v3/model/BatchShowUpgradeCandidateVersionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




BatchShowUpgradeCandidateVersionsRequest::BatchShowUpgradeCandidateVersionsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

BatchShowUpgradeCandidateVersionsRequest::~BatchShowUpgradeCandidateVersionsRequest() = default;

void BatchShowUpgradeCandidateVersionsRequest::validate()
{
}

web::json::value BatchShowUpgradeCandidateVersionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchShowUpgradeCandidateVersionsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpgradeInstancesRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchShowUpgradeCandidateVersionsRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchShowUpgradeCandidateVersionsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchShowUpgradeCandidateVersionsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchShowUpgradeCandidateVersionsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

UpgradeInstancesRequestBody BatchShowUpgradeCandidateVersionsRequest::getBody() const
{
    return body_;
}

void BatchShowUpgradeCandidateVersionsRequest::setBody(const UpgradeInstancesRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchShowUpgradeCandidateVersionsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchShowUpgradeCandidateVersionsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


