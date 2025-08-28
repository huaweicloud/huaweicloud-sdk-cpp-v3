

#include "huaweicloud/metastudio/v1/model/UpdateKnowledgeLibraryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateKnowledgeLibraryRequest::UpdateKnowledgeLibraryRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    knowledgeLibraryId_ = "";
    knowledgeLibraryIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateKnowledgeLibraryRequest::~UpdateKnowledgeLibraryRequest() = default;

void UpdateKnowledgeLibraryRequest::validate()
{
}

web::json::value UpdateKnowledgeLibraryRequest::toJson() const
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
    if(knowledgeLibraryIdIsSet_) {
        val[utility::conversions::to_string_t("knowledge_library_id")] = ModelBase::toJson(knowledgeLibraryId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateKnowledgeLibraryRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("knowledge_library_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("knowledge_library_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKnowledgeLibraryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateKnowledgeLibraryReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateKnowledgeLibraryRequest::getAuthorization() const
{
    return authorization_;
}

void UpdateKnowledgeLibraryRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool UpdateKnowledgeLibraryRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void UpdateKnowledgeLibraryRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string UpdateKnowledgeLibraryRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateKnowledgeLibraryRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateKnowledgeLibraryRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateKnowledgeLibraryRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string UpdateKnowledgeLibraryRequest::getXProjectId() const
{
    return xProjectId_;
}

void UpdateKnowledgeLibraryRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool UpdateKnowledgeLibraryRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void UpdateKnowledgeLibraryRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string UpdateKnowledgeLibraryRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void UpdateKnowledgeLibraryRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool UpdateKnowledgeLibraryRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void UpdateKnowledgeLibraryRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string UpdateKnowledgeLibraryRequest::getKnowledgeLibraryId() const
{
    return knowledgeLibraryId_;
}

void UpdateKnowledgeLibraryRequest::setKnowledgeLibraryId(const std::string& value)
{
    knowledgeLibraryId_ = value;
    knowledgeLibraryIdIsSet_ = true;
}

bool UpdateKnowledgeLibraryRequest::knowledgeLibraryIdIsSet() const
{
    return knowledgeLibraryIdIsSet_;
}

void UpdateKnowledgeLibraryRequest::unsetknowledgeLibraryId()
{
    knowledgeLibraryIdIsSet_ = false;
}

UpdateKnowledgeLibraryReq UpdateKnowledgeLibraryRequest::getBody() const
{
    return body_;
}

void UpdateKnowledgeLibraryRequest::setBody(const UpdateKnowledgeLibraryReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateKnowledgeLibraryRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateKnowledgeLibraryRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


