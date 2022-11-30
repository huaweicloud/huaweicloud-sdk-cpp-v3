

#include "huaweicloud/vod/v1/model/UpdateTemplateGroupCollectionRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




UpdateTemplateGroupCollectionRequest::UpdateTemplateGroupCollectionRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateTemplateGroupCollectionRequest::~UpdateTemplateGroupCollectionRequest() = default;

void UpdateTemplateGroupCollectionRequest::validate()
{
}

web::json::value UpdateTemplateGroupCollectionRequest::toJson() const
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

bool UpdateTemplateGroupCollectionRequest::fromJson(const web::json::value& val)
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
            ModifyTemplateGroupCollection refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateTemplateGroupCollectionRequest::getAuthorization() const
{
    return authorization_;
}

void UpdateTemplateGroupCollectionRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool UpdateTemplateGroupCollectionRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void UpdateTemplateGroupCollectionRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string UpdateTemplateGroupCollectionRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateTemplateGroupCollectionRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateTemplateGroupCollectionRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateTemplateGroupCollectionRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

ModifyTemplateGroupCollection UpdateTemplateGroupCollectionRequest::getBody() const
{
    return body_;
}

void UpdateTemplateGroupCollectionRequest::setBody(const ModifyTemplateGroupCollection& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateTemplateGroupCollectionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateTemplateGroupCollectionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


