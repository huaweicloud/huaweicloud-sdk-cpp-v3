

#include "huaweicloud/gaussdb/v3/model/DiagnosisInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DiagnosisInfo::DiagnosisInfo()
{
    metricName_ = "";
    metricNameIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

DiagnosisInfo::~DiagnosisInfo() = default;

void DiagnosisInfo::validate()
{
}

web::json::value DiagnosisInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(metricNameIsSet_) {
        val[utility::conversions::to_string_t("metric_name")] = ModelBase::toJson(metricName_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool DiagnosisInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("metric_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metric_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetricName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}


std::string DiagnosisInfo::getMetricName() const
{
    return metricName_;
}

void DiagnosisInfo::setMetricName(const std::string& value)
{
    metricName_ = value;
    metricNameIsSet_ = true;
}

bool DiagnosisInfo::metricNameIsSet() const
{
    return metricNameIsSet_;
}

void DiagnosisInfo::unsetmetricName()
{
    metricNameIsSet_ = false;
}

int32_t DiagnosisInfo::getCount() const
{
    return count_;
}

void DiagnosisInfo::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool DiagnosisInfo::countIsSet() const
{
    return countIsSet_;
}

void DiagnosisInfo::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


