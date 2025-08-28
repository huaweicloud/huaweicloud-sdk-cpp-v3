

#include "huaweicloud/metastudio/v1/model/CreateInstructionLibraryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateInstructionLibraryRequest::CreateInstructionLibraryRequest()
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

CreateInstructionLibraryRequest::~CreateInstructionLibraryRequest() = default;

void CreateInstructionLibraryRequest::validate()
{
}

web::json::value CreateInstructionLibraryRequest::toJson() const
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
bool CreateInstructionLibraryRequest::fromJson(const web::json::value& val)
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
            CreateInstructionLibraryReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateInstructionLibraryRequest::getAuthorization() const
{
    return authorization_;
}

void CreateInstructionLibraryRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateInstructionLibraryRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateInstructionLibraryRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateInstructionLibraryRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateInstructionLibraryRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateInstructionLibraryRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateInstructionLibraryRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateInstructionLibraryRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreateInstructionLibraryRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreateInstructionLibraryRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreateInstructionLibraryRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreateInstructionLibraryRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateInstructionLibraryRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateInstructionLibraryRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateInstructionLibraryRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

CreateInstructionLibraryReq CreateInstructionLibraryRequest::getBody() const
{
    return body_;
}

void CreateInstructionLibraryRequest::setBody(const CreateInstructionLibraryReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateInstructionLibraryRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateInstructionLibraryRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


