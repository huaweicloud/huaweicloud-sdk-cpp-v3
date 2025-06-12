

#include "huaweicloud/metastudio/v1/model/CreateDigitalHumanBusinessCardRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateDigitalHumanBusinessCardRequest::CreateDigitalHumanBusinessCardRequest()
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

CreateDigitalHumanBusinessCardRequest::~CreateDigitalHumanBusinessCardRequest() = default;

void CreateDigitalHumanBusinessCardRequest::validate()
{
}

web::json::value CreateDigitalHumanBusinessCardRequest::toJson() const
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
bool CreateDigitalHumanBusinessCardRequest::fromJson(const web::json::value& val)
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
            CreateDigitalHumanBusinessCardReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateDigitalHumanBusinessCardRequest::getAuthorization() const
{
    return authorization_;
}

void CreateDigitalHumanBusinessCardRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateDigitalHumanBusinessCardRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateDigitalHumanBusinessCardRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateDigitalHumanBusinessCardRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateDigitalHumanBusinessCardRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateDigitalHumanBusinessCardRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateDigitalHumanBusinessCardRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateDigitalHumanBusinessCardRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreateDigitalHumanBusinessCardRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreateDigitalHumanBusinessCardRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreateDigitalHumanBusinessCardRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreateDigitalHumanBusinessCardRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateDigitalHumanBusinessCardRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateDigitalHumanBusinessCardRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateDigitalHumanBusinessCardRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

CreateDigitalHumanBusinessCardReq CreateDigitalHumanBusinessCardRequest::getBody() const
{
    return body_;
}

void CreateDigitalHumanBusinessCardRequest::setBody(const CreateDigitalHumanBusinessCardReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDigitalHumanBusinessCardRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDigitalHumanBusinessCardRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


