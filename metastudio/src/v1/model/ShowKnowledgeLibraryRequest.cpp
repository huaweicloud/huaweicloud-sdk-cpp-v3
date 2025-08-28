

#include "huaweicloud/metastudio/v1/model/ShowKnowledgeLibraryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowKnowledgeLibraryRequest::ShowKnowledgeLibraryRequest()
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
}

ShowKnowledgeLibraryRequest::~ShowKnowledgeLibraryRequest() = default;

void ShowKnowledgeLibraryRequest::validate()
{
}

web::json::value ShowKnowledgeLibraryRequest::toJson() const
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

    return val;
}
bool ShowKnowledgeLibraryRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowKnowledgeLibraryRequest::getAuthorization() const
{
    return authorization_;
}

void ShowKnowledgeLibraryRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowKnowledgeLibraryRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowKnowledgeLibraryRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowKnowledgeLibraryRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowKnowledgeLibraryRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowKnowledgeLibraryRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowKnowledgeLibraryRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowKnowledgeLibraryRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowKnowledgeLibraryRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowKnowledgeLibraryRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowKnowledgeLibraryRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowKnowledgeLibraryRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowKnowledgeLibraryRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowKnowledgeLibraryRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowKnowledgeLibraryRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string ShowKnowledgeLibraryRequest::getKnowledgeLibraryId() const
{
    return knowledgeLibraryId_;
}

void ShowKnowledgeLibraryRequest::setKnowledgeLibraryId(const std::string& value)
{
    knowledgeLibraryId_ = value;
    knowledgeLibraryIdIsSet_ = true;
}

bool ShowKnowledgeLibraryRequest::knowledgeLibraryIdIsSet() const
{
    return knowledgeLibraryIdIsSet_;
}

void ShowKnowledgeLibraryRequest::unsetknowledgeLibraryId()
{
    knowledgeLibraryIdIsSet_ = false;
}

}
}
}
}
}


