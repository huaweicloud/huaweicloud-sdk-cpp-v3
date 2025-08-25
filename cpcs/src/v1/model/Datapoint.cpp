

#include "huaweicloud/cpcs/v1/model/Datapoint.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




Datapoint::Datapoint()
{
    max_ = 0.0;
    maxIsSet_ = false;
    min_ = 0.0;
    minIsSet_ = false;
    average_ = 0.0;
    averageIsSet_ = false;
    sum_ = 0.0;
    sumIsSet_ = false;
    variance_ = 0.0;
    varianceIsSet_ = false;
    timestamp_ = 0L;
    timestampIsSet_ = false;
    unit_ = "";
    unitIsSet_ = false;
}

Datapoint::~Datapoint() = default;

void Datapoint::validate()
{
}

web::json::value Datapoint::toJson() const
{
    web::json::value val = web::json::value::object();

    if(maxIsSet_) {
        val[utility::conversions::to_string_t("max")] = ModelBase::toJson(max_);
    }
    if(minIsSet_) {
        val[utility::conversions::to_string_t("min")] = ModelBase::toJson(min_);
    }
    if(averageIsSet_) {
        val[utility::conversions::to_string_t("average")] = ModelBase::toJson(average_);
    }
    if(sumIsSet_) {
        val[utility::conversions::to_string_t("sum")] = ModelBase::toJson(sum_);
    }
    if(varianceIsSet_) {
        val[utility::conversions::to_string_t("variance")] = ModelBase::toJson(variance_);
    }
    if(timestampIsSet_) {
        val[utility::conversions::to_string_t("timestamp")] = ModelBase::toJson(timestamp_);
    }
    if(unitIsSet_) {
        val[utility::conversions::to_string_t("unit")] = ModelBase::toJson(unit_);
    }

    return val;
}
bool Datapoint::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("max"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMax(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("average"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("average"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAverage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sum"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sum"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("variance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("variance"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVariance(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnit(refVal);
        }
    }
    return ok;
}


double Datapoint::getMax() const
{
    return max_;
}

void Datapoint::setMax(double value)
{
    max_ = value;
    maxIsSet_ = true;
}

bool Datapoint::maxIsSet() const
{
    return maxIsSet_;
}

void Datapoint::unsetmax()
{
    maxIsSet_ = false;
}

double Datapoint::getMin() const
{
    return min_;
}

void Datapoint::setMin(double value)
{
    min_ = value;
    minIsSet_ = true;
}

bool Datapoint::minIsSet() const
{
    return minIsSet_;
}

void Datapoint::unsetmin()
{
    minIsSet_ = false;
}

double Datapoint::getAverage() const
{
    return average_;
}

void Datapoint::setAverage(double value)
{
    average_ = value;
    averageIsSet_ = true;
}

bool Datapoint::averageIsSet() const
{
    return averageIsSet_;
}

void Datapoint::unsetaverage()
{
    averageIsSet_ = false;
}

double Datapoint::getSum() const
{
    return sum_;
}

void Datapoint::setSum(double value)
{
    sum_ = value;
    sumIsSet_ = true;
}

bool Datapoint::sumIsSet() const
{
    return sumIsSet_;
}

void Datapoint::unsetsum()
{
    sumIsSet_ = false;
}

double Datapoint::getVariance() const
{
    return variance_;
}

void Datapoint::setVariance(double value)
{
    variance_ = value;
    varianceIsSet_ = true;
}

bool Datapoint::varianceIsSet() const
{
    return varianceIsSet_;
}

void Datapoint::unsetvariance()
{
    varianceIsSet_ = false;
}

int64_t Datapoint::getTimestamp() const
{
    return timestamp_;
}

void Datapoint::setTimestamp(int64_t value)
{
    timestamp_ = value;
    timestampIsSet_ = true;
}

bool Datapoint::timestampIsSet() const
{
    return timestampIsSet_;
}

void Datapoint::unsettimestamp()
{
    timestampIsSet_ = false;
}

std::string Datapoint::getUnit() const
{
    return unit_;
}

void Datapoint::setUnit(const std::string& value)
{
    unit_ = value;
    unitIsSet_ = true;
}

bool Datapoint::unitIsSet() const
{
    return unitIsSet_;
}

void Datapoint::unsetunit()
{
    unitIsSet_ = false;
}

}
}
}
}
}


