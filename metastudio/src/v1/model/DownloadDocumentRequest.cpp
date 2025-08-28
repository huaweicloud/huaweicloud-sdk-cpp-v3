

#include "huaweicloud/metastudio/v1/model/DownloadDocumentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DownloadDocumentRequest::DownloadDocumentRequest()
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
}

DownloadDocumentRequest::~DownloadDocumentRequest() = default;

void DownloadDocumentRequest::validate()
{
}

web::json::value DownloadDocumentRequest::toJson() const
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

    return val;
}
bool DownloadDocumentRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DownloadDocumentRequest::getAuthorization() const
{
    return authorization_;
}

void DownloadDocumentRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool DownloadDocumentRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void DownloadDocumentRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string DownloadDocumentRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void DownloadDocumentRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool DownloadDocumentRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void DownloadDocumentRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string DownloadDocumentRequest::getXProjectId() const
{
    return xProjectId_;
}

void DownloadDocumentRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool DownloadDocumentRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void DownloadDocumentRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string DownloadDocumentRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void DownloadDocumentRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool DownloadDocumentRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void DownloadDocumentRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string DownloadDocumentRequest::getDocumentId() const
{
    return documentId_;
}

void DownloadDocumentRequest::setDocumentId(const std::string& value)
{
    documentId_ = value;
    documentIdIsSet_ = true;
}

bool DownloadDocumentRequest::documentIdIsSet() const
{
    return documentIdIsSet_;
}

void DownloadDocumentRequest::unsetdocumentId()
{
    documentIdIsSet_ = false;
}

}
}
}
}
}


