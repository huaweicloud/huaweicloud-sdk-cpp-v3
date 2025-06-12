

#include "huaweicloud/metastudio/v1/model/ListProductsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListProductsRequest::ListProductsRequest()
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
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
    createUntil_ = "";
    createUntilIsSet_ = false;
    createSince_ = "";
    createSinceIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    tag_ = "";
    tagIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
}

ListProductsRequest::~ListProductsRequest() = default;

void ListProductsRequest::validate()
{
}

web::json::value ListProductsRequest::toJson() const
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
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }

    return val;
}
bool ListProductsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTag(refVal);
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
    return ok;
}


std::string ListProductsRequest::getAuthorization() const
{
    return authorization_;
}

void ListProductsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListProductsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListProductsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListProductsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListProductsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListProductsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListProductsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListProductsRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListProductsRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListProductsRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListProductsRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ListProductsRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListProductsRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListProductsRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListProductsRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

int32_t ListProductsRequest::getOffset() const
{
    return offset_;
}

void ListProductsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListProductsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListProductsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListProductsRequest::getLimit() const
{
    return limit_;
}

void ListProductsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListProductsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListProductsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListProductsRequest::getSortKey() const
{
    return sortKey_;
}

void ListProductsRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListProductsRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListProductsRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListProductsRequest::getSortDir() const
{
    return sortDir_;
}

void ListProductsRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListProductsRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListProductsRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::string ListProductsRequest::getCreateUntil() const
{
    return createUntil_;
}

void ListProductsRequest::setCreateUntil(const std::string& value)
{
    createUntil_ = value;
    createUntilIsSet_ = true;
}

bool ListProductsRequest::createUntilIsSet() const
{
    return createUntilIsSet_;
}

void ListProductsRequest::unsetcreateUntil()
{
    createUntilIsSet_ = false;
}

std::string ListProductsRequest::getCreateSince() const
{
    return createSince_;
}

void ListProductsRequest::setCreateSince(const std::string& value)
{
    createSince_ = value;
    createSinceIsSet_ = true;
}

bool ListProductsRequest::createSinceIsSet() const
{
    return createSinceIsSet_;
}

void ListProductsRequest::unsetcreateSince()
{
    createSinceIsSet_ = false;
}

std::string ListProductsRequest::getName() const
{
    return name_;
}

void ListProductsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListProductsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListProductsRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListProductsRequest::getTag() const
{
    return tag_;
}

void ListProductsRequest::setTag(const std::string& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool ListProductsRequest::tagIsSet() const
{
    return tagIsSet_;
}

void ListProductsRequest::unsettag()
{
    tagIsSet_ = false;
}

std::string ListProductsRequest::getState() const
{
    return state_;
}

void ListProductsRequest::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ListProductsRequest::stateIsSet() const
{
    return stateIsSet_;
}

void ListProductsRequest::unsetstate()
{
    stateIsSet_ = false;
}

}
}
}
}
}


