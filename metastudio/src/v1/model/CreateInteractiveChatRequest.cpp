

#include "huaweicloud/metastudio/v1/model/CreateInteractiveChatRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateInteractiveChatRequest::CreateInteractiveChatRequest()
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

CreateInteractiveChatRequest::~CreateInteractiveChatRequest() = default;

void CreateInteractiveChatRequest::validate()
{
}

web::json::value CreateInteractiveChatRequest::toJson() const
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
bool CreateInteractiveChatRequest::fromJson(const web::json::value& val)
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
            CreateInteractiveChatReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateInteractiveChatRequest::getAuthorization() const
{
    return authorization_;
}

void CreateInteractiveChatRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateInteractiveChatRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateInteractiveChatRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateInteractiveChatRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateInteractiveChatRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateInteractiveChatRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateInteractiveChatRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateInteractiveChatRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreateInteractiveChatRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreateInteractiveChatRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreateInteractiveChatRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreateInteractiveChatRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateInteractiveChatRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateInteractiveChatRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateInteractiveChatRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

CreateInteractiveChatReq CreateInteractiveChatRequest::getBody() const
{
    return body_;
}

void CreateInteractiveChatRequest::setBody(const CreateInteractiveChatReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateInteractiveChatRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateInteractiveChatRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


