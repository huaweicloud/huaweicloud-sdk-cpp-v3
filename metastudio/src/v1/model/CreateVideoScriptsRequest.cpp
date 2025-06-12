

#include "huaweicloud/metastudio/v1/model/CreateVideoScriptsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateVideoScriptsRequest::CreateVideoScriptsRequest()
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

CreateVideoScriptsRequest::~CreateVideoScriptsRequest() = default;

void CreateVideoScriptsRequest::validate()
{
}

web::json::value CreateVideoScriptsRequest::toJson() const
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
bool CreateVideoScriptsRequest::fromJson(const web::json::value& val)
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
            CreateVideoScriptsReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateVideoScriptsRequest::getAuthorization() const
{
    return authorization_;
}

void CreateVideoScriptsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateVideoScriptsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateVideoScriptsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateVideoScriptsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateVideoScriptsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateVideoScriptsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateVideoScriptsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateVideoScriptsRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreateVideoScriptsRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreateVideoScriptsRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreateVideoScriptsRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreateVideoScriptsRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateVideoScriptsRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateVideoScriptsRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateVideoScriptsRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

CreateVideoScriptsReq CreateVideoScriptsRequest::getBody() const
{
    return body_;
}

void CreateVideoScriptsRequest::setBody(const CreateVideoScriptsReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateVideoScriptsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateVideoScriptsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


