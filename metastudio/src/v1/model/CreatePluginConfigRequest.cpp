

#include "huaweicloud/metastudio/v1/model/CreatePluginConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreatePluginConfigRequest::CreatePluginConfigRequest()
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

CreatePluginConfigRequest::~CreatePluginConfigRequest() = default;

void CreatePluginConfigRequest::validate()
{
}

web::json::value CreatePluginConfigRequest::toJson() const
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
bool CreatePluginConfigRequest::fromJson(const web::json::value& val)
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
            CreatePluginConfigReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreatePluginConfigRequest::getAuthorization() const
{
    return authorization_;
}

void CreatePluginConfigRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreatePluginConfigRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreatePluginConfigRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreatePluginConfigRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreatePluginConfigRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreatePluginConfigRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreatePluginConfigRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreatePluginConfigRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreatePluginConfigRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreatePluginConfigRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreatePluginConfigRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreatePluginConfigRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreatePluginConfigRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreatePluginConfigRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreatePluginConfigRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

CreatePluginConfigReq CreatePluginConfigRequest::getBody() const
{
    return body_;
}

void CreatePluginConfigRequest::setBody(const CreatePluginConfigReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePluginConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePluginConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


