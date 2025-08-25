

#include "huaweicloud/cce/v3/model/ChartValue_values.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ChartValue_values::ChartValue_values()
{
    basicIsSet_ = false;
}

ChartValue_values::~ChartValue_values() = default;

void ChartValue_values::validate()
{
}

web::json::value ChartValue_values::toJson() const
{
    web::json::value val = web::json::value::object();

    if(basicIsSet_) {
        val[utility::conversions::to_string_t("basic")] = ModelBase::toJson(basic_);
    }

    return val;
}
bool ChartValue_values::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("basic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("basic"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBasic(refVal);
        }
    }
    return ok;
}


Object ChartValue_values::getBasic() const
{
    return basic_;
}

void ChartValue_values::setBasic(const Object& value)
{
    basic_ = value;
    basicIsSet_ = true;
}

bool ChartValue_values::basicIsSet() const
{
    return basicIsSet_;
}

void ChartValue_values::unsetbasic()
{
    basicIsSet_ = false;
}

}
}
}
}
}


