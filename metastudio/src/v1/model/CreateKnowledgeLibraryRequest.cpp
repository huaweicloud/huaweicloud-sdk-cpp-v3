

#include "huaweicloud/metastudio/v1/model/CreateKnowledgeLibraryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateKnowledgeLibraryRequest::CreateKnowledgeLibraryRequest()
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

CreateKnowledgeLibraryRequest::~CreateKnowledgeLibraryRequest() = default;

void CreateKnowledgeLibraryRequest::validate()
{
}

web::json::value CreateKnowledgeLibraryRequest::toJson() const
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
bool CreateKnowledgeLibraryRequest::fromJson(const web::json::value& val)
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
            CreateKnowledgeLibraryReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateKnowledgeLibraryRequest::getAuthorization() const
{
    return authorization_;
}

void CreateKnowledgeLibraryRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateKnowledgeLibraryRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateKnowledgeLibraryRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateKnowledgeLibraryRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateKnowledgeLibraryRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateKnowledgeLibraryRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateKnowledgeLibraryRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateKnowledgeLibraryRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreateKnowledgeLibraryRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreateKnowledgeLibraryRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreateKnowledgeLibraryRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreateKnowledgeLibraryRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateKnowledgeLibraryRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateKnowledgeLibraryRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateKnowledgeLibraryRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

CreateKnowledgeLibraryReq CreateKnowledgeLibraryRequest::getBody() const
{
    return body_;
}

void CreateKnowledgeLibraryRequest::setBody(const CreateKnowledgeLibraryReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateKnowledgeLibraryRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateKnowledgeLibraryRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


