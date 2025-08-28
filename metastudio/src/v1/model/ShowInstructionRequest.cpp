

#include "huaweicloud/metastudio/v1/model/ShowInstructionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowInstructionRequest::ShowInstructionRequest()
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
}

ShowInstructionRequest::~ShowInstructionRequest() = default;

void ShowInstructionRequest::validate()
{
}

web::json::value ShowInstructionRequest::toJson() const
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

    return val;
}
bool ShowInstructionRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowInstructionRequest::getAuthorization() const
{
    return authorization_;
}

void ShowInstructionRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowInstructionRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowInstructionRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowInstructionRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowInstructionRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowInstructionRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowInstructionRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowInstructionRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowInstructionRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowInstructionRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowInstructionRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowInstructionRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowInstructionRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowInstructionRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowInstructionRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string ShowInstructionRequest::getInstructionId() const
{
    return instructionId_;
}

void ShowInstructionRequest::setInstructionId(const std::string& value)
{
    instructionId_ = value;
    instructionIdIsSet_ = true;
}

bool ShowInstructionRequest::instructionIdIsSet() const
{
    return instructionIdIsSet_;
}

void ShowInstructionRequest::unsetinstructionId()
{
    instructionIdIsSet_ = false;
}

}
}
}
}
}


