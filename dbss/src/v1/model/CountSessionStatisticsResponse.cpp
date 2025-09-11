

#include "huaweicloud/dbss/v1/model/CountSessionStatisticsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CountSessionStatisticsResponse::CountSessionStatisticsResponse()
{
    generateTime_ = "";
    generateTimeIsSet_ = false;
    sessionStatisticsIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

CountSessionStatisticsResponse::~CountSessionStatisticsResponse() = default;

void CountSessionStatisticsResponse::validate()
{
}

web::json::value CountSessionStatisticsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(generateTimeIsSet_) {
        val[utility::conversions::to_string_t("generate_time")] = ModelBase::toJson(generateTime_);
    }
    if(sessionStatisticsIsSet_) {
        val[utility::conversions::to_string_t("session_statistics")] = ModelBase::toJson(sessionStatistics_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool CountSessionStatisticsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("session_statistics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("session_statistics"));
        if(!fieldValue.is_null())
        {
            std::vector<SessionStatisticsBean> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessionStatistics(refVal);
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


std::string CountSessionStatisticsResponse::getGenerateTime() const
{
    return generateTime_;
}

void CountSessionStatisticsResponse::setGenerateTime(const std::string& value)
{
    generateTime_ = value;
    generateTimeIsSet_ = true;
}

bool CountSessionStatisticsResponse::generateTimeIsSet() const
{
    return generateTimeIsSet_;
}

void CountSessionStatisticsResponse::unsetgenerateTime()
{
    generateTimeIsSet_ = false;
}

std::vector<SessionStatisticsBean>& CountSessionStatisticsResponse::getSessionStatistics()
{
    return sessionStatistics_;
}

void CountSessionStatisticsResponse::setSessionStatistics(const std::vector<SessionStatisticsBean>& value)
{
    sessionStatistics_ = value;
    sessionStatisticsIsSet_ = true;
}

bool CountSessionStatisticsResponse::sessionStatisticsIsSet() const
{
    return sessionStatisticsIsSet_;
}

void CountSessionStatisticsResponse::unsetsessionStatistics()
{
    sessionStatisticsIsSet_ = false;
}

std::string CountSessionStatisticsResponse::getStatus() const
{
    return status_;
}

void CountSessionStatisticsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CountSessionStatisticsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CountSessionStatisticsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


