

#include "huaweicloud/codeartsrepo/v4/model/ListUserKeysRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListUserKeysRequest::ListUserKeysRequest()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    query_ = "";
    queryIsSet_ = false;
}

ListUserKeysRequest::~ListUserKeysRequest() = default;

void ListUserKeysRequest::validate()
{
}

web::json::value ListUserKeysRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(queryIsSet_) {
        val[utility::conversions::to_string_t("query")] = ModelBase::toJson(query_);
    }

    return val;
}
bool ListUserKeysRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("query"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuery(refVal);
        }
    }
    return ok;
}


int32_t ListUserKeysRequest::getOffset() const
{
    return offset_;
}

void ListUserKeysRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListUserKeysRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListUserKeysRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListUserKeysRequest::getLimit() const
{
    return limit_;
}

void ListUserKeysRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListUserKeysRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListUserKeysRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListUserKeysRequest::getQuery() const
{
    return query_;
}

void ListUserKeysRequest::setQuery(const std::string& value)
{
    query_ = value;
    queryIsSet_ = true;
}

bool ListUserKeysRequest::queryIsSet() const
{
    return queryIsSet_;
}

void ListUserKeysRequest::unsetquery()
{
    queryIsSet_ = false;
}

}
}
}
}
}


