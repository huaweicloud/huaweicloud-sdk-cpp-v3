

#include "huaweicloud/metastudio/v1/model/ListInteractionRuleGroupsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListInteractionRuleGroupsRequest::ListInteractionRuleGroupsRequest()
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

ListInteractionRuleGroupsRequest::~ListInteractionRuleGroupsRequest() = default;

void ListInteractionRuleGroupsRequest::validate()
{
}

web::json::value ListInteractionRuleGroupsRequest::toJson() const
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
bool ListInteractionRuleGroupsRequest::fromJson(const web::json::value& val)
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


std::string ListInteractionRuleGroupsRequest::getAuthorization() const
{
    return authorization_;
}

void ListInteractionRuleGroupsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListInteractionRuleGroupsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListInteractionRuleGroupsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListInteractionRuleGroupsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListInteractionRuleGroupsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListInteractionRuleGroupsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListInteractionRuleGroupsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListInteractionRuleGroupsRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListInteractionRuleGroupsRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListInteractionRuleGroupsRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListInteractionRuleGroupsRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ListInteractionRuleGroupsRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListInteractionRuleGroupsRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListInteractionRuleGroupsRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListInteractionRuleGroupsRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

int32_t ListInteractionRuleGroupsRequest::getOffset() const
{
    return offset_;
}

void ListInteractionRuleGroupsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListInteractionRuleGroupsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListInteractionRuleGroupsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListInteractionRuleGroupsRequest::getLimit() const
{
    return limit_;
}

void ListInteractionRuleGroupsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListInteractionRuleGroupsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListInteractionRuleGroupsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListInteractionRuleGroupsRequest::getCreateSince() const
{
    return createSince_;
}

void ListInteractionRuleGroupsRequest::setCreateSince(const std::string& value)
{
    createSince_ = value;
    createSinceIsSet_ = true;
}

bool ListInteractionRuleGroupsRequest::createSinceIsSet() const
{
    return createSinceIsSet_;
}

void ListInteractionRuleGroupsRequest::unsetcreateSince()
{
    createSinceIsSet_ = false;
}

std::string ListInteractionRuleGroupsRequest::getCreateUntil() const
{
    return createUntil_;
}

void ListInteractionRuleGroupsRequest::setCreateUntil(const std::string& value)
{
    createUntil_ = value;
    createUntilIsSet_ = true;
}

bool ListInteractionRuleGroupsRequest::createUntilIsSet() const
{
    return createUntilIsSet_;
}

void ListInteractionRuleGroupsRequest::unsetcreateUntil()
{
    createUntilIsSet_ = false;
}

std::string ListInteractionRuleGroupsRequest::getGroupName() const
{
    return groupName_;
}

void ListInteractionRuleGroupsRequest::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool ListInteractionRuleGroupsRequest::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void ListInteractionRuleGroupsRequest::unsetgroupName()
{
    groupNameIsSet_ = false;
}

}
}
}
}
}


