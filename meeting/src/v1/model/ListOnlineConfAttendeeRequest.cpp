

#include "huaweicloud/meeting/v1/model/ListOnlineConfAttendeeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ListOnlineConfAttendeeRequest::ListOnlineConfAttendeeRequest()
{
    confId_ = "";
    confIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    searchKey_ = "";
    searchKeyIsSet_ = false;
}

ListOnlineConfAttendeeRequest::~ListOnlineConfAttendeeRequest() = default;

void ListOnlineConfAttendeeRequest::validate()
{
}

web::json::value ListOnlineConfAttendeeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(confIdIsSet_) {
        val[utility::conversions::to_string_t("conf_id")] = ModelBase::toJson(confId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(searchKeyIsSet_) {
        val[utility::conversions::to_string_t("search_key")] = ModelBase::toJson(searchKey_);
    }

    return val;
}
bool ListOnlineConfAttendeeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("conf_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conf_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("search_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearchKey(refVal);
        }
    }
    return ok;
}


std::string ListOnlineConfAttendeeRequest::getConfId() const
{
    return confId_;
}

void ListOnlineConfAttendeeRequest::setConfId(const std::string& value)
{
    confId_ = value;
    confIdIsSet_ = true;
}

bool ListOnlineConfAttendeeRequest::confIdIsSet() const
{
    return confIdIsSet_;
}

void ListOnlineConfAttendeeRequest::unsetconfId()
{
    confIdIsSet_ = false;
}

int32_t ListOnlineConfAttendeeRequest::getOffset() const
{
    return offset_;
}

void ListOnlineConfAttendeeRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListOnlineConfAttendeeRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListOnlineConfAttendeeRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListOnlineConfAttendeeRequest::getLimit() const
{
    return limit_;
}

void ListOnlineConfAttendeeRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListOnlineConfAttendeeRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListOnlineConfAttendeeRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListOnlineConfAttendeeRequest::getSearchKey() const
{
    return searchKey_;
}

void ListOnlineConfAttendeeRequest::setSearchKey(const std::string& value)
{
    searchKey_ = value;
    searchKeyIsSet_ = true;
}

bool ListOnlineConfAttendeeRequest::searchKeyIsSet() const
{
    return searchKeyIsSet_;
}

void ListOnlineConfAttendeeRequest::unsetsearchKey()
{
    searchKeyIsSet_ = false;
}

}
}
}
}
}


