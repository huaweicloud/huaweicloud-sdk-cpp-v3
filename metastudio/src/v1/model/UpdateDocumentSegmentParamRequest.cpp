

#include "huaweicloud/metastudio/v1/model/UpdateDocumentSegmentParamRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateDocumentSegmentParamRequest::UpdateDocumentSegmentParamRequest()
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

UpdateDocumentSegmentParamRequest::~UpdateDocumentSegmentParamRequest() = default;

void UpdateDocumentSegmentParamRequest::validate()
{
}

web::json::value UpdateDocumentSegmentParamRequest::toJson() const
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
bool UpdateDocumentSegmentParamRequest::fromJson(const web::json::value& val)
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
            DocumentSegmentParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateDocumentSegmentParamRequest::getAuthorization() const
{
    return authorization_;
}

void UpdateDocumentSegmentParamRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool UpdateDocumentSegmentParamRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void UpdateDocumentSegmentParamRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string UpdateDocumentSegmentParamRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateDocumentSegmentParamRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateDocumentSegmentParamRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateDocumentSegmentParamRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string UpdateDocumentSegmentParamRequest::getXProjectId() const
{
    return xProjectId_;
}

void UpdateDocumentSegmentParamRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool UpdateDocumentSegmentParamRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void UpdateDocumentSegmentParamRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string UpdateDocumentSegmentParamRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void UpdateDocumentSegmentParamRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool UpdateDocumentSegmentParamRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void UpdateDocumentSegmentParamRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string UpdateDocumentSegmentParamRequest::getDocumentId() const
{
    return documentId_;
}

void UpdateDocumentSegmentParamRequest::setDocumentId(const std::string& value)
{
    documentId_ = value;
    documentIdIsSet_ = true;
}

bool UpdateDocumentSegmentParamRequest::documentIdIsSet() const
{
    return documentIdIsSet_;
}

void UpdateDocumentSegmentParamRequest::unsetdocumentId()
{
    documentIdIsSet_ = false;
}

DocumentSegmentParam UpdateDocumentSegmentParamRequest::getBody() const
{
    return body_;
}

void UpdateDocumentSegmentParamRequest::setBody(const DocumentSegmentParam& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDocumentSegmentParamRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDocumentSegmentParamRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


