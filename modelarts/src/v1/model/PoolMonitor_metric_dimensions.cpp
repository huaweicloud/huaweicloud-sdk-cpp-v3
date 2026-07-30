

#include "huaweicloud/modelarts/v1/model/PoolMonitor_metric_dimensions.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolMonitor_metric_dimensions::PoolMonitor_metric_dimensions()
{
    name_ = "";
    nameIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

PoolMonitor_metric_dimensions::~PoolMonitor_metric_dimensions() = default;

void PoolMonitor_metric_dimensions::validate()
{
}

web::json::value PoolMonitor_metric_dimensions::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool PoolMonitor_metric_dimensions::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string PoolMonitor_metric_dimensions::getName() const
{
    return name_;
}

void PoolMonitor_metric_dimensions::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PoolMonitor_metric_dimensions::nameIsSet() const
{
    return nameIsSet_;
}

void PoolMonitor_metric_dimensions::unsetname()
{
    nameIsSet_ = false;
}

std::string PoolMonitor_metric_dimensions::getValue() const
{
    return value_;
}

void PoolMonitor_metric_dimensions::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool PoolMonitor_metric_dimensions::valueIsSet() const
{
    return valueIsSet_;
}

void PoolMonitor_metric_dimensions::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


