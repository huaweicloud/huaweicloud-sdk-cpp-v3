

#include "huaweicloud/vod/v1/model/CreateWatermarkTemplateRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateWatermarkTemplateRequest::CreateWatermarkTemplateRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    bodyIsSet_ = false;
}

CreateWatermarkTemplateRequest::~CreateWatermarkTemplateRequest() = default;

void CreateWatermarkTemplateRequest::validate()
{
}

web::json::value CreateWatermarkTemplateRequest::toJson() const
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

bool CreateWatermarkTemplateRequest::fromJson(const web::json::value& val)
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
            CreateWatermarkTemplateReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateWatermarkTemplateRequest::getAuthorization() const
{
    return authorization_;
}

void CreateWatermarkTemplateRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateWatermarkTemplateRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateWatermarkTemplateRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateWatermarkTemplateRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateWatermarkTemplateRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateWatermarkTemplateRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateWatermarkTemplateRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

CreateWatermarkTemplateReq CreateWatermarkTemplateRequest::getBody() const
{
    return body_;
}

void CreateWatermarkTemplateRequest::setBody(const CreateWatermarkTemplateReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateWatermarkTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateWatermarkTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


