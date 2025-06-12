

#include "huaweicloud/metastudio/v1/model/ListKnowledgeQuestionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListKnowledgeQuestionRequest::ListKnowledgeQuestionRequest()
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
    intentId_ = "";
    intentIdIsSet_ = false;
}

ListKnowledgeQuestionRequest::~ListKnowledgeQuestionRequest() = default;

void ListKnowledgeQuestionRequest::validate()
{
}

web::json::value ListKnowledgeQuestionRequest::toJson() const
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
    if(intentIdIsSet_) {
        val[utility::conversions::to_string_t("intent_id")] = ModelBase::toJson(intentId_);
    }

    return val;
}
bool ListKnowledgeQuestionRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("intent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("intent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIntentId(refVal);
        }
    }
    return ok;
}


std::string ListKnowledgeQuestionRequest::getAuthorization() const
{
    return authorization_;
}

void ListKnowledgeQuestionRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListKnowledgeQuestionRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListKnowledgeQuestionRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListKnowledgeQuestionRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListKnowledgeQuestionRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListKnowledgeQuestionRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListKnowledgeQuestionRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListKnowledgeQuestionRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListKnowledgeQuestionRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListKnowledgeQuestionRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListKnowledgeQuestionRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ListKnowledgeQuestionRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListKnowledgeQuestionRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListKnowledgeQuestionRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListKnowledgeQuestionRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

int32_t ListKnowledgeQuestionRequest::getOffset() const
{
    return offset_;
}

void ListKnowledgeQuestionRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListKnowledgeQuestionRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListKnowledgeQuestionRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListKnowledgeQuestionRequest::getLimit() const
{
    return limit_;
}

void ListKnowledgeQuestionRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListKnowledgeQuestionRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListKnowledgeQuestionRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListKnowledgeQuestionRequest::getIntentId() const
{
    return intentId_;
}

void ListKnowledgeQuestionRequest::setIntentId(const std::string& value)
{
    intentId_ = value;
    intentIdIsSet_ = true;
}

bool ListKnowledgeQuestionRequest::intentIdIsSet() const
{
    return intentIdIsSet_;
}

void ListKnowledgeQuestionRequest::unsetintentId()
{
    intentIdIsSet_ = false;
}

}
}
}
}
}


