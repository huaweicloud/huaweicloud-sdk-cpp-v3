

#include "huaweicloud/metastudio/v1/model/UpdateInstructionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateInstructionRequest::UpdateInstructionRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    instructionId_ = "";
    instructionIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateInstructionRequest::~UpdateInstructionRequest() = default;

void UpdateInstructionRequest::validate()
{
}

web::json::value UpdateInstructionRequest::toJson() const
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
    if(instructionIdIsSet_) {
        val[utility::conversions::to_string_t("instruction_id")] = ModelBase::toJson(instructionId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateInstructionRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instruction_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instruction_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstructionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateInstructionReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateInstructionRequest::getAuthorization() const
{
    return authorization_;
}

void UpdateInstructionRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool UpdateInstructionRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void UpdateInstructionRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string UpdateInstructionRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateInstructionRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateInstructionRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateInstructionRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string UpdateInstructionRequest::getXProjectId() const
{
    return xProjectId_;
}

void UpdateInstructionRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool UpdateInstructionRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void UpdateInstructionRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string UpdateInstructionRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void UpdateInstructionRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool UpdateInstructionRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void UpdateInstructionRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string UpdateInstructionRequest::getInstructionId() const
{
    return instructionId_;
}

void UpdateInstructionRequest::setInstructionId(const std::string& value)
{
    instructionId_ = value;
    instructionIdIsSet_ = true;
}

bool UpdateInstructionRequest::instructionIdIsSet() const
{
    return instructionIdIsSet_;
}

void UpdateInstructionRequest::unsetinstructionId()
{
    instructionIdIsSet_ = false;
}

UpdateInstructionReq UpdateInstructionRequest::getBody() const
{
    return body_;
}

void UpdateInstructionRequest::setBody(const UpdateInstructionReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateInstructionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateInstructionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


