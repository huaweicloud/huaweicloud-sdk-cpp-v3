

#include "huaweicloud/metastudio/v1/model/CreateTtsaRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateTtsaRequest::CreateTtsaRequest()
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

CreateTtsaRequest::~CreateTtsaRequest() = default;

void CreateTtsaRequest::validate()
{
}

web::json::value CreateTtsaRequest::toJson() const
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
bool CreateTtsaRequest::fromJson(const web::json::value& val)
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
            CreateTTSAReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateTtsaRequest::getAuthorization() const
{
    return authorization_;
}

void CreateTtsaRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateTtsaRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateTtsaRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateTtsaRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateTtsaRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateTtsaRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateTtsaRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateTtsaRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreateTtsaRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreateTtsaRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreateTtsaRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreateTtsaRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateTtsaRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateTtsaRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateTtsaRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

CreateTTSAReq CreateTtsaRequest::getBody() const
{
    return body_;
}

void CreateTtsaRequest::setBody(const CreateTTSAReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateTtsaRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateTtsaRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


