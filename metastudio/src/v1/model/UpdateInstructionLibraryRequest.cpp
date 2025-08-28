

#include "huaweicloud/metastudio/v1/model/UpdateInstructionLibraryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateInstructionLibraryRequest::UpdateInstructionLibraryRequest()
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
    bodyIsSet_ = false;
}

UpdateInstructionLibraryRequest::~UpdateInstructionLibraryRequest() = default;

void UpdateInstructionLibraryRequest::validate()
{
}

web::json::value UpdateInstructionLibraryRequest::toJson() const
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
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateInstructionLibraryRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateInstructionLibraryReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateInstructionLibraryRequest::getAuthorization() const
{
    return authorization_;
}

void UpdateInstructionLibraryRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool UpdateInstructionLibraryRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void UpdateInstructionLibraryRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string UpdateInstructionLibraryRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateInstructionLibraryRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateInstructionLibraryRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateInstructionLibraryRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string UpdateInstructionLibraryRequest::getXProjectId() const
{
    return xProjectId_;
}

void UpdateInstructionLibraryRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool UpdateInstructionLibraryRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void UpdateInstructionLibraryRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string UpdateInstructionLibraryRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void UpdateInstructionLibraryRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool UpdateInstructionLibraryRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void UpdateInstructionLibraryRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string UpdateInstructionLibraryRequest::getInstructionLibraryId() const
{
    return instructionLibraryId_;
}

void UpdateInstructionLibraryRequest::setInstructionLibraryId(const std::string& value)
{
    instructionLibraryId_ = value;
    instructionLibraryIdIsSet_ = true;
}

bool UpdateInstructionLibraryRequest::instructionLibraryIdIsSet() const
{
    return instructionLibraryIdIsSet_;
}

void UpdateInstructionLibraryRequest::unsetinstructionLibraryId()
{
    instructionLibraryIdIsSet_ = false;
}

UpdateInstructionLibraryReq UpdateInstructionLibraryRequest::getBody() const
{
    return body_;
}

void UpdateInstructionLibraryRequest::setBody(const UpdateInstructionLibraryReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateInstructionLibraryRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateInstructionLibraryRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


