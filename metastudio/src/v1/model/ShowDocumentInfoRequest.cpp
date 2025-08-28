

#include "huaweicloud/metastudio/v1/model/ShowDocumentInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowDocumentInfoRequest::ShowDocumentInfoRequest()
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

ShowDocumentInfoRequest::~ShowDocumentInfoRequest() = default;

void ShowDocumentInfoRequest::validate()
{
}

web::json::value ShowDocumentInfoRequest::toJson() const
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
bool ShowDocumentInfoRequest::fromJson(const web::json::value& val)
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


std::string ShowDocumentInfoRequest::getAuthorization() const
{
    return authorization_;
}

void ShowDocumentInfoRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowDocumentInfoRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowDocumentInfoRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowDocumentInfoRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowDocumentInfoRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowDocumentInfoRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowDocumentInfoRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowDocumentInfoRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowDocumentInfoRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowDocumentInfoRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowDocumentInfoRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowDocumentInfoRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowDocumentInfoRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowDocumentInfoRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowDocumentInfoRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string ShowDocumentInfoRequest::getDocumentId() const
{
    return documentId_;
}

void ShowDocumentInfoRequest::setDocumentId(const std::string& value)
{
    documentId_ = value;
    documentIdIsSet_ = true;
}

bool ShowDocumentInfoRequest::documentIdIsSet() const
{
    return documentIdIsSet_;
}

void ShowDocumentInfoRequest::unsetdocumentId()
{
    documentIdIsSet_ = false;
}

}
}
}
}
}


