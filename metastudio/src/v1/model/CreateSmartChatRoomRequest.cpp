

#include "huaweicloud/metastudio/v1/model/CreateSmartChatRoomRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateSmartChatRoomRequest::CreateSmartChatRoomRequest()
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

CreateSmartChatRoomRequest::~CreateSmartChatRoomRequest() = default;

void CreateSmartChatRoomRequest::validate()
{
}

web::json::value CreateSmartChatRoomRequest::toJson() const
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
bool CreateSmartChatRoomRequest::fromJson(const web::json::value& val)
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
            CreateSmartChatRoomReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateSmartChatRoomRequest::getAuthorization() const
{
    return authorization_;
}

void CreateSmartChatRoomRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateSmartChatRoomRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateSmartChatRoomRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateSmartChatRoomRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateSmartChatRoomRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateSmartChatRoomRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateSmartChatRoomRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateSmartChatRoomRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreateSmartChatRoomRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreateSmartChatRoomRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreateSmartChatRoomRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreateSmartChatRoomRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateSmartChatRoomRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateSmartChatRoomRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateSmartChatRoomRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

CreateSmartChatRoomReq CreateSmartChatRoomRequest::getBody() const
{
    return body_;
}

void CreateSmartChatRoomRequest::setBody(const CreateSmartChatRoomReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateSmartChatRoomRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateSmartChatRoomRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


