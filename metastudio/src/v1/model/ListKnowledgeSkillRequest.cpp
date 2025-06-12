

#include "huaweicloud/metastudio/v1/model/ListKnowledgeSkillRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListKnowledgeSkillRequest::ListKnowledgeSkillRequest()
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
}

ListKnowledgeSkillRequest::~ListKnowledgeSkillRequest() = default;

void ListKnowledgeSkillRequest::validate()
{
}

web::json::value ListKnowledgeSkillRequest::toJson() const
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

    return val;
}
bool ListKnowledgeSkillRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListKnowledgeSkillRequest::getAuthorization() const
{
    return authorization_;
}

void ListKnowledgeSkillRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListKnowledgeSkillRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListKnowledgeSkillRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListKnowledgeSkillRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListKnowledgeSkillRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListKnowledgeSkillRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListKnowledgeSkillRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListKnowledgeSkillRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListKnowledgeSkillRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListKnowledgeSkillRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListKnowledgeSkillRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ListKnowledgeSkillRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListKnowledgeSkillRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListKnowledgeSkillRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListKnowledgeSkillRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

int32_t ListKnowledgeSkillRequest::getOffset() const
{
    return offset_;
}

void ListKnowledgeSkillRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListKnowledgeSkillRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListKnowledgeSkillRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListKnowledgeSkillRequest::getLimit() const
{
    return limit_;
}

void ListKnowledgeSkillRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListKnowledgeSkillRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListKnowledgeSkillRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


