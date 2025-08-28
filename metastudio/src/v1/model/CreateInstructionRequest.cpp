

#include "huaweicloud/metastudio/v1/model/CreateInstructionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateInstructionRequest::CreateInstructionRequest()
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

CreateInstructionRequest::~CreateInstructionRequest() = default;

void CreateInstructionRequest::validate()
{
}

web::json::value CreateInstructionRequest::toJson() const
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
bool CreateInstructionRequest::fromJson(const web::json::value& val)
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
            CreateInstructionReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateInstructionRequest::getAuthorization() const
{
    return authorization_;
}

void CreateInstructionRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateInstructionRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateInstructionRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateInstructionRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateInstructionRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateInstructionRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateInstructionRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateInstructionRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreateInstructionRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreateInstructionRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreateInstructionRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreateInstructionRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateInstructionRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateInstructionRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateInstructionRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

CreateInstructionReq CreateInstructionRequest::getBody() const
{
    return body_;
}

void CreateInstructionRequest::setBody(const CreateInstructionReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateInstructionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateInstructionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


