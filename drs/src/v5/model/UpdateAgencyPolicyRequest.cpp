

#include "huaweicloud/drs/v5/model/UpdateAgencyPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




UpdateAgencyPolicyRequest::UpdateAgencyPolicyRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    agencyName_ = "";
    agencyNameIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateAgencyPolicyRequest::~UpdateAgencyPolicyRequest() = default;

void UpdateAgencyPolicyRequest::validate()
{
}

web::json::value UpdateAgencyPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(agencyNameIsSet_) {
        val[utility::conversions::to_string_t("agency_name")] = ModelBase::toJson(agencyName_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateAgencyPolicyRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("agency_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agency_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgencyName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateAgencyPolicyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateAgencyPolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateAgencyPolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateAgencyPolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateAgencyPolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdateAgencyPolicyRequest::getAgencyName() const
{
    return agencyName_;
}

void UpdateAgencyPolicyRequest::setAgencyName(const std::string& value)
{
    agencyName_ = value;
    agencyNameIsSet_ = true;
}

bool UpdateAgencyPolicyRequest::agencyNameIsSet() const
{
    return agencyNameIsSet_;
}

void UpdateAgencyPolicyRequest::unsetagencyName()
{
    agencyNameIsSet_ = false;
}

UpdateAgencyPolicyRequestBody UpdateAgencyPolicyRequest::getBody() const
{
    return body_;
}

void UpdateAgencyPolicyRequest::setBody(const UpdateAgencyPolicyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAgencyPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAgencyPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


