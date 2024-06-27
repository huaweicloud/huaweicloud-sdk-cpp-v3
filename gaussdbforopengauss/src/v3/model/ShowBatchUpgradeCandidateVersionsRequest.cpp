

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowBatchUpgradeCandidateVersionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowBatchUpgradeCandidateVersionsRequest::ShowBatchUpgradeCandidateVersionsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

ShowBatchUpgradeCandidateVersionsRequest::~ShowBatchUpgradeCandidateVersionsRequest() = default;

void ShowBatchUpgradeCandidateVersionsRequest::validate()
{
}

web::json::value ShowBatchUpgradeCandidateVersionsRequest::toJson() const
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
bool ShowBatchUpgradeCandidateVersionsRequest::fromJson(const web::json::value& val)
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


std::string ShowBatchUpgradeCandidateVersionsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowBatchUpgradeCandidateVersionsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowBatchUpgradeCandidateVersionsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowBatchUpgradeCandidateVersionsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

UpgradeInstancesRequestBody ShowBatchUpgradeCandidateVersionsRequest::getBody() const
{
    return body_;
}

void ShowBatchUpgradeCandidateVersionsRequest::setBody(const UpgradeInstancesRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowBatchUpgradeCandidateVersionsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowBatchUpgradeCandidateVersionsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


