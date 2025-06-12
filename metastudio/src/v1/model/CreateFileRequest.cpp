

#include "huaweicloud/metastudio/v1/model/CreateFileRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateFileRequest::CreateFileRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateFileRequest::~CreateFileRequest() = default;

void CreateFileRequest::validate()
{
}

web::json::value CreateFileRequest::toJson() const
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
bool CreateFileRequest::fromJson(const web::json::value& val)
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
            FilesCreateReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateFileRequest::getAuthorization() const
{
    return authorization_;
}

void CreateFileRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateFileRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateFileRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateFileRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateFileRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateFileRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateFileRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateFileRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateFileRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateFileRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateFileRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

FilesCreateReq CreateFileRequest::getBody() const
{
    return body_;
}

void CreateFileRequest::setBody(const FilesCreateReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateFileRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateFileRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


