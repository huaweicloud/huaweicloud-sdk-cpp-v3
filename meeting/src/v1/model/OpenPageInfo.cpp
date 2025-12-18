

#include "huaweicloud/meeting/v1/model/OpenPageInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




OpenPageInfo::OpenPageInfo()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    count_ = 0L;
    countIsSet_ = false;
}

OpenPageInfo::~OpenPageInfo() = default;

void OpenPageInfo::validate()
{
}

web::json::value OpenPageInfo::toJson() const
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
bool OpenPageInfo::fromJson(const web::json::value& val)
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
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}


int32_t OpenPageInfo::getOffset() const
{
    return offset_;
}

void OpenPageInfo::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool OpenPageInfo::offsetIsSet() const
{
    return offsetIsSet_;
}

void OpenPageInfo::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t OpenPageInfo::getLimit() const
{
    return limit_;
}

void OpenPageInfo::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool OpenPageInfo::limitIsSet() const
{
    return limitIsSet_;
}

void OpenPageInfo::unsetlimit()
{
    limitIsSet_ = false;
}

int64_t OpenPageInfo::getCount() const
{
    return count_;
}

void OpenPageInfo::setCount(int64_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool OpenPageInfo::countIsSet() const
{
    return countIsSet_;
}

void OpenPageInfo::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


