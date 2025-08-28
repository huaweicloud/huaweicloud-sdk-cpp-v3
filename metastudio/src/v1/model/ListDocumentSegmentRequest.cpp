

#include "huaweicloud/metastudio/v1/model/ListDocumentSegmentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListDocumentSegmentRequest::ListDocumentSegmentRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    documentId_ = "";
    documentIdIsSet_ = false;
}

ListDocumentSegmentRequest::~ListDocumentSegmentRequest() = default;

void ListDocumentSegmentRequest::validate()
{
}

web::json::value ListDocumentSegmentRequest::toJson() const
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
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(documentIdIsSet_) {
        val[utility::conversions::to_string_t("document_id")] = ModelBase::toJson(documentId_);
    }

    return val;
}
bool ListDocumentSegmentRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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


std::string ListDocumentSegmentRequest::getAuthorization() const
{
    return authorization_;
}

void ListDocumentSegmentRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListDocumentSegmentRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListDocumentSegmentRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListDocumentSegmentRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListDocumentSegmentRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListDocumentSegmentRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListDocumentSegmentRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListDocumentSegmentRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListDocumentSegmentRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListDocumentSegmentRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListDocumentSegmentRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ListDocumentSegmentRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListDocumentSegmentRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListDocumentSegmentRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListDocumentSegmentRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

int32_t ListDocumentSegmentRequest::getOffset() const
{
    return offset_;
}

void ListDocumentSegmentRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDocumentSegmentRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDocumentSegmentRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListDocumentSegmentRequest::getLimit() const
{
    return limit_;
}

void ListDocumentSegmentRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDocumentSegmentRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDocumentSegmentRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListDocumentSegmentRequest::getDocumentId() const
{
    return documentId_;
}

void ListDocumentSegmentRequest::setDocumentId(const std::string& value)
{
    documentId_ = value;
    documentIdIsSet_ = true;
}

bool ListDocumentSegmentRequest::documentIdIsSet() const
{
    return documentIdIsSet_;
}

void ListDocumentSegmentRequest::unsetdocumentId()
{
    documentIdIsSet_ = false;
}

}
}
}
}
}


