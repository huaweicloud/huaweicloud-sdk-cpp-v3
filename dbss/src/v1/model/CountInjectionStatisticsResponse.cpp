

#include "huaweicloud/dbss/v1/model/CountInjectionStatisticsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CountInjectionStatisticsResponse::CountInjectionStatisticsResponse()
{
    generateTime_ = "";
    generateTimeIsSet_ = false;
    injectionStatisticsIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

CountInjectionStatisticsResponse::~CountInjectionStatisticsResponse() = default;

void CountInjectionStatisticsResponse::validate()
{
}

web::json::value CountInjectionStatisticsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(generateTimeIsSet_) {
        val[utility::conversions::to_string_t("generate_time")] = ModelBase::toJson(generateTime_);
    }
    if(injectionStatisticsIsSet_) {
        val[utility::conversions::to_string_t("injection_statistics")] = ModelBase::toJson(injectionStatistics_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool CountInjectionStatisticsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("injection_statistics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("injection_statistics"));
        if(!fieldValue.is_null())
        {
            std::vector<InjectionStatisticsBean> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInjectionStatistics(refVal);
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


std::string CountInjectionStatisticsResponse::getGenerateTime() const
{
    return generateTime_;
}

void CountInjectionStatisticsResponse::setGenerateTime(const std::string& value)
{
    generateTime_ = value;
    generateTimeIsSet_ = true;
}

bool CountInjectionStatisticsResponse::generateTimeIsSet() const
{
    return generateTimeIsSet_;
}

void CountInjectionStatisticsResponse::unsetgenerateTime()
{
    generateTimeIsSet_ = false;
}

std::vector<InjectionStatisticsBean>& CountInjectionStatisticsResponse::getInjectionStatistics()
{
    return injectionStatistics_;
}

void CountInjectionStatisticsResponse::setInjectionStatistics(const std::vector<InjectionStatisticsBean>& value)
{
    injectionStatistics_ = value;
    injectionStatisticsIsSet_ = true;
}

bool CountInjectionStatisticsResponse::injectionStatisticsIsSet() const
{
    return injectionStatisticsIsSet_;
}

void CountInjectionStatisticsResponse::unsetinjectionStatistics()
{
    injectionStatisticsIsSet_ = false;
}

std::string CountInjectionStatisticsResponse::getStatus() const
{
    return status_;
}

void CountInjectionStatisticsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CountInjectionStatisticsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CountInjectionStatisticsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


