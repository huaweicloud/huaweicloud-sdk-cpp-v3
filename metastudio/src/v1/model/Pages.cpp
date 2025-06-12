

#include "huaweicloud/metastudio/v1/model/Pages.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




Pages::Pages()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

Pages::~Pages() = default;

void Pages::validate()
{
}

web::json::value Pages::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool Pages::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}


int32_t Pages::getOffset() const
{
    return offset_;
}

void Pages::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool Pages::offsetIsSet() const
{
    return offsetIsSet_;
}

void Pages::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t Pages::getLimit() const
{
    return limit_;
}

void Pages::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool Pages::limitIsSet() const
{
    return limitIsSet_;
}

void Pages::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t Pages::getCount() const
{
    return count_;
}

void Pages::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool Pages::countIsSet() const
{
    return countIsSet_;
}

void Pages::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


