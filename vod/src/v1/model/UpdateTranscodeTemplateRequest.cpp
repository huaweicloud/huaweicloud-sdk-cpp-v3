

#include "huaweicloud/vod/v1/model/UpdateTranscodeTemplateRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




UpdateTranscodeTemplateRequest::UpdateTranscodeTemplateRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateTranscodeTemplateRequest::~UpdateTranscodeTemplateRequest() = default;

void UpdateTranscodeTemplateRequest::validate()
{
}

web::json::value UpdateTranscodeTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UpdateTranscodeTemplateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Authorization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Authorization"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ModifyTransTemplate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateTranscodeTemplateRequest::getAuthorization() const
{
    return authorization_;
}

void UpdateTranscodeTemplateRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool UpdateTranscodeTemplateRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void UpdateTranscodeTemplateRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string UpdateTranscodeTemplateRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateTranscodeTemplateRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateTranscodeTemplateRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateTranscodeTemplateRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

ModifyTransTemplate UpdateTranscodeTemplateRequest::getBody() const
{
    return body_;
}

void UpdateTranscodeTemplateRequest::setBody(const ModifyTransTemplate& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateTranscodeTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateTranscodeTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


