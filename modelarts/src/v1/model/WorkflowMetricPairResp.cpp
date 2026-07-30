

#include "huaweicloud/modelarts/v1/model/WorkflowMetricPairResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




WorkflowMetricPairResp::WorkflowMetricPairResp()
{
    key_ = "";
    keyIsSet_ = false;
    valueIsSet_ = false;
}

WorkflowMetricPairResp::~WorkflowMetricPairResp() = default;

void WorkflowMetricPairResp::validate()
{
}

web::json::value WorkflowMetricPairResp::toJson() const
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
bool WorkflowMetricPairResp::fromJson(const web::json::value& val)
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


std::string WorkflowMetricPairResp::getKey() const
{
    return key_;
}

void WorkflowMetricPairResp::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool WorkflowMetricPairResp::keyIsSet() const
{
    return keyIsSet_;
}

void WorkflowMetricPairResp::unsetkey()
{
    keyIsSet_ = false;
}

Object WorkflowMetricPairResp::getValue() const
{
    return value_;
}

void WorkflowMetricPairResp::setValue(const Object& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool WorkflowMetricPairResp::valueIsSet() const
{
    return valueIsSet_;
}

void WorkflowMetricPairResp::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


