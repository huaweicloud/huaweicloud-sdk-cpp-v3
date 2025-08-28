

#include "huaweicloud/metastudio/v1/model/SaveTtscTenantConfigsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SaveTtscTenantConfigsRequest::SaveTtscTenantConfigsRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    bodyIsSet_ = false;
}

SaveTtscTenantConfigsRequest::~SaveTtscTenantConfigsRequest() = default;

void SaveTtscTenantConfigsRequest::validate()
{
}

web::json::value SaveTtscTenantConfigsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }
    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(xProjectIdIsSet_) {
        val[utility::conversions::to_string_t("X-Project-Id")] = ModelBase::toJson(xProjectId_);
    }
    if(xAppUserIdIsSet_) {
        val[utility::conversions::to_string_t("X-App-UserId")] = ModelBase::toJson(xAppUserId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SaveTtscTenantConfigsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("X-Project-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Project-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXProjectId(refVal);
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
            SaveTtscTenantConfigsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SaveTtscTenantConfigsRequest::getXRequestId() const
{
    return xRequestId_;
}

void SaveTtscTenantConfigsRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool SaveTtscTenantConfigsRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void SaveTtscTenantConfigsRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string SaveTtscTenantConfigsRequest::getAuthorization() const
{
    return authorization_;
}

void SaveTtscTenantConfigsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool SaveTtscTenantConfigsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void SaveTtscTenantConfigsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string SaveTtscTenantConfigsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void SaveTtscTenantConfigsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool SaveTtscTenantConfigsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void SaveTtscTenantConfigsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string SaveTtscTenantConfigsRequest::getXProjectId() const
{
    return xProjectId_;
}

void SaveTtscTenantConfigsRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool SaveTtscTenantConfigsRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void SaveTtscTenantConfigsRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string SaveTtscTenantConfigsRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void SaveTtscTenantConfigsRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool SaveTtscTenantConfigsRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void SaveTtscTenantConfigsRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

SaveTtscTenantConfigsRequestBody SaveTtscTenantConfigsRequest::getBody() const
{
    return body_;
}

void SaveTtscTenantConfigsRequest::setBody(const SaveTtscTenantConfigsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SaveTtscTenantConfigsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SaveTtscTenantConfigsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


