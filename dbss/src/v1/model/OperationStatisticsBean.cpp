

#include "huaweicloud/dbss/v1/model/OperationStatisticsBean.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




OperationStatisticsBean::OperationStatisticsBean()
{
    period_ = "";
    periodIsSet_ = false;
    riskOperationNum_ = 0L;
    riskOperationNumIsSet_ = false;
}

OperationStatisticsBean::~OperationStatisticsBean() = default;

void OperationStatisticsBean::validate()
{
}

web::json::value OperationStatisticsBean::toJson() const
{
    web::json::value val = web::json::value::object();

    if(periodIsSet_) {
        val[utility::conversions::to_string_t("period")] = ModelBase::toJson(period_);
    }
    if(riskOperationNumIsSet_) {
        val[utility::conversions::to_string_t("risk_operation_num")] = ModelBase::toJson(riskOperationNum_);
    }

    return val;
}
bool OperationStatisticsBean::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("risk_operation_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("risk_operation_num"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRiskOperationNum(refVal);
        }
    }
    return ok;
}


std::string OperationStatisticsBean::getPeriod() const
{
    return period_;
}

void OperationStatisticsBean::setPeriod(const std::string& value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool OperationStatisticsBean::periodIsSet() const
{
    return periodIsSet_;
}

void OperationStatisticsBean::unsetperiod()
{
    periodIsSet_ = false;
}

int64_t OperationStatisticsBean::getRiskOperationNum() const
{
    return riskOperationNum_;
}

void OperationStatisticsBean::setRiskOperationNum(int64_t value)
{
    riskOperationNum_ = value;
    riskOperationNumIsSet_ = true;
}

bool OperationStatisticsBean::riskOperationNumIsSet() const
{
    return riskOperationNumIsSet_;
}

void OperationStatisticsBean::unsetriskOperationNum()
{
    riskOperationNumIsSet_ = false;
}

}
}
}
}
}


