

#include "huaweicloud/ocr/v1/model/ExtractedData.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




ExtractedData::ExtractedData()
{
    mathInfoIsSet_ = false;
}

ExtractedData::~ExtractedData() = default;

void ExtractedData::validate()
{
}

web::json::value ExtractedData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(mathInfoIsSet_) {
        val[utility::conversions::to_string_t("math_info")] = ModelBase::toJson(mathInfo_);
    }

    return val;
}

bool ExtractedData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("math_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("math_info"));
        if(!fieldValue.is_null())
        {
            MathInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMathInfo(refVal);
        }
    }
    return ok;
}


MathInfo ExtractedData::getMathInfo() const
{
    return mathInfo_;
}

void ExtractedData::setMathInfo(const MathInfo& value)
{
    mathInfo_ = value;
    mathInfoIsSet_ = true;
}

bool ExtractedData::mathInfoIsSet() const
{
    return mathInfoIsSet_;
}

void ExtractedData::unsetmathInfo()
{
    mathInfoIsSet_ = false;
}

}
}
}
}
}


