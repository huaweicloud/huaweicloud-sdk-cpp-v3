

#include "huaweicloud/dbss/v1/model/RiskStatisticsBean.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




RiskStatisticsBean::RiskStatisticsBean()
{
    highRiskNum_ = 0L;
    highRiskNumIsSet_ = false;
    lowRiskNum_ = 0L;
    lowRiskNumIsSet_ = false;
    middleRiskNum_ = 0L;
    middleRiskNumIsSet_ = false;
    noRiskNum_ = 0L;
    noRiskNumIsSet_ = false;
    period_ = "";
    periodIsSet_ = false;
}

RiskStatisticsBean::~RiskStatisticsBean() = default;

void RiskStatisticsBean::validate()
{
}

web::json::value RiskStatisticsBean::toJson() const
{
    web::json::value val = web::json::value::object();

    if(highRiskNumIsSet_) {
        val[utility::conversions::to_string_t("high_risk_num")] = ModelBase::toJson(highRiskNum_);
    }
    if(lowRiskNumIsSet_) {
        val[utility::conversions::to_string_t("low_risk_num")] = ModelBase::toJson(lowRiskNum_);
    }
    if(middleRiskNumIsSet_) {
        val[utility::conversions::to_string_t("middle_risk_num")] = ModelBase::toJson(middleRiskNum_);
    }
    if(noRiskNumIsSet_) {
        val[utility::conversions::to_string_t("no_risk_num")] = ModelBase::toJson(noRiskNum_);
    }
    if(periodIsSet_) {
        val[utility::conversions::to_string_t("period")] = ModelBase::toJson(period_);
    }

    return val;
}
bool RiskStatisticsBean::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("high_risk_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("high_risk_num"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHighRiskNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("low_risk_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("low_risk_num"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLowRiskNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("middle_risk_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("middle_risk_num"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMiddleRiskNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("no_risk_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("no_risk_num"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNoRiskNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriod(refVal);
        }
    }
    return ok;
}


int64_t RiskStatisticsBean::getHighRiskNum() const
{
    return highRiskNum_;
}

void RiskStatisticsBean::setHighRiskNum(int64_t value)
{
    highRiskNum_ = value;
    highRiskNumIsSet_ = true;
}

bool RiskStatisticsBean::highRiskNumIsSet() const
{
    return highRiskNumIsSet_;
}

void RiskStatisticsBean::unsethighRiskNum()
{
    highRiskNumIsSet_ = false;
}

int64_t RiskStatisticsBean::getLowRiskNum() const
{
    return lowRiskNum_;
}

void RiskStatisticsBean::setLowRiskNum(int64_t value)
{
    lowRiskNum_ = value;
    lowRiskNumIsSet_ = true;
}

bool RiskStatisticsBean::lowRiskNumIsSet() const
{
    return lowRiskNumIsSet_;
}

void RiskStatisticsBean::unsetlowRiskNum()
{
    lowRiskNumIsSet_ = false;
}

int64_t RiskStatisticsBean::getMiddleRiskNum() const
{
    return middleRiskNum_;
}

void RiskStatisticsBean::setMiddleRiskNum(int64_t value)
{
    middleRiskNum_ = value;
    middleRiskNumIsSet_ = true;
}

bool RiskStatisticsBean::middleRiskNumIsSet() const
{
    return middleRiskNumIsSet_;
}

void RiskStatisticsBean::unsetmiddleRiskNum()
{
    middleRiskNumIsSet_ = false;
}

int64_t RiskStatisticsBean::getNoRiskNum() const
{
    return noRiskNum_;
}

void RiskStatisticsBean::setNoRiskNum(int64_t value)
{
    noRiskNum_ = value;
    noRiskNumIsSet_ = true;
}

bool RiskStatisticsBean::noRiskNumIsSet() const
{
    return noRiskNumIsSet_;
}

void RiskStatisticsBean::unsetnoRiskNum()
{
    noRiskNumIsSet_ = false;
}

std::string RiskStatisticsBean::getPeriod() const
{
    return period_;
}

void RiskStatisticsBean::setPeriod(const std::string& value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool RiskStatisticsBean::periodIsSet() const
{
    return periodIsSet_;
}

void RiskStatisticsBean::unsetperiod()
{
    periodIsSet_ = false;
}

}
}
}
}
}


