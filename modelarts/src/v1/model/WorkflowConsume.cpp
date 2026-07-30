

#include "huaweicloud/modelarts/v1/model/WorkflowConsume.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




WorkflowConsume::WorkflowConsume()
{
    period_ = "";
    periodIsSet_ = false;
    value_ = 0L;
    valueIsSet_ = false;
}

WorkflowConsume::~WorkflowConsume() = default;

void WorkflowConsume::validate()
{
}

web::json::value WorkflowConsume::toJson() const
{
    web::json::value val = web::json::value::object();

    if(periodIsSet_) {
        val[utility::conversions::to_string_t("period")] = ModelBase::toJson(period_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool WorkflowConsume::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string WorkflowConsume::getPeriod() const
{
    return period_;
}

void WorkflowConsume::setPeriod(const std::string& value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool WorkflowConsume::periodIsSet() const
{
    return periodIsSet_;
}

void WorkflowConsume::unsetperiod()
{
    periodIsSet_ = false;
}

int64_t WorkflowConsume::getValue() const
{
    return value_;
}

void WorkflowConsume::setValue(int64_t value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool WorkflowConsume::valueIsSet() const
{
    return valueIsSet_;
}

void WorkflowConsume::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


