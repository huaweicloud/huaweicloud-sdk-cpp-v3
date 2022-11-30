

#include "huaweicloud/vod/v1/model/PublishAssetsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




PublishAssetsRequest::PublishAssetsRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    bodyIsSet_ = false;
}

PublishAssetsRequest::~PublishAssetsRequest() = default;

void PublishAssetsRequest::validate()
{
}

web::json::value PublishAssetsRequest::toJson() const
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

bool PublishAssetsRequest::fromJson(const web::json::value& val)
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
            PublishAssetReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string PublishAssetsRequest::getAuthorization() const
{
    return authorization_;
}

void PublishAssetsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool PublishAssetsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void PublishAssetsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string PublishAssetsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void PublishAssetsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool PublishAssetsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void PublishAssetsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

PublishAssetReq PublishAssetsRequest::getBody() const
{
    return body_;
}

void PublishAssetsRequest::setBody(const PublishAssetReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool PublishAssetsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void PublishAssetsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


