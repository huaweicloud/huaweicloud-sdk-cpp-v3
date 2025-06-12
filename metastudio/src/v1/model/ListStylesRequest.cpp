

#include "huaweicloud/metastudio/v1/model/ListStylesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListStylesRequest::ListStylesRequest()
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
    state_ = "";
    stateIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
    createUntil_ = "";
    createUntilIsSet_ = false;
    createSince_ = "";
    createSinceIsSet_ = false;
}

ListStylesRequest::~ListStylesRequest() = default;

void ListStylesRequest::validate()
{
}

web::json::value ListStylesRequest::toJson() const
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
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }
    if(createUntilIsSet_) {
        val[utility::conversions::to_string_t("create_until")] = ModelBase::toJson(createUntil_);
    }
    if(createSinceIsSet_) {
        val[utility::conversions::to_string_t("create_since")] = ModelBase::toJson(createSince_);
    }

    return val;
}
bool ListStylesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_dir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortDir(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("create_since"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_since"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateSince(refVal);
        }
    }
    return ok;
}


std::string ListStylesRequest::getAuthorization() const
{
    return authorization_;
}

void ListStylesRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListStylesRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListStylesRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListStylesRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListStylesRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListStylesRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListStylesRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListStylesRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListStylesRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListStylesRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListStylesRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ListStylesRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListStylesRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListStylesRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListStylesRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

int32_t ListStylesRequest::getOffset() const
{
    return offset_;
}

void ListStylesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListStylesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListStylesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListStylesRequest::getLimit() const
{
    return limit_;
}

void ListStylesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListStylesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListStylesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListStylesRequest::getState() const
{
    return state_;
}

void ListStylesRequest::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ListStylesRequest::stateIsSet() const
{
    return stateIsSet_;
}

void ListStylesRequest::unsetstate()
{
    stateIsSet_ = false;
}

std::string ListStylesRequest::getSortKey() const
{
    return sortKey_;
}

void ListStylesRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListStylesRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListStylesRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListStylesRequest::getSortDir() const
{
    return sortDir_;
}

void ListStylesRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListStylesRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListStylesRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::string ListStylesRequest::getCreateUntil() const
{
    return createUntil_;
}

void ListStylesRequest::setCreateUntil(const std::string& value)
{
    createUntil_ = value;
    createUntilIsSet_ = true;
}

bool ListStylesRequest::createUntilIsSet() const
{
    return createUntilIsSet_;
}

void ListStylesRequest::unsetcreateUntil()
{
    createUntilIsSet_ = false;
}

std::string ListStylesRequest::getCreateSince() const
{
    return createSince_;
}

void ListStylesRequest::setCreateSince(const std::string& value)
{
    createSince_ = value;
    createSinceIsSet_ = true;
}

bool ListStylesRequest::createSinceIsSet() const
{
    return createSinceIsSet_;
}

void ListStylesRequest::unsetcreateSince()
{
    createSinceIsSet_ = false;
}

}
}
}
}
}


