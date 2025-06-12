

#include "huaweicloud/metastudio/v1/model/CreateLargeFileRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateLargeFileRequest::CreateLargeFileRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateLargeFileRequest::~CreateLargeFileRequest() = default;

void CreateLargeFileRequest::validate()
{
}

web::json::value CreateLargeFileRequest::toJson() const
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
bool CreateLargeFileRequest::fromJson(const web::json::value& val)
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
            LargeFilesCreateReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateLargeFileRequest::getAuthorization() const
{
    return authorization_;
}

void CreateLargeFileRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateLargeFileRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateLargeFileRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateLargeFileRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateLargeFileRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateLargeFileRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateLargeFileRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateLargeFileRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateLargeFileRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateLargeFileRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateLargeFileRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

LargeFilesCreateReq CreateLargeFileRequest::getBody() const
{
    return body_;
}

void CreateLargeFileRequest::setBody(const LargeFilesCreateReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateLargeFileRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateLargeFileRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


