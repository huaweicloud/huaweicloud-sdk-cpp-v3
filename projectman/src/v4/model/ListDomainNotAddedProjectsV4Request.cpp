

#include "huaweicloud/projectman/v4/model/ListDomainNotAddedProjectsV4Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListDomainNotAddedProjectsV4Request::ListDomainNotAddedProjectsV4Request()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListDomainNotAddedProjectsV4Request::~ListDomainNotAddedProjectsV4Request() = default;

void ListDomainNotAddedProjectsV4Request::validate()
{
}

web::json::value ListDomainNotAddedProjectsV4Request::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListDomainNotAddedProjectsV4Request::fromJson(const web::json::value& val)
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
    return ok;
}


int32_t ListDomainNotAddedProjectsV4Request::getOffset() const
{
    return offset_;
}

void ListDomainNotAddedProjectsV4Request::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDomainNotAddedProjectsV4Request::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDomainNotAddedProjectsV4Request::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListDomainNotAddedProjectsV4Request::getLimit() const
{
    return limit_;
}

void ListDomainNotAddedProjectsV4Request::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDomainNotAddedProjectsV4Request::limitIsSet() const
{
    return limitIsSet_;
}

void ListDomainNotAddedProjectsV4Request::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


