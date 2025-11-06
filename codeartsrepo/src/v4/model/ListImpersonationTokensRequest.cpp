

#include "huaweicloud/codeartsrepo/v4/model/ListImpersonationTokensRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListImpersonationTokensRequest::ListImpersonationTokensRequest()
{
    groupId_ = 0;
    groupIdIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    search_ = "";
    searchIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListImpersonationTokensRequest::~ListImpersonationTokensRequest() = default;

void ListImpersonationTokensRequest::validate()
{
}

web::json::value ListImpersonationTokensRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(searchIsSet_) {
        val[utility::conversions::to_string_t("search")] = ModelBase::toJson(search_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListImpersonationTokensRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("search"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearch(refVal);
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


int32_t ListImpersonationTokensRequest::getGroupId() const
{
    return groupId_;
}

void ListImpersonationTokensRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ListImpersonationTokensRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ListImpersonationTokensRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string ListImpersonationTokensRequest::getState() const
{
    return state_;
}

void ListImpersonationTokensRequest::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ListImpersonationTokensRequest::stateIsSet() const
{
    return stateIsSet_;
}

void ListImpersonationTokensRequest::unsetstate()
{
    stateIsSet_ = false;
}

std::string ListImpersonationTokensRequest::getSearch() const
{
    return search_;
}

void ListImpersonationTokensRequest::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool ListImpersonationTokensRequest::searchIsSet() const
{
    return searchIsSet_;
}

void ListImpersonationTokensRequest::unsetsearch()
{
    searchIsSet_ = false;
}

int32_t ListImpersonationTokensRequest::getOffset() const
{
    return offset_;
}

void ListImpersonationTokensRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListImpersonationTokensRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListImpersonationTokensRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListImpersonationTokensRequest::getLimit() const
{
    return limit_;
}

void ListImpersonationTokensRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListImpersonationTokensRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListImpersonationTokensRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


