

#include "huaweicloud/metastudio/v1/model/BatchExecuteAssetActionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




BatchExecuteAssetActionRequest::BatchExecuteAssetActionRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchExecuteAssetActionRequest::~BatchExecuteAssetActionRequest() = default;

void BatchExecuteAssetActionRequest::validate()
{
}

web::json::value BatchExecuteAssetActionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(xAppUserIdIsSet_) {
        val[utility::conversions::to_string_t("X-App-UserId")] = ModelBase::toJson(xAppUserId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchExecuteAssetActionRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-App-UserId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-App-UserId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXAppUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchAssetActionReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchExecuteAssetActionRequest::getAuthorization() const
{
    return authorization_;
}

void BatchExecuteAssetActionRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool BatchExecuteAssetActionRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void BatchExecuteAssetActionRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string BatchExecuteAssetActionRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void BatchExecuteAssetActionRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool BatchExecuteAssetActionRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void BatchExecuteAssetActionRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string BatchExecuteAssetActionRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void BatchExecuteAssetActionRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool BatchExecuteAssetActionRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void BatchExecuteAssetActionRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

BatchAssetActionReq BatchExecuteAssetActionRequest::getBody() const
{
    return body_;
}

void BatchExecuteAssetActionRequest::setBody(const BatchAssetActionReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchExecuteAssetActionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchExecuteAssetActionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


