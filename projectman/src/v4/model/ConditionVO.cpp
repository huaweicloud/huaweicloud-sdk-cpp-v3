

#include "huaweicloud/projectman/v4/model/ConditionVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ConditionVO::ConditionVO()
{
    operator_ = "";
    operatorIsSet_ = false;
    valuesIsSet_ = false;
}

ConditionVO::~ConditionVO() = default;

void ConditionVO::validate()
{
}

web::json::value ConditionVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(operatorIsSet_) {
        val[utility::conversions::to_string_t("operator")] = ModelBase::toJson(operator_);
    }
    if(valuesIsSet_) {
        val[utility::conversions::to_string_t("values")] = ModelBase::toJson(values_);
    }

    return val;
}
bool ConditionVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("operator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("values"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValues(refVal);
        }
    }
    return ok;
}


std::string ConditionVO::getOperator() const
{
    return operator_;
}

void ConditionVO::setOperator(const std::string& value)
{
    operator_ = value;
    operatorIsSet_ = true;
}

bool ConditionVO::operatorIsSet() const
{
    return operatorIsSet_;
}

void ConditionVO::unsetoperator()
{
    operatorIsSet_ = false;
}

std::vector<std::string>& ConditionVO::getValues()
{
    return values_;
}

void ConditionVO::setValues(const std::vector<std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool ConditionVO::valuesIsSet() const
{
    return valuesIsSet_;
}

void ConditionVO::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


