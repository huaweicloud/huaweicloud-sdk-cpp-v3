

#include "huaweicloud/metastudio/v1/model/ConfirmFileUploadRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ConfirmFileUploadRequest::ConfirmFileUploadRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    fileId_ = "";
    fileIdIsSet_ = false;
    bodyIsSet_ = false;
}

ConfirmFileUploadRequest::~ConfirmFileUploadRequest() = default;

void ConfirmFileUploadRequest::validate()
{
}

web::json::value ConfirmFileUploadRequest::toJson() const
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
    if(fileIdIsSet_) {
        val[utility::conversions::to_string_t("file_id")] = ModelBase::toJson(fileId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ConfirmFileUploadRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("file_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ConfirmFileUploadRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ConfirmFileUploadRequest::getAuthorization() const
{
    return authorization_;
}

void ConfirmFileUploadRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ConfirmFileUploadRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ConfirmFileUploadRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ConfirmFileUploadRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ConfirmFileUploadRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ConfirmFileUploadRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ConfirmFileUploadRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ConfirmFileUploadRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ConfirmFileUploadRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ConfirmFileUploadRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ConfirmFileUploadRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string ConfirmFileUploadRequest::getFileId() const
{
    return fileId_;
}

void ConfirmFileUploadRequest::setFileId(const std::string& value)
{
    fileId_ = value;
    fileIdIsSet_ = true;
}

bool ConfirmFileUploadRequest::fileIdIsSet() const
{
    return fileIdIsSet_;
}

void ConfirmFileUploadRequest::unsetfileId()
{
    fileIdIsSet_ = false;
}

ConfirmFileUploadRequestBody ConfirmFileUploadRequest::getBody() const
{
    return body_;
}

void ConfirmFileUploadRequest::setBody(const ConfirmFileUploadRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ConfirmFileUploadRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ConfirmFileUploadRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


