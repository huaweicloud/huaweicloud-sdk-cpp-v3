

#include "huaweicloud/cfw/v1/model/ReportHistoryVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ReportHistoryVO::ReportHistoryVO()
{
    reportId_ = "";
    reportIdIsSet_ = false;
    sendTime_ = 0L;
    sendTimeIsSet_ = false;
    statisticPeriodIsSet_ = false;
}

ReportHistoryVO::~ReportHistoryVO() = default;

void ReportHistoryVO::validate()
{
}

web::json::value ReportHistoryVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(reportIdIsSet_) {
        val[utility::conversions::to_string_t("report_id")] = ModelBase::toJson(reportId_);
    }
    if(sendTimeIsSet_) {
        val[utility::conversions::to_string_t("send_time")] = ModelBase::toJson(sendTime_);
    }
    if(statisticPeriodIsSet_) {
        val[utility::conversions::to_string_t("statistic_period")] = ModelBase::toJson(statisticPeriod_);
    }

    return val;
}
bool ReportHistoryVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("report_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("report_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReportId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("send_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("send_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSendTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("statistic_period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("statistic_period"));
        if(!fieldValue.is_null())
        {
            StatisticPeriod refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatisticPeriod(refVal);
        }
    }
    return ok;
}


std::string ReportHistoryVO::getReportId() const
{
    return reportId_;
}

void ReportHistoryVO::setReportId(const std::string& value)
{
    reportId_ = value;
    reportIdIsSet_ = true;
}

bool ReportHistoryVO::reportIdIsSet() const
{
    return reportIdIsSet_;
}

void ReportHistoryVO::unsetreportId()
{
    reportIdIsSet_ = false;
}

int64_t ReportHistoryVO::getSendTime() const
{
    return sendTime_;
}

void ReportHistoryVO::setSendTime(int64_t value)
{
    sendTime_ = value;
    sendTimeIsSet_ = true;
}

bool ReportHistoryVO::sendTimeIsSet() const
{
    return sendTimeIsSet_;
}

void ReportHistoryVO::unsetsendTime()
{
    sendTimeIsSet_ = false;
}

StatisticPeriod ReportHistoryVO::getStatisticPeriod() const
{
    return statisticPeriod_;
}

void ReportHistoryVO::setStatisticPeriod(const StatisticPeriod& value)
{
    statisticPeriod_ = value;
    statisticPeriodIsSet_ = true;
}

bool ReportHistoryVO::statisticPeriodIsSet() const
{
    return statisticPeriodIsSet_;
}

void ReportHistoryVO::unsetstatisticPeriod()
{
    statisticPeriodIsSet_ = false;
}

}
}
}
}
}


