

#include "huaweicloud/metastudio/v1/model/CreateHotWordsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateHotWordsRequest::CreateHotWordsRequest()
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

CreateHotWordsRequest::~CreateHotWordsRequest() = default;

void CreateHotWordsRequest::validate()
{
}

web::json::value CreateHotWordsRequest::toJson() const
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
bool CreateHotWordsRequest::fromJson(const web::json::value& val)
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
            CreateHotWordsReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateHotWordsRequest::getAuthorization() const
{
    return authorization_;
}

void CreateHotWordsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateHotWordsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateHotWordsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateHotWordsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateHotWordsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateHotWordsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateHotWordsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateHotWordsRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreateHotWordsRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreateHotWordsRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreateHotWordsRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreateHotWordsRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateHotWordsRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateHotWordsRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateHotWordsRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

CreateHotWordsReq CreateHotWordsRequest::getBody() const
{
    return body_;
}

void CreateHotWordsRequest::setBody(const CreateHotWordsReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateHotWordsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateHotWordsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


