

#include "huaweicloud/metastudio/v1/model/ShowInstructionLibraryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowInstructionLibraryRequest::ShowInstructionLibraryRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    instructionLibraryId_ = "";
    instructionLibraryIdIsSet_ = false;
}

ShowInstructionLibraryRequest::~ShowInstructionLibraryRequest() = default;

void ShowInstructionLibraryRequest::validate()
{
}

web::json::value ShowInstructionLibraryRequest::toJson() const
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
    if(instructionLibraryIdIsSet_) {
        val[utility::conversions::to_string_t("instruction_library_id")] = ModelBase::toJson(instructionLibraryId_);
    }

    return val;
}
bool ShowInstructionLibraryRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instruction_library_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instruction_library_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstructionLibraryId(refVal);
        }
    }
    return ok;
}


std::string ShowInstructionLibraryRequest::getAuthorization() const
{
    return authorization_;
}

void ShowInstructionLibraryRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowInstructionLibraryRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowInstructionLibraryRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowInstructionLibraryRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowInstructionLibraryRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowInstructionLibraryRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowInstructionLibraryRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowInstructionLibraryRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowInstructionLibraryRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowInstructionLibraryRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowInstructionLibraryRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowInstructionLibraryRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowInstructionLibraryRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowInstructionLibraryRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowInstructionLibraryRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string ShowInstructionLibraryRequest::getInstructionLibraryId() const
{
    return instructionLibraryId_;
}

void ShowInstructionLibraryRequest::setInstructionLibraryId(const std::string& value)
{
    instructionLibraryId_ = value;
    instructionLibraryIdIsSet_ = true;
}

bool ShowInstructionLibraryRequest::instructionLibraryIdIsSet() const
{
    return instructionLibraryIdIsSet_;
}

void ShowInstructionLibraryRequest::unsetinstructionLibraryId()
{
    instructionLibraryIdIsSet_ = false;
}

}
}
}
}
}


