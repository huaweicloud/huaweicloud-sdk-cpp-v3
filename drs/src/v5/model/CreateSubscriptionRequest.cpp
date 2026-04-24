

#include "huaweicloud/drs/v5/model/CreateSubscriptionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




CreateSubscriptionRequest::CreateSubscriptionRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CreateSubscriptionRequest::~CreateSubscriptionRequest() = default;

void CreateSubscriptionRequest::validate()
{
}

web::json::value CreateSubscriptionRequest::toJson() const
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
bool CreateSubscriptionRequest::fromJson(const web::json::value& val)
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
            SingleCreateSubscriptionReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateSubscriptionRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateSubscriptionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateSubscriptionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateSubscriptionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

SingleCreateSubscriptionReq CreateSubscriptionRequest::getBody() const
{
    return body_;
}

void CreateSubscriptionRequest::setBody(const SingleCreateSubscriptionReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateSubscriptionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateSubscriptionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


