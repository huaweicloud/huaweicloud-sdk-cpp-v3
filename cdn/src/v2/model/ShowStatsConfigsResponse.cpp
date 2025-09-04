

#include "huaweicloud/cdn/v2/model/ShowStatsConfigsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ShowStatsConfigsResponse::ShowStatsConfigsResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    dataIsSet_ = false;
}

ShowStatsConfigsResponse::~ShowStatsConfigsResponse() = default;

void ShowStatsConfigsResponse::validate()
{
}

web::json::value ShowStatsConfigsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ShowStatsConfigsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<StatsConfigDetails> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t ShowStatsConfigsResponse::getTotal() const
{
    return total_;
}

void ShowStatsConfigsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowStatsConfigsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ShowStatsConfigsResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<StatsConfigDetails>& ShowStatsConfigsResponse::getData()
{
    return data_;
}

void ShowStatsConfigsResponse::setData(const std::vector<StatsConfigDetails>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowStatsConfigsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowStatsConfigsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


