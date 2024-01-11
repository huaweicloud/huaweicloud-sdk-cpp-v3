

#include "huaweicloud/drs/v5/model/ModifyParameterReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ModifyParameterReq::ModifyParameterReq()
{
    valuesIsSet_ = false;
}

ModifyParameterReq::~ModifyParameterReq() = default;

void ModifyParameterReq::validate()
{
}

web::json::value ModifyParameterReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(valuesIsSet_) {
        val[utility::conversions::to_string_t("values")] = ModelBase::toJson(values_);
    }

    return val;
}
bool ModifyParameterReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("values"));
        if(!fieldValue.is_null())
        {
            std::vector<ParameterInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValues(refVal);
        }
    }
    return ok;
}


std::vector<ParameterInfo>& ModifyParameterReq::getValues()
{
    return values_;
}

void ModifyParameterReq::setValues(const std::vector<ParameterInfo>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool ModifyParameterReq::valuesIsSet() const
{
    return valuesIsSet_;
}

void ModifyParameterReq::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


