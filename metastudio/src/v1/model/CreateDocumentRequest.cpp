

#include "huaweicloud/metastudio/v1/model/CreateDocumentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateDocumentRequest::CreateDocumentRequest()
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

CreateDocumentRequest::~CreateDocumentRequest() = default;

void CreateDocumentRequest::validate()
{
}

web::json::value CreateDocumentRequest::toJson() const
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
bool CreateDocumentRequest::fromJson(const web::json::value& val)
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
            CreateDocumentRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateDocumentRequest::getAuthorization() const
{
    return authorization_;
}

void CreateDocumentRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateDocumentRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateDocumentRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateDocumentRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateDocumentRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateDocumentRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateDocumentRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateDocumentRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreateDocumentRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreateDocumentRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreateDocumentRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreateDocumentRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateDocumentRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateDocumentRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateDocumentRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string CreateDocumentRequest::getKnowledgeLibraryId() const
{
    return knowledgeLibraryId_;
}

void CreateDocumentRequest::setKnowledgeLibraryId(const std::string& value)
{
    knowledgeLibraryId_ = value;
    knowledgeLibraryIdIsSet_ = true;
}

bool CreateDocumentRequest::knowledgeLibraryIdIsSet() const
{
    return knowledgeLibraryIdIsSet_;
}

void CreateDocumentRequest::unsetknowledgeLibraryId()
{
    knowledgeLibraryIdIsSet_ = false;
}

CreateDocumentRequestBody CreateDocumentRequest::getBody() const
{
    return body_;
}

void CreateDocumentRequest::setBody(const CreateDocumentRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDocumentRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDocumentRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


