

#include "huaweicloud/cdn/v2/model/TopUrl.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




TopUrl::TopUrl()
{
    enable_ = false;
    enableIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    sortByCode_ = false;
    sortByCodeIsSet_ = false;
}

TopUrl::~TopUrl() = default;

void TopUrl::validate()
{
}

web::json::value TopUrl::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enableIsSet_) {
        val[utility::conversions::to_string_t("enable")] = ModelBase::toJson(enable_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(sortByCodeIsSet_) {
        val[utility::conversions::to_string_t("sort_by_code")] = ModelBase::toJson(sortByCode_);
    }

    return val;
}
bool TopUrl::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnable(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sort_by_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_by_code"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortByCode(refVal);
        }
    }
    return ok;
}


bool TopUrl::isEnable() const
{
    return enable_;
}

void TopUrl::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool TopUrl::enableIsSet() const
{
    return enableIsSet_;
}

void TopUrl::unsetenable()
{
    enableIsSet_ = false;
}

int32_t TopUrl::getLimit() const
{
    return limit_;
}

void TopUrl::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool TopUrl::limitIsSet() const
{
    return limitIsSet_;
}

void TopUrl::unsetlimit()
{
    limitIsSet_ = false;
}

bool TopUrl::isSortByCode() const
{
    return sortByCode_;
}

void TopUrl::setSortByCode(bool value)
{
    sortByCode_ = value;
    sortByCodeIsSet_ = true;
}

bool TopUrl::sortByCodeIsSet() const
{
    return sortByCodeIsSet_;
}

void TopUrl::unsetsortByCode()
{
    sortByCodeIsSet_ = false;
}

}
}
}
}
}


