

#include "huaweicloud/functiongraph/v2/model/FunctionMetric.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




FunctionMetric::FunctionMetric()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = 0;
    valueIsSet_ = false;
}

FunctionMetric::~FunctionMetric() = default;

void FunctionMetric::validate()
{
}

web::json::value FunctionMetric::toJson() const
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
bool FunctionMetric::fromJson(const web::json::value& val)
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
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string FunctionMetric::getKey() const
{
    return key_;
}

void FunctionMetric::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool FunctionMetric::keyIsSet() const
{
    return keyIsSet_;
}

void FunctionMetric::unsetkey()
{
    keyIsSet_ = false;
}

int32_t FunctionMetric::getValue() const
{
    return value_;
}

void FunctionMetric::setValue(int32_t value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool FunctionMetric::valueIsSet() const
{
    return valueIsSet_;
}

void FunctionMetric::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


