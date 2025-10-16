

#include "huaweicloud/cpcs/v1/model/StatisticalCharacteristic.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




StatisticalCharacteristic::StatisticalCharacteristic()
{
    successRate_ = 0.0;
    successRateIsSet_ = false;
    failRate_ = 0.0;
    failRateIsSet_ = false;
    successCount_ = 0L;
    successCountIsSet_ = false;
    totalCount_ = 0L;
    totalCountIsSet_ = false;
    averageValue_ = 0.0;
    averageValueIsSet_ = false;
    totalValue_ = 0.0;
    totalValueIsSet_ = false;
}

StatisticalCharacteristic::~StatisticalCharacteristic() = default;

void StatisticalCharacteristic::validate()
{
}

web::json::value StatisticalCharacteristic::toJson() const
{
    web::json::value val = web::json::value::object();

    if(successRateIsSet_) {
        val[utility::conversions::to_string_t("success_rate")] = ModelBase::toJson(successRate_);
    }
    if(failRateIsSet_) {
        val[utility::conversions::to_string_t("fail_rate")] = ModelBase::toJson(failRate_);
    }
    if(successCountIsSet_) {
        val[utility::conversions::to_string_t("success_count")] = ModelBase::toJson(successCount_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(averageValueIsSet_) {
        val[utility::conversions::to_string_t("average_value")] = ModelBase::toJson(averageValue_);
    }
    if(totalValueIsSet_) {
        val[utility::conversions::to_string_t("total_value")] = ModelBase::toJson(totalValue_);
    }

    return val;
}
bool StatisticalCharacteristic::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("success_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success_rate"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccessRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fail_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fail_rate"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("success_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccessCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("average_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("average_value"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAverageValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_value"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalValue(refVal);
        }
    }
    return ok;
}


double StatisticalCharacteristic::getSuccessRate() const
{
    return successRate_;
}

void StatisticalCharacteristic::setSuccessRate(double value)
{
    successRate_ = value;
    successRateIsSet_ = true;
}

bool StatisticalCharacteristic::successRateIsSet() const
{
    return successRateIsSet_;
}

void StatisticalCharacteristic::unsetsuccessRate()
{
    successRateIsSet_ = false;
}

double StatisticalCharacteristic::getFailRate() const
{
    return failRate_;
}

void StatisticalCharacteristic::setFailRate(double value)
{
    failRate_ = value;
    failRateIsSet_ = true;
}

bool StatisticalCharacteristic::failRateIsSet() const
{
    return failRateIsSet_;
}

void StatisticalCharacteristic::unsetfailRate()
{
    failRateIsSet_ = false;
}

int64_t StatisticalCharacteristic::getSuccessCount() const
{
    return successCount_;
}

void StatisticalCharacteristic::setSuccessCount(int64_t value)
{
    successCount_ = value;
    successCountIsSet_ = true;
}

bool StatisticalCharacteristic::successCountIsSet() const
{
    return successCountIsSet_;
}

void StatisticalCharacteristic::unsetsuccessCount()
{
    successCountIsSet_ = false;
}

int64_t StatisticalCharacteristic::getTotalCount() const
{
    return totalCount_;
}

void StatisticalCharacteristic::setTotalCount(int64_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool StatisticalCharacteristic::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void StatisticalCharacteristic::unsettotalCount()
{
    totalCountIsSet_ = false;
}

double StatisticalCharacteristic::getAverageValue() const
{
    return averageValue_;
}

void StatisticalCharacteristic::setAverageValue(double value)
{
    averageValue_ = value;
    averageValueIsSet_ = true;
}

bool StatisticalCharacteristic::averageValueIsSet() const
{
    return averageValueIsSet_;
}

void StatisticalCharacteristic::unsetaverageValue()
{
    averageValueIsSet_ = false;
}

double StatisticalCharacteristic::getTotalValue() const
{
    return totalValue_;
}

void StatisticalCharacteristic::setTotalValue(double value)
{
    totalValue_ = value;
    totalValueIsSet_ = true;
}

bool StatisticalCharacteristic::totalValueIsSet() const
{
    return totalValueIsSet_;
}

void StatisticalCharacteristic::unsettotalValue()
{
    totalValueIsSet_ = false;
}

}
}
}
}
}


