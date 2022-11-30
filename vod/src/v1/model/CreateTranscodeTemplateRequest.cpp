

#include "huaweicloud/vod/v1/model/CreateTranscodeTemplateRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateTranscodeTemplateRequest::CreateTranscodeTemplateRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    bodyIsSet_ = false;
}

CreateTranscodeTemplateRequest::~CreateTranscodeTemplateRequest() = default;

void CreateTranscodeTemplateRequest::validate()
{
}

web::json::value CreateTranscodeTemplateRequest::toJson() const
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

bool CreateTranscodeTemplateRequest::fromJson(const web::json::value& val)
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
            CreateTranscodeTemplate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateTranscodeTemplateRequest::getAuthorization() const
{
    return authorization_;
}

void CreateTranscodeTemplateRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateTranscodeTemplateRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateTranscodeTemplateRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateTranscodeTemplateRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateTranscodeTemplateRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateTranscodeTemplateRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateTranscodeTemplateRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

CreateTranscodeTemplate CreateTranscodeTemplateRequest::getBody() const
{
    return body_;
}

void CreateTranscodeTemplateRequest::setBody(const CreateTranscodeTemplate& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateTranscodeTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateTranscodeTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


