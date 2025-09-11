

#include "huaweicloud/dbss/v1/model/CountRiskTrendStatisticsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CountRiskTrendStatisticsResponse::CountRiskTrendStatisticsResponse()
{
    generateTime_ = "";
    generateTimeIsSet_ = false;
    riskStatisticsIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

CountRiskTrendStatisticsResponse::~CountRiskTrendStatisticsResponse() = default;

void CountRiskTrendStatisticsResponse::validate()
{
}

web::json::value CountRiskTrendStatisticsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(generateTimeIsSet_) {
        val[utility::conversions::to_string_t("generate_time")] = ModelBase::toJson(generateTime_);
    }
    if(riskStatisticsIsSet_) {
        val[utility::conversions::to_string_t("risk_statistics")] = ModelBase::toJson(riskStatistics_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool CountRiskTrendStatisticsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("generate_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("generate_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGenerateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("risk_statistics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("risk_statistics"));
        if(!fieldValue.is_null())
        {
            std::vector<RiskStatisticsBean> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRiskStatistics(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string CountRiskTrendStatisticsResponse::getGenerateTime() const
{
    return generateTime_;
}

void CountRiskTrendStatisticsResponse::setGenerateTime(const std::string& value)
{
    generateTime_ = value;
    generateTimeIsSet_ = true;
}

bool CountRiskTrendStatisticsResponse::generateTimeIsSet() const
{
    return generateTimeIsSet_;
}

void CountRiskTrendStatisticsResponse::unsetgenerateTime()
{
    generateTimeIsSet_ = false;
}

std::vector<RiskStatisticsBean>& CountRiskTrendStatisticsResponse::getRiskStatistics()
{
    return riskStatistics_;
}

void CountRiskTrendStatisticsResponse::setRiskStatistics(const std::vector<RiskStatisticsBean>& value)
{
    riskStatistics_ = value;
    riskStatisticsIsSet_ = true;
}

bool CountRiskTrendStatisticsResponse::riskStatisticsIsSet() const
{
    return riskStatisticsIsSet_;
}

void CountRiskTrendStatisticsResponse::unsetriskStatistics()
{
    riskStatisticsIsSet_ = false;
}

std::string CountRiskTrendStatisticsResponse::getStatus() const
{
    return status_;
}

void CountRiskTrendStatisticsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CountRiskTrendStatisticsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CountRiskTrendStatisticsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


