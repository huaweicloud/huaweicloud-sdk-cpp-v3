

#include "huaweicloud/metastudio/v1/model/PreviewDocumentSegmentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




PreviewDocumentSegmentRequest::PreviewDocumentSegmentRequest()
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
    previewLines_ = 0;
    previewLinesIsSet_ = false;
    bodyIsSet_ = false;
}

PreviewDocumentSegmentRequest::~PreviewDocumentSegmentRequest() = default;

void PreviewDocumentSegmentRequest::validate()
{
}

web::json::value PreviewDocumentSegmentRequest::toJson() const
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
    if(previewLinesIsSet_) {
        val[utility::conversions::to_string_t("preview_lines")] = ModelBase::toJson(previewLines_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool PreviewDocumentSegmentRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("preview_lines"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("preview_lines"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreviewLines(refVal);
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


std::string PreviewDocumentSegmentRequest::getAuthorization() const
{
    return authorization_;
}

void PreviewDocumentSegmentRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool PreviewDocumentSegmentRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void PreviewDocumentSegmentRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string PreviewDocumentSegmentRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void PreviewDocumentSegmentRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool PreviewDocumentSegmentRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void PreviewDocumentSegmentRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string PreviewDocumentSegmentRequest::getXProjectId() const
{
    return xProjectId_;
}

void PreviewDocumentSegmentRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool PreviewDocumentSegmentRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void PreviewDocumentSegmentRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string PreviewDocumentSegmentRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void PreviewDocumentSegmentRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool PreviewDocumentSegmentRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void PreviewDocumentSegmentRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string PreviewDocumentSegmentRequest::getDocumentId() const
{
    return documentId_;
}

void PreviewDocumentSegmentRequest::setDocumentId(const std::string& value)
{
    documentId_ = value;
    documentIdIsSet_ = true;
}

bool PreviewDocumentSegmentRequest::documentIdIsSet() const
{
    return documentIdIsSet_;
}

void PreviewDocumentSegmentRequest::unsetdocumentId()
{
    documentIdIsSet_ = false;
}

int32_t PreviewDocumentSegmentRequest::getPreviewLines() const
{
    return previewLines_;
}

void PreviewDocumentSegmentRequest::setPreviewLines(int32_t value)
{
    previewLines_ = value;
    previewLinesIsSet_ = true;
}

bool PreviewDocumentSegmentRequest::previewLinesIsSet() const
{
    return previewLinesIsSet_;
}

void PreviewDocumentSegmentRequest::unsetpreviewLines()
{
    previewLinesIsSet_ = false;
}

DocumentSegmentParam PreviewDocumentSegmentRequest::getBody() const
{
    return body_;
}

void PreviewDocumentSegmentRequest::setBody(const DocumentSegmentParam& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool PreviewDocumentSegmentRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void PreviewDocumentSegmentRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


