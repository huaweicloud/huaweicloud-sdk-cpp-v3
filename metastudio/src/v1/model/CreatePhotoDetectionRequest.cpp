

#include "huaweicloud/metastudio/v1/model/CreatePhotoDetectionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreatePhotoDetectionRequest::CreatePhotoDetectionRequest()
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

CreatePhotoDetectionRequest::~CreatePhotoDetectionRequest() = default;

void CreatePhotoDetectionRequest::validate()
{
}

web::json::value CreatePhotoDetectionRequest::toJson() const
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
bool CreatePhotoDetectionRequest::fromJson(const web::json::value& val)
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
            CreatePhotoDetectionReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreatePhotoDetectionRequest::getAuthorization() const
{
    return authorization_;
}

void CreatePhotoDetectionRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreatePhotoDetectionRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreatePhotoDetectionRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreatePhotoDetectionRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreatePhotoDetectionRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreatePhotoDetectionRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreatePhotoDetectionRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreatePhotoDetectionRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreatePhotoDetectionRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreatePhotoDetectionRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreatePhotoDetectionRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreatePhotoDetectionRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreatePhotoDetectionRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreatePhotoDetectionRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreatePhotoDetectionRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

CreatePhotoDetectionReq CreatePhotoDetectionRequest::getBody() const
{
    return body_;
}

void CreatePhotoDetectionRequest::setBody(const CreatePhotoDetectionReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePhotoDetectionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePhotoDetectionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


