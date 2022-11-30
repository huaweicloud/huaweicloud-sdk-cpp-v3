

#include "huaweicloud/vod/v1/model/CreateAssetProcessTaskRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateAssetProcessTaskRequest::CreateAssetProcessTaskRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    bodyIsSet_ = false;
}

CreateAssetProcessTaskRequest::~CreateAssetProcessTaskRequest() = default;

void CreateAssetProcessTaskRequest::validate()
{
}

web::json::value CreateAssetProcessTaskRequest::toJson() const
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

bool CreateAssetProcessTaskRequest::fromJson(const web::json::value& val)
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
            AssetProcessReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateAssetProcessTaskRequest::getAuthorization() const
{
    return authorization_;
}

void CreateAssetProcessTaskRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateAssetProcessTaskRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateAssetProcessTaskRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateAssetProcessTaskRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateAssetProcessTaskRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateAssetProcessTaskRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateAssetProcessTaskRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

AssetProcessReq CreateAssetProcessTaskRequest::getBody() const
{
    return body_;
}

void CreateAssetProcessTaskRequest::setBody(const AssetProcessReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAssetProcessTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAssetProcessTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


