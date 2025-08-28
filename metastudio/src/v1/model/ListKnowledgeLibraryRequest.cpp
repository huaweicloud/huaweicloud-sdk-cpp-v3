

#include "huaweicloud/metastudio/v1/model/ListKnowledgeLibraryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListKnowledgeLibraryRequest::ListKnowledgeLibraryRequest()
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
    language_ = "";
    languageIsSet_ = false;
    knowledgeType_ = "";
    knowledgeTypeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

ListKnowledgeLibraryRequest::~ListKnowledgeLibraryRequest() = default;

void ListKnowledgeLibraryRequest::validate()
{
}

web::json::value ListKnowledgeLibraryRequest::toJson() const
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
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(knowledgeTypeIsSet_) {
        val[utility::conversions::to_string_t("knowledge_type")] = ModelBase::toJson(knowledgeType_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool ListKnowledgeLibraryRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("knowledge_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("knowledge_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKnowledgeType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string ListKnowledgeLibraryRequest::getAuthorization() const
{
    return authorization_;
}

void ListKnowledgeLibraryRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListKnowledgeLibraryRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListKnowledgeLibraryRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListKnowledgeLibraryRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListKnowledgeLibraryRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListKnowledgeLibraryRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListKnowledgeLibraryRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListKnowledgeLibraryRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListKnowledgeLibraryRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListKnowledgeLibraryRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListKnowledgeLibraryRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ListKnowledgeLibraryRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListKnowledgeLibraryRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListKnowledgeLibraryRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListKnowledgeLibraryRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

int32_t ListKnowledgeLibraryRequest::getOffset() const
{
    return offset_;
}

void ListKnowledgeLibraryRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListKnowledgeLibraryRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListKnowledgeLibraryRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListKnowledgeLibraryRequest::getLimit() const
{
    return limit_;
}

void ListKnowledgeLibraryRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListKnowledgeLibraryRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListKnowledgeLibraryRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListKnowledgeLibraryRequest::getLanguage() const
{
    return language_;
}

void ListKnowledgeLibraryRequest::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool ListKnowledgeLibraryRequest::languageIsSet() const
{
    return languageIsSet_;
}

void ListKnowledgeLibraryRequest::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string ListKnowledgeLibraryRequest::getKnowledgeType() const
{
    return knowledgeType_;
}

void ListKnowledgeLibraryRequest::setKnowledgeType(const std::string& value)
{
    knowledgeType_ = value;
    knowledgeTypeIsSet_ = true;
}

bool ListKnowledgeLibraryRequest::knowledgeTypeIsSet() const
{
    return knowledgeTypeIsSet_;
}

void ListKnowledgeLibraryRequest::unsetknowledgeType()
{
    knowledgeTypeIsSet_ = false;
}

std::string ListKnowledgeLibraryRequest::getName() const
{
    return name_;
}

void ListKnowledgeLibraryRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListKnowledgeLibraryRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListKnowledgeLibraryRequest::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


