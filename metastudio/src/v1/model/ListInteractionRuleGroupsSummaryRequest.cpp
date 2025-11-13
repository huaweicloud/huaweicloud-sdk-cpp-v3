

#include "huaweicloud/metastudio/v1/model/ListInteractionRuleGroupsSummaryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListInteractionRuleGroupsSummaryRequest::ListInteractionRuleGroupsSummaryRequest()
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
    createSince_ = "";
    createSinceIsSet_ = false;
    createUntil_ = "";
    createUntilIsSet_ = false;
    groupName_ = "";
    groupNameIsSet_ = false;
}

ListInteractionRuleGroupsSummaryRequest::~ListInteractionRuleGroupsSummaryRequest() = default;

void ListInteractionRuleGroupsSummaryRequest::validate()
{
}

web::json::value ListInteractionRuleGroupsSummaryRequest::toJson() const
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
    if(createSinceIsSet_) {
        val[utility::conversions::to_string_t("create_since")] = ModelBase::toJson(createSince_);
    }
    if(createUntilIsSet_) {
        val[utility::conversions::to_string_t("create_until")] = ModelBase::toJson(createUntil_);
    }
    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("group_name")] = ModelBase::toJson(groupName_);
    }

    return val;
}
bool ListInteractionRuleGroupsSummaryRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("create_since"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_since"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateSince(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_until"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_until"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateUntil(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupName(refVal);
        }
    }
    return ok;
}


std::string ListInteractionRuleGroupsSummaryRequest::getAuthorization() const
{
    return authorization_;
}

void ListInteractionRuleGroupsSummaryRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListInteractionRuleGroupsSummaryRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListInteractionRuleGroupsSummaryRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListInteractionRuleGroupsSummaryRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListInteractionRuleGroupsSummaryRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListInteractionRuleGroupsSummaryRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListInteractionRuleGroupsSummaryRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListInteractionRuleGroupsSummaryRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListInteractionRuleGroupsSummaryRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListInteractionRuleGroupsSummaryRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListInteractionRuleGroupsSummaryRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ListInteractionRuleGroupsSummaryRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListInteractionRuleGroupsSummaryRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListInteractionRuleGroupsSummaryRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListInteractionRuleGroupsSummaryRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

int32_t ListInteractionRuleGroupsSummaryRequest::getOffset() const
{
    return offset_;
}

void ListInteractionRuleGroupsSummaryRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListInteractionRuleGroupsSummaryRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListInteractionRuleGroupsSummaryRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListInteractionRuleGroupsSummaryRequest::getLimit() const
{
    return limit_;
}

void ListInteractionRuleGroupsSummaryRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListInteractionRuleGroupsSummaryRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListInteractionRuleGroupsSummaryRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListInteractionRuleGroupsSummaryRequest::getCreateSince() const
{
    return createSince_;
}

void ListInteractionRuleGroupsSummaryRequest::setCreateSince(const std::string& value)
{
    createSince_ = value;
    createSinceIsSet_ = true;
}

bool ListInteractionRuleGroupsSummaryRequest::createSinceIsSet() const
{
    return createSinceIsSet_;
}

void ListInteractionRuleGroupsSummaryRequest::unsetcreateSince()
{
    createSinceIsSet_ = false;
}

std::string ListInteractionRuleGroupsSummaryRequest::getCreateUntil() const
{
    return createUntil_;
}

void ListInteractionRuleGroupsSummaryRequest::setCreateUntil(const std::string& value)
{
    createUntil_ = value;
    createUntilIsSet_ = true;
}

bool ListInteractionRuleGroupsSummaryRequest::createUntilIsSet() const
{
    return createUntilIsSet_;
}

void ListInteractionRuleGroupsSummaryRequest::unsetcreateUntil()
{
    createUntilIsSet_ = false;
}

std::string ListInteractionRuleGroupsSummaryRequest::getGroupName() const
{
    return groupName_;
}

void ListInteractionRuleGroupsSummaryRequest::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool ListInteractionRuleGroupsSummaryRequest::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void ListInteractionRuleGroupsSummaryRequest::unsetgroupName()
{
    groupNameIsSet_ = false;
}

}
}
}
}
}


