

#include "huaweicloud/functiongraph/v2/model/MetricConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




MetricConfig::MetricConfig()
{
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    threshold_ = 0;
    thresholdIsSet_ = false;
    min_ = 0;
    minIsSet_ = false;
}

MetricConfig::~MetricConfig() = default;

void MetricConfig::validate()
{
}

web::json::value MetricConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(thresholdIsSet_) {
        val[utility::conversions::to_string_t("threshold")] = ModelBase::toJson(threshold_);
    }
    if(minIsSet_) {
        val[utility::conversions::to_string_t("min")] = ModelBase::toJson(min_);
    }

    return val;
}
bool MetricConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("threshold"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThreshold(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMin(refVal);
        }
    }
    return ok;
}


std::string MetricConfig::getName() const
{
    return name_;
}

void MetricConfig::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool MetricConfig::nameIsSet() const
{
    return nameIsSet_;
}

void MetricConfig::unsetname()
{
    nameIsSet_ = false;
}

std::string MetricConfig::getType() const
{
    return type_;
}

void MetricConfig::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool MetricConfig::typeIsSet() const
{
    return typeIsSet_;
}

void MetricConfig::unsettype()
{
    typeIsSet_ = false;
}

int32_t MetricConfig::getThreshold() const
{
    return threshold_;
}

void MetricConfig::setThreshold(int32_t value)
{
    threshold_ = value;
    thresholdIsSet_ = true;
}

bool MetricConfig::thresholdIsSet() const
{
    return thresholdIsSet_;
}

void MetricConfig::unsetthreshold()
{
    thresholdIsSet_ = false;
}

int32_t MetricConfig::getMin() const
{
    return min_;
}

void MetricConfig::setMin(int32_t value)
{
    min_ = value;
    minIsSet_ = true;
}

bool MetricConfig::minIsSet() const
{
    return minIsSet_;
}

void MetricConfig::unsetmin()
{
    minIsSet_ = false;
}

}
}
}
}
}


