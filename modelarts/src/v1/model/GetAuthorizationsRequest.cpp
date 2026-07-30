

#include "huaweicloud/modelarts/v1/model/GetAuthorizationsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




GetAuthorizationsRequest::GetAuthorizationsRequest()
{
    sortBy_ = "";
    sortByIsSet_ = false;
    order_ = "";
    orderIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

GetAuthorizationsRequest::~GetAuthorizationsRequest() = default;

void GetAuthorizationsRequest::validate()
{
}

web::json::value GetAuthorizationsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sortByIsSet_) {
        val[utility::conversions::to_string_t("sort_by")] = ModelBase::toJson(sortBy_);
    }
    if(orderIsSet_) {
        val[utility::conversions::to_string_t("order")] = ModelBase::toJson(order_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool GetAuthorizationsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sort_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrder(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}


std::string GetAuthorizationsRequest::getSortBy() const
{
    return sortBy_;
}

void GetAuthorizationsRequest::setSortBy(const std::string& value)
{
    sortBy_ = value;
    sortByIsSet_ = true;
}

bool GetAuthorizationsRequest::sortByIsSet() const
{
    return sortByIsSet_;
}

void GetAuthorizationsRequest::unsetsortBy()
{
    sortByIsSet_ = false;
}

std::string GetAuthorizationsRequest::getOrder() const
{
    return order_;
}

void GetAuthorizationsRequest::setOrder(const std::string& value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool GetAuthorizationsRequest::orderIsSet() const
{
    return orderIsSet_;
}

void GetAuthorizationsRequest::unsetorder()
{
    orderIsSet_ = false;
}

int32_t GetAuthorizationsRequest::getLimit() const
{
    return limit_;
}

void GetAuthorizationsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool GetAuthorizationsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void GetAuthorizationsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t GetAuthorizationsRequest::getOffset() const
{
    return offset_;
}

void GetAuthorizationsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool GetAuthorizationsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void GetAuthorizationsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


