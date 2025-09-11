

#include "huaweicloud/dbss/v1/model/CountSqlTrendStatisticsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CountSqlTrendStatisticsResponse::CountSqlTrendStatisticsResponse()
{
    countStatisticsIsSet_ = false;
    generateTime_ = "";
    generateTimeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

CountSqlTrendStatisticsResponse::~CountSqlTrendStatisticsResponse() = default;

void CountSqlTrendStatisticsResponse::validate()
{
}

web::json::value CountSqlTrendStatisticsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countStatisticsIsSet_) {
        val[utility::conversions::to_string_t("count_statistics")] = ModelBase::toJson(countStatistics_);
    }
    if(generateTimeIsSet_) {
        val[utility::conversions::to_string_t("generate_time")] = ModelBase::toJson(generateTime_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool CountSqlTrendStatisticsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count_statistics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count_statistics"));
        if(!fieldValue.is_null())
        {
            std::vector<CountStatisticsBean> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCountStatistics(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("generate_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("generate_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGenerateTime(refVal);
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


std::vector<CountStatisticsBean>& CountSqlTrendStatisticsResponse::getCountStatistics()
{
    return countStatistics_;
}

void CountSqlTrendStatisticsResponse::setCountStatistics(const std::vector<CountStatisticsBean>& value)
{
    countStatistics_ = value;
    countStatisticsIsSet_ = true;
}

bool CountSqlTrendStatisticsResponse::countStatisticsIsSet() const
{
    return countStatisticsIsSet_;
}

void CountSqlTrendStatisticsResponse::unsetcountStatistics()
{
    countStatisticsIsSet_ = false;
}

std::string CountSqlTrendStatisticsResponse::getGenerateTime() const
{
    return generateTime_;
}

void CountSqlTrendStatisticsResponse::setGenerateTime(const std::string& value)
{
    generateTime_ = value;
    generateTimeIsSet_ = true;
}

bool CountSqlTrendStatisticsResponse::generateTimeIsSet() const
{
    return generateTimeIsSet_;
}

void CountSqlTrendStatisticsResponse::unsetgenerateTime()
{
    generateTimeIsSet_ = false;
}

std::string CountSqlTrendStatisticsResponse::getStatus() const
{
    return status_;
}

void CountSqlTrendStatisticsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CountSqlTrendStatisticsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CountSqlTrendStatisticsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


