

#include "huaweicloud/codeartsdeploy/v2/model/ListHostsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ListHostsRequest::ListHostsRequest()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    asProxy_ = false;
    asProxyIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
    withAuth_ = false;
    withAuthIsSet_ = false;
}

ListHostsRequest::~ListHostsRequest() = default;

void ListHostsRequest::validate()
{
}

web::json::value ListHostsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(asProxyIsSet_) {
        val[utility::conversions::to_string_t("as_proxy")] = ModelBase::toJson(asProxy_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }
    if(withAuthIsSet_) {
        val[utility::conversions::to_string_t("with_auth")] = ModelBase::toJson(withAuth_);
    }

    return val;
}

bool ListHostsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("as_proxy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("as_proxy"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAsProxy(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("with_auth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("with_auth"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWithAuth(refVal);
        }
    }
    return ok;
}

std::string ListHostsRequest::getGroupId() const
{
    return groupId_;
}

void ListHostsRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ListHostsRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ListHostsRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

bool ListHostsRequest::isAsProxy() const
{
    return asProxy_;
}

void ListHostsRequest::setAsProxy(bool value)
{
    asProxy_ = value;
    asProxyIsSet_ = true;
}

bool ListHostsRequest::asProxyIsSet() const
{
    return asProxyIsSet_;
}

void ListHostsRequest::unsetasProxy()
{
    asProxyIsSet_ = false;
}

int32_t ListHostsRequest::getOffset() const
{
    return offset_;
}

void ListHostsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListHostsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListHostsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListHostsRequest::getLimit() const
{
    return limit_;
}

void ListHostsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListHostsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListHostsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListHostsRequest::getName() const
{
    return name_;
}

void ListHostsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListHostsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListHostsRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListHostsRequest::getSortKey() const
{
    return sortKey_;
}

void ListHostsRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListHostsRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListHostsRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListHostsRequest::getSortDir() const
{
    return sortDir_;
}

void ListHostsRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListHostsRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListHostsRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

bool ListHostsRequest::isWithAuth() const
{
    return withAuth_;
}

void ListHostsRequest::setWithAuth(bool value)
{
    withAuth_ = value;
    withAuthIsSet_ = true;
}

bool ListHostsRequest::withAuthIsSet() const
{
    return withAuthIsSet_;
}

void ListHostsRequest::unsetwithAuth()
{
    withAuthIsSet_ = false;
}

}
}
}
}
}


