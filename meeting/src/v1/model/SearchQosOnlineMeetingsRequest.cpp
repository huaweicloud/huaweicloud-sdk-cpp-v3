

#include "huaweicloud/meeting/v1/model/SearchQosOnlineMeetingsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchQosOnlineMeetingsRequest::SearchQosOnlineMeetingsRequest()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    searchKey_ = "";
    searchKeyIsSet_ = false;
}

SearchQosOnlineMeetingsRequest::~SearchQosOnlineMeetingsRequest() = default;

void SearchQosOnlineMeetingsRequest::validate()
{
}

web::json::value SearchQosOnlineMeetingsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(searchKeyIsSet_) {
        val[utility::conversions::to_string_t("searchKey")] = ModelBase::toJson(searchKey_);
    }

    return val;
}
bool SearchQosOnlineMeetingsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("searchKey"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("searchKey"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearchKey(refVal);
        }
    }
    return ok;
}


int32_t SearchQosOnlineMeetingsRequest::getOffset() const
{
    return offset_;
}

void SearchQosOnlineMeetingsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SearchQosOnlineMeetingsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void SearchQosOnlineMeetingsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t SearchQosOnlineMeetingsRequest::getLimit() const
{
    return limit_;
}

void SearchQosOnlineMeetingsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchQosOnlineMeetingsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void SearchQosOnlineMeetingsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string SearchQosOnlineMeetingsRequest::getSearchKey() const
{
    return searchKey_;
}

void SearchQosOnlineMeetingsRequest::setSearchKey(const std::string& value)
{
    searchKey_ = value;
    searchKeyIsSet_ = true;
}

bool SearchQosOnlineMeetingsRequest::searchKeyIsSet() const
{
    return searchKeyIsSet_;
}

void SearchQosOnlineMeetingsRequest::unsetsearchKey()
{
    searchKeyIsSet_ = false;
}

}
}
}
}
}


