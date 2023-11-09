

#include "huaweicloud/tics/v1/model/ListLeaguesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




ListLeaguesRequest::ListLeaguesRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

ListLeaguesRequest::~ListLeaguesRequest() = default;

void ListLeaguesRequest::validate()
{
}

web::json::value ListLeaguesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ListLeaguesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


int32_t ListLeaguesRequest::getLimit() const
{
    return limit_;
}

void ListLeaguesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListLeaguesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListLeaguesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListLeaguesRequest::getOffset() const
{
    return offset_;
}

void ListLeaguesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListLeaguesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListLeaguesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListLeaguesRequest::getType() const
{
    return type_;
}

void ListLeaguesRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListLeaguesRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListLeaguesRequest::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


