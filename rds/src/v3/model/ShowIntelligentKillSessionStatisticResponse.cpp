

#include "huaweicloud/rds/v3/model/ShowIntelligentKillSessionStatisticResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowIntelligentKillSessionStatisticResponse::ShowIntelligentKillSessionStatisticResponse()
{
    statisticsIsSet_ = false;
}

ShowIntelligentKillSessionStatisticResponse::~ShowIntelligentKillSessionStatisticResponse() = default;

void ShowIntelligentKillSessionStatisticResponse::validate()
{
}

web::json::value ShowIntelligentKillSessionStatisticResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statisticsIsSet_) {
        val[utility::conversions::to_string_t("statistics")] = ModelBase::toJson(statistics_);
    }

    return val;
}
bool ShowIntelligentKillSessionStatisticResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("statistics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("statistics"));
        if(!fieldValue.is_null())
        {
            std::vector<IntelligentKillSessionStatistic> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatistics(refVal);
        }
    }
    return ok;
}


std::vector<IntelligentKillSessionStatistic>& ShowIntelligentKillSessionStatisticResponse::getStatistics()
{
    return statistics_;
}

void ShowIntelligentKillSessionStatisticResponse::setStatistics(const std::vector<IntelligentKillSessionStatistic>& value)
{
    statistics_ = value;
    statisticsIsSet_ = true;
}

bool ShowIntelligentKillSessionStatisticResponse::statisticsIsSet() const
{
    return statisticsIsSet_;
}

void ShowIntelligentKillSessionStatisticResponse::unsetstatistics()
{
    statisticsIsSet_ = false;
}

}
}
}
}
}


