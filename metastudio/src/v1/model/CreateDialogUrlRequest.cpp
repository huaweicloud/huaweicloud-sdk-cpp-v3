

#include "huaweicloud/metastudio/v1/model/CreateDialogUrlRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateDialogUrlRequest::CreateDialogUrlRequest()
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

CreateDialogUrlRequest::~CreateDialogUrlRequest() = default;

void CreateDialogUrlRequest::validate()
{
}

web::json::value CreateDialogUrlRequest::toJson() const
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
bool CreateDialogUrlRequest::fromJson(const web::json::value& val)
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
            CreateDialogUrlReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateDialogUrlRequest::getAuthorization() const
{
    return authorization_;
}

void CreateDialogUrlRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateDialogUrlRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateDialogUrlRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateDialogUrlRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateDialogUrlRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateDialogUrlRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateDialogUrlRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateDialogUrlRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreateDialogUrlRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreateDialogUrlRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreateDialogUrlRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreateDialogUrlRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateDialogUrlRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateDialogUrlRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateDialogUrlRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

CreateDialogUrlReq CreateDialogUrlRequest::getBody() const
{
    return body_;
}

void CreateDialogUrlRequest::setBody(const CreateDialogUrlReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDialogUrlRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDialogUrlRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


