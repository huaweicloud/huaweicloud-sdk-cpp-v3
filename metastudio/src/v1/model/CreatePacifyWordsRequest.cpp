

#include "huaweicloud/metastudio/v1/model/CreatePacifyWordsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreatePacifyWordsRequest::CreatePacifyWordsRequest()
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

CreatePacifyWordsRequest::~CreatePacifyWordsRequest() = default;

void CreatePacifyWordsRequest::validate()
{
}

web::json::value CreatePacifyWordsRequest::toJson() const
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
bool CreatePacifyWordsRequest::fromJson(const web::json::value& val)
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
            CreatePacifyWordsReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreatePacifyWordsRequest::getAuthorization() const
{
    return authorization_;
}

void CreatePacifyWordsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreatePacifyWordsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreatePacifyWordsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreatePacifyWordsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreatePacifyWordsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreatePacifyWordsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreatePacifyWordsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreatePacifyWordsRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreatePacifyWordsRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreatePacifyWordsRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreatePacifyWordsRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreatePacifyWordsRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreatePacifyWordsRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreatePacifyWordsRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreatePacifyWordsRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

CreatePacifyWordsReq CreatePacifyWordsRequest::getBody() const
{
    return body_;
}

void CreatePacifyWordsRequest::setBody(const CreatePacifyWordsReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePacifyWordsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePacifyWordsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


