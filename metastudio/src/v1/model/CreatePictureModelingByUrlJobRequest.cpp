

#include "huaweicloud/metastudio/v1/model/CreatePictureModelingByUrlJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreatePictureModelingByUrlJobRequest::CreatePictureModelingByUrlJobRequest()
{
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

CreatePictureModelingByUrlJobRequest::~CreatePictureModelingByUrlJobRequest() = default;

void CreatePictureModelingByUrlJobRequest::validate()
{
}

web::json::value CreatePictureModelingByUrlJobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool CreatePictureModelingByUrlJobRequest::fromJson(const web::json::value& val)
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
            PictureModelingByUrlReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreatePictureModelingByUrlJobRequest::getAuthorization() const
{
    return authorization_;
}

void CreatePictureModelingByUrlJobRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreatePictureModelingByUrlJobRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreatePictureModelingByUrlJobRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreatePictureModelingByUrlJobRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreatePictureModelingByUrlJobRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreatePictureModelingByUrlJobRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreatePictureModelingByUrlJobRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreatePictureModelingByUrlJobRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreatePictureModelingByUrlJobRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreatePictureModelingByUrlJobRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreatePictureModelingByUrlJobRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreatePictureModelingByUrlJobRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreatePictureModelingByUrlJobRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreatePictureModelingByUrlJobRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreatePictureModelingByUrlJobRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

PictureModelingByUrlReq CreatePictureModelingByUrlJobRequest::getBody() const
{
    return body_;
}

void CreatePictureModelingByUrlJobRequest::setBody(const PictureModelingByUrlReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePictureModelingByUrlJobRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePictureModelingByUrlJobRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


