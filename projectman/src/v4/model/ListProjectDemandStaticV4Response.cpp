

#include "huaweicloud/projectman/v4/model/ListProjectDemandStaticV4Response.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListProjectDemandStaticV4Response::ListProjectDemandStaticV4Response()
{
    demandStatisticsIsSet_ = false;
}

ListProjectDemandStaticV4Response::~ListProjectDemandStaticV4Response() = default;

void ListProjectDemandStaticV4Response::validate()
{
}

web::json::value ListProjectDemandStaticV4Response::toJson() const
{
    web::json::value val = web::json::value::object();

    if(demandStatisticsIsSet_) {
        val[utility::conversions::to_string_t("demand_statistics")] = ModelBase::toJson(demandStatistics_);
    }

    return val;
}
bool ListProjectDemandStaticV4Response::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("demand_statistics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("demand_statistics"));
        if(!fieldValue.is_null())
        {
            std::vector<DemandStatisticResponseV4> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDemandStatistics(refVal);
        }
    }
    return ok;
}


std::vector<DemandStatisticResponseV4>& ListProjectDemandStaticV4Response::getDemandStatistics()
{
    return demandStatistics_;
}

void ListProjectDemandStaticV4Response::setDemandStatistics(const std::vector<DemandStatisticResponseV4>& value)
{
    demandStatistics_ = value;
    demandStatisticsIsSet_ = true;
}

bool ListProjectDemandStaticV4Response::demandStatisticsIsSet() const
{
    return demandStatisticsIsSet_;
}

void ListProjectDemandStaticV4Response::unsetdemandStatistics()
{
    demandStatisticsIsSet_ = false;
}

}
}
}
}
}


