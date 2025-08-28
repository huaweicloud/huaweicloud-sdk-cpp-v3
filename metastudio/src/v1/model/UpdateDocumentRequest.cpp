

#include "huaweicloud/metastudio/v1/model/UpdateDocumentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateDocumentRequest::UpdateDocumentRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    documentId_ = "";
    documentIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateDocumentRequest::~UpdateDocumentRequest() = default;

void UpdateDocumentRequest::validate()
{
}

web::json::value UpdateDocumentRequest::toJson() const
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
    if(documentIdIsSet_) {
        val[utility::conversions::to_string_t("document_id")] = ModelBase::toJson(documentId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateDocumentRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("document_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("document_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDocumentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateDocumentRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateDocumentRequest::getAuthorization() const
{
    return authorization_;
}

void UpdateDocumentRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool UpdateDocumentRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void UpdateDocumentRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string UpdateDocumentRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateDocumentRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateDocumentRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateDocumentRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string UpdateDocumentRequest::getXProjectId() const
{
    return xProjectId_;
}

void UpdateDocumentRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool UpdateDocumentRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void UpdateDocumentRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string UpdateDocumentRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void UpdateDocumentRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool UpdateDocumentRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void UpdateDocumentRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string UpdateDocumentRequest::getDocumentId() const
{
    return documentId_;
}

void UpdateDocumentRequest::setDocumentId(const std::string& value)
{
    documentId_ = value;
    documentIdIsSet_ = true;
}

bool UpdateDocumentRequest::documentIdIsSet() const
{
    return documentIdIsSet_;
}

void UpdateDocumentRequest::unsetdocumentId()
{
    documentIdIsSet_ = false;
}

UpdateDocumentRequestBody UpdateDocumentRequest::getBody() const
{
    return body_;
}

void UpdateDocumentRequest::setBody(const UpdateDocumentRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDocumentRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDocumentRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


