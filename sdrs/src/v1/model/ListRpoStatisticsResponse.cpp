

#include "huaweicloud/sdrs/v1/model/ListRpoStatisticsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ListRpoStatisticsResponse::ListRpoStatisticsResponse()
{
    resourceRpoStatisticsIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

ListRpoStatisticsResponse::~ListRpoStatisticsResponse() = default;

void ListRpoStatisticsResponse::validate()
{
}

web::json::value ListRpoStatisticsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceRpoStatisticsIsSet_) {
        val[utility::conversions::to_string_t("resource_rpo_statistics")] = ModelBase::toJson(resourceRpoStatistics_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool ListRpoStatisticsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_rpo_statistics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_rpo_statistics"));
        if(!fieldValue.is_null())
        {
            std::vector<RpoStattisticsParams> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceRpoStatistics(refVal);
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


std::vector<RpoStattisticsParams>& ListRpoStatisticsResponse::getResourceRpoStatistics()
{
    return resourceRpoStatistics_;
}

void ListRpoStatisticsResponse::setResourceRpoStatistics(const std::vector<RpoStattisticsParams>& value)
{
    resourceRpoStatistics_ = value;
    resourceRpoStatisticsIsSet_ = true;
}

bool ListRpoStatisticsResponse::resourceRpoStatisticsIsSet() const
{
    return resourceRpoStatisticsIsSet_;
}

void ListRpoStatisticsResponse::unsetresourceRpoStatistics()
{
    resourceRpoStatisticsIsSet_ = false;
}

int32_t ListRpoStatisticsResponse::getCount() const
{
    return count_;
}

void ListRpoStatisticsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListRpoStatisticsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListRpoStatisticsResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


