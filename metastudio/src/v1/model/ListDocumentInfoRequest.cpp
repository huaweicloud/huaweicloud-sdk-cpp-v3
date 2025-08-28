

#include "huaweicloud/metastudio/v1/model/ListDocumentInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListDocumentInfoRequest::ListDocumentInfoRequest()
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
    knowledgeLibraryId_ = "";
    knowledgeLibraryIdIsSet_ = false;
    fileName_ = "";
    fileNameIsSet_ = false;
}

ListDocumentInfoRequest::~ListDocumentInfoRequest() = default;

void ListDocumentInfoRequest::validate()
{
}

web::json::value ListDocumentInfoRequest::toJson() const
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
    if(knowledgeLibraryIdIsSet_) {
        val[utility::conversions::to_string_t("knowledge_library_id")] = ModelBase::toJson(knowledgeLibraryId_);
    }
    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }

    return val;
}
bool ListDocumentInfoRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("knowledge_library_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("knowledge_library_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKnowledgeLibraryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileName(refVal);
        }
    }
    return ok;
}


std::string ListDocumentInfoRequest::getAuthorization() const
{
    return authorization_;
}

void ListDocumentInfoRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListDocumentInfoRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListDocumentInfoRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListDocumentInfoRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListDocumentInfoRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListDocumentInfoRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListDocumentInfoRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListDocumentInfoRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListDocumentInfoRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListDocumentInfoRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListDocumentInfoRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ListDocumentInfoRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListDocumentInfoRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListDocumentInfoRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListDocumentInfoRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

int32_t ListDocumentInfoRequest::getOffset() const
{
    return offset_;
}

void ListDocumentInfoRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDocumentInfoRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDocumentInfoRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListDocumentInfoRequest::getLimit() const
{
    return limit_;
}

void ListDocumentInfoRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDocumentInfoRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDocumentInfoRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListDocumentInfoRequest::getKnowledgeLibraryId() const
{
    return knowledgeLibraryId_;
}

void ListDocumentInfoRequest::setKnowledgeLibraryId(const std::string& value)
{
    knowledgeLibraryId_ = value;
    knowledgeLibraryIdIsSet_ = true;
}

bool ListDocumentInfoRequest::knowledgeLibraryIdIsSet() const
{
    return knowledgeLibraryIdIsSet_;
}

void ListDocumentInfoRequest::unsetknowledgeLibraryId()
{
    knowledgeLibraryIdIsSet_ = false;
}

std::string ListDocumentInfoRequest::getFileName() const
{
    return fileName_;
}

void ListDocumentInfoRequest::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool ListDocumentInfoRequest::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void ListDocumentInfoRequest::unsetfileName()
{
    fileNameIsSet_ = false;
}

}
}
}
}
}


