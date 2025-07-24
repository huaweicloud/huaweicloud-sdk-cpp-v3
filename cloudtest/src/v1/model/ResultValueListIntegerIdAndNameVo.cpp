

#include "huaweicloud/cloudtest/v1/model/ResultValueListIntegerIdAndNameVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ResultValueListIntegerIdAndNameVo::ResultValueListIntegerIdAndNameVo()
{
    valueIsSet_ = false;
}

ResultValueListIntegerIdAndNameVo::~ResultValueListIntegerIdAndNameVo() = default;

void ResultValueListIntegerIdAndNameVo::validate()
{
}

web::json::value ResultValueListIntegerIdAndNameVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool ResultValueListIntegerIdAndNameVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::vector<IntegerIdAndNameVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::vector<IntegerIdAndNameVo>& ResultValueListIntegerIdAndNameVo::getValue()
{
    return value_;
}

void ResultValueListIntegerIdAndNameVo::setValue(const std::vector<IntegerIdAndNameVo>& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ResultValueListIntegerIdAndNameVo::valueIsSet() const
{
    return valueIsSet_;
}

void ResultValueListIntegerIdAndNameVo::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


