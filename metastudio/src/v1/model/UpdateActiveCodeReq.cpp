

#include "huaweicloud/metastudio/v1/model/UpdateActiveCodeReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateActiveCodeReq::UpdateActiveCodeReq()
{
    validPeriod_ = 0;
    validPeriodIsSet_ = false;
}

UpdateActiveCodeReq::~UpdateActiveCodeReq() = default;

void UpdateActiveCodeReq::validate()
{
}

web::json::value UpdateActiveCodeReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(validPeriodIsSet_) {
        val[utility::conversions::to_string_t("valid_period")] = ModelBase::toJson(validPeriod_);
    }

    return val;
}
bool UpdateActiveCodeReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("valid_period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("valid_period"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValidPeriod(refVal);
        }
    }
    return ok;
}


int32_t UpdateActiveCodeReq::getValidPeriod() const
{
    return validPeriod_;
}

void UpdateActiveCodeReq::setValidPeriod(int32_t value)
{
    validPeriod_ = value;
    validPeriodIsSet_ = true;
}

bool UpdateActiveCodeReq::validPeriodIsSet() const
{
    return validPeriodIsSet_;
}

void UpdateActiveCodeReq::unsetvalidPeriod()
{
    validPeriodIsSet_ = false;
}

}
}
}
}
}


