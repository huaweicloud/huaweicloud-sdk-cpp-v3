

#include "huaweicloud/metastudio/v1/model/ListKnowledgeIntentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListKnowledgeIntentRequest::ListKnowledgeIntentRequest()
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
    skillId_ = "";
    skillIdIsSet_ = false;
}

ListKnowledgeIntentRequest::~ListKnowledgeIntentRequest() = default;

void ListKnowledgeIntentRequest::validate()
{
}

web::json::value ListKnowledgeIntentRequest::toJson() const
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
    if(skillIdIsSet_) {
        val[utility::conversions::to_string_t("skill_id")] = ModelBase::toJson(skillId_);
    }

    return val;
}
bool ListKnowledgeIntentRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("skill_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("skill_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSkillId(refVal);
        }
    }
    return ok;
}


std::string ListKnowledgeIntentRequest::getAuthorization() const
{
    return authorization_;
}

void ListKnowledgeIntentRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListKnowledgeIntentRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListKnowledgeIntentRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListKnowledgeIntentRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListKnowledgeIntentRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListKnowledgeIntentRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListKnowledgeIntentRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListKnowledgeIntentRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListKnowledgeIntentRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListKnowledgeIntentRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListKnowledgeIntentRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ListKnowledgeIntentRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListKnowledgeIntentRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListKnowledgeIntentRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListKnowledgeIntentRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

int32_t ListKnowledgeIntentRequest::getOffset() const
{
    return offset_;
}

void ListKnowledgeIntentRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListKnowledgeIntentRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListKnowledgeIntentRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListKnowledgeIntentRequest::getLimit() const
{
    return limit_;
}

void ListKnowledgeIntentRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListKnowledgeIntentRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListKnowledgeIntentRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListKnowledgeIntentRequest::getSkillId() const
{
    return skillId_;
}

void ListKnowledgeIntentRequest::setSkillId(const std::string& value)
{
    skillId_ = value;
    skillIdIsSet_ = true;
}

bool ListKnowledgeIntentRequest::skillIdIsSet() const
{
    return skillIdIsSet_;
}

void ListKnowledgeIntentRequest::unsetskillId()
{
    skillIdIsSet_ = false;
}

}
}
}
}
}


