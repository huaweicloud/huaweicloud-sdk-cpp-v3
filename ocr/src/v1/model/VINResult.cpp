

#include "huaweicloud/ocr/v1/model/VINResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




VINResult::VINResult()
{
    vin_ = "";
    vinIsSet_ = false;
}

VINResult::~VINResult() = default;

void VINResult::validate()
{
}

web::json::value VINResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vinIsSet_) {
        val[utility::conversions::to_string_t("vin")] = ModelBase::toJson(vin_);
    }

    return val;
}

bool VINResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vin"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vin"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVin(refVal);
        }
    }
    return ok;
}

std::string VINResult::getVin() const
{
    return vin_;
}

void VINResult::setVin(const std::string& value)
{
    vin_ = value;
    vinIsSet_ = true;
}

bool VINResult::vinIsSet() const
{
    return vinIsSet_;
}

void VINResult::unsetvin()
{
    vinIsSet_ = false;
}

}
}
}
}
}


