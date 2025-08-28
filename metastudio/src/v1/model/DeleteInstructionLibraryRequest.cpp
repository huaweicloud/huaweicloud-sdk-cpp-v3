

#include "huaweicloud/metastudio/v1/model/DeleteInstructionLibraryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteInstructionLibraryRequest::DeleteInstructionLibraryRequest()
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

DeleteInstructionLibraryRequest::~DeleteInstructionLibraryRequest() = default;

void DeleteInstructionLibraryRequest::validate()
{
}

web::json::value DeleteInstructionLibraryRequest::toJson() const
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
bool DeleteInstructionLibraryRequest::fromJson(const web::json::value& val)
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
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteInstructionLibraryRequest::getAuthorization() const
{
    return authorization_;
}

void DeleteInstructionLibraryRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool DeleteInstructionLibraryRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void DeleteInstructionLibraryRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string DeleteInstructionLibraryRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void DeleteInstructionLibraryRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool DeleteInstructionLibraryRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void DeleteInstructionLibraryRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string DeleteInstructionLibraryRequest::getXProjectId() const
{
    return xProjectId_;
}

void DeleteInstructionLibraryRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool DeleteInstructionLibraryRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void DeleteInstructionLibraryRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string DeleteInstructionLibraryRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void DeleteInstructionLibraryRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool DeleteInstructionLibraryRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void DeleteInstructionLibraryRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::vector<std::string>& DeleteInstructionLibraryRequest::getBody()
{
    return body_;
}

void DeleteInstructionLibraryRequest::setBody(const std::vector<std::string>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteInstructionLibraryRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteInstructionLibraryRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


