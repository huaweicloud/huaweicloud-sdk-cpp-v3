

#include "huaweicloud/modelarts/v1/model/WorkflowMetricPair.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




WorkflowMetricPair::WorkflowMetricPair()
{
    key_ = "";
    keyIsSet_ = false;
    valueIsSet_ = false;
}

WorkflowMetricPair::~WorkflowMetricPair() = default;

void WorkflowMetricPair::validate()
{
}

web::json::value WorkflowMetricPair::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool WorkflowMetricPair::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string WorkflowMetricPair::getKey() const
{
    return key_;
}

void WorkflowMetricPair::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool WorkflowMetricPair::keyIsSet() const
{
    return keyIsSet_;
}

void WorkflowMetricPair::unsetkey()
{
    keyIsSet_ = false;
}

Object WorkflowMetricPair::getValue() const
{
    return value_;
}

void WorkflowMetricPair::setValue(const Object& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool WorkflowMetricPair::valueIsSet() const
{
    return valueIsSet_;
}

void WorkflowMetricPair::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


