

#include "huaweicloud/metastudio/v1/model/CreateSmartLiveRoomRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateSmartLiveRoomRequest::CreateSmartLiveRoomRequest()
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

CreateSmartLiveRoomRequest::~CreateSmartLiveRoomRequest() = default;

void CreateSmartLiveRoomRequest::validate()
{
}

web::json::value CreateSmartLiveRoomRequest::toJson() const
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
bool CreateSmartLiveRoomRequest::fromJson(const web::json::value& val)
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
            CreateSmartLiveRoomReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateSmartLiveRoomRequest::getAuthorization() const
{
    return authorization_;
}

void CreateSmartLiveRoomRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateSmartLiveRoomRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateSmartLiveRoomRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateSmartLiveRoomRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateSmartLiveRoomRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateSmartLiveRoomRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateSmartLiveRoomRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateSmartLiveRoomRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreateSmartLiveRoomRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreateSmartLiveRoomRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreateSmartLiveRoomRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreateSmartLiveRoomRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateSmartLiveRoomRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateSmartLiveRoomRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateSmartLiveRoomRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

CreateSmartLiveRoomReq CreateSmartLiveRoomRequest::getBody() const
{
    return body_;
}

void CreateSmartLiveRoomRequest::setBody(const CreateSmartLiveRoomReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateSmartLiveRoomRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateSmartLiveRoomRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


