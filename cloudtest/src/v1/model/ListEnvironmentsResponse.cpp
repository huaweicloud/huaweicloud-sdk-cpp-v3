

#include "huaweicloud/cloudtest/v1/model/ListEnvironmentsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListEnvironmentsResponse::ListEnvironmentsResponse()
{
    environmentsIsSet_ = false;
    offset_ = 0L;
    offsetIsSet_ = false;
    limit_ = 0L;
    limitIsSet_ = false;
    totalCount_ = 0L;
    totalCountIsSet_ = false;
}

ListEnvironmentsResponse::~ListEnvironmentsResponse() = default;

void ListEnvironmentsResponse::validate()
{
}

web::json::value ListEnvironmentsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(environmentsIsSet_) {
        val[utility::conversions::to_string_t("environments")] = ModelBase::toJson(environments_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListEnvironmentsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("environments"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("environments"));
        if(!fieldValue.is_null())
        {
            std::vector<Environment> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnvironments(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<Environment>& ListEnvironmentsResponse::getEnvironments()
{
    return environments_;
}

void ListEnvironmentsResponse::setEnvironments(const std::vector<Environment>& value)
{
    environments_ = value;
    environmentsIsSet_ = true;
}

bool ListEnvironmentsResponse::environmentsIsSet() const
{
    return environmentsIsSet_;
}

void ListEnvironmentsResponse::unsetenvironments()
{
    environmentsIsSet_ = false;
}

int64_t ListEnvironmentsResponse::getOffset() const
{
    return offset_;
}

void ListEnvironmentsResponse::setOffset(int64_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListEnvironmentsResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListEnvironmentsResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int64_t ListEnvironmentsResponse::getLimit() const
{
    return limit_;
}

void ListEnvironmentsResponse::setLimit(int64_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListEnvironmentsResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListEnvironmentsResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int64_t ListEnvironmentsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListEnvironmentsResponse::setTotalCount(int64_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListEnvironmentsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListEnvironmentsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


