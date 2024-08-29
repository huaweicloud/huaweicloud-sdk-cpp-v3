

#include "huaweicloud/gaussdbforopengauss/v3/model/CreateGaussDbInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CreateGaussDbInstanceRequest::CreateGaussDbInstanceRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    subscriptionAgency_ = "";
    subscriptionAgencyIsSet_ = false;
    bodyIsSet_ = false;
}

CreateGaussDbInstanceRequest::~CreateGaussDbInstanceRequest() = default;

void CreateGaussDbInstanceRequest::validate()
{
}

web::json::value CreateGaussDbInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(subscriptionAgencyIsSet_) {
        val[utility::conversions::to_string_t("Subscription-Agency")] = ModelBase::toJson(subscriptionAgency_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateGaussDbInstanceRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("Subscription-Agency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Subscription-Agency"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptionAgency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            OpenGaussInstanceRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateGaussDbInstanceRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateGaussDbInstanceRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateGaussDbInstanceRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateGaussDbInstanceRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string CreateGaussDbInstanceRequest::getSubscriptionAgency() const
{
    return subscriptionAgency_;
}

void CreateGaussDbInstanceRequest::setSubscriptionAgency(const std::string& value)
{
    subscriptionAgency_ = value;
    subscriptionAgencyIsSet_ = true;
}

bool CreateGaussDbInstanceRequest::subscriptionAgencyIsSet() const
{
    return subscriptionAgencyIsSet_;
}

void CreateGaussDbInstanceRequest::unsetsubscriptionAgency()
{
    subscriptionAgencyIsSet_ = false;
}

OpenGaussInstanceRequestBody CreateGaussDbInstanceRequest::getBody() const
{
    return body_;
}

void CreateGaussDbInstanceRequest::setBody(const OpenGaussInstanceRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateGaussDbInstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateGaussDbInstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


