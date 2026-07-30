

#include "huaweicloud/modelarts/v1/model/ShowPoolStatisticsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowPoolStatisticsResponse::ShowPoolStatisticsResponse()
{
    statisticsIsSet_ = false;
    operationTime_ = "";
    operationTimeIsSet_ = false;
}

ShowPoolStatisticsResponse::~ShowPoolStatisticsResponse() = default;

void ShowPoolStatisticsResponse::validate()
{
}

web::json::value ShowPoolStatisticsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statisticsIsSet_) {
        val[utility::conversions::to_string_t("statistics")] = ModelBase::toJson(statistics_);
    }
    if(operationTimeIsSet_) {
        val[utility::conversions::to_string_t("operationTime")] = ModelBase::toJson(operationTime_);
    }

    return val;
}
bool ShowPoolStatisticsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("statistics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("statistics"));
        if(!fieldValue.is_null())
        {
            PoolStatistics_statistics refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatistics(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operationTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operationTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationTime(refVal);
        }
    }
    return ok;
}


PoolStatistics_statistics ShowPoolStatisticsResponse::getStatistics() const
{
    return statistics_;
}

void ShowPoolStatisticsResponse::setStatistics(const PoolStatistics_statistics& value)
{
    statistics_ = value;
    statisticsIsSet_ = true;
}

bool ShowPoolStatisticsResponse::statisticsIsSet() const
{
    return statisticsIsSet_;
}

void ShowPoolStatisticsResponse::unsetstatistics()
{
    statisticsIsSet_ = false;
}

std::string ShowPoolStatisticsResponse::getOperationTime() const
{
    return operationTime_;
}

void ShowPoolStatisticsResponse::setOperationTime(const std::string& value)
{
    operationTime_ = value;
    operationTimeIsSet_ = true;
}

bool ShowPoolStatisticsResponse::operationTimeIsSet() const
{
    return operationTimeIsSet_;
}

void ShowPoolStatisticsResponse::unsetoperationTime()
{
    operationTimeIsSet_ = false;
}

}
}
}
}
}


