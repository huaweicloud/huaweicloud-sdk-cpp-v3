

#include "huaweicloud/live/v2/model/TranscodeSummary.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




TranscodeSummary::TranscodeSummary()
{
    type_ = "";
    typeIsSet_ = false;
    value_ = 0.0;
    valueIsSet_ = false;
}

TranscodeSummary::~TranscodeSummary() = default;

void TranscodeSummary::validate()
{
}

web::json::value TranscodeSummary::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}

bool TranscodeSummary::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string TranscodeSummary::getType() const
{
    return type_;
}

void TranscodeSummary::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool TranscodeSummary::typeIsSet() const
{
    return typeIsSet_;
}

void TranscodeSummary::unsettype()
{
    typeIsSet_ = false;
}

double TranscodeSummary::getValue() const
{
    return value_;
}

void TranscodeSummary::setValue(double value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TranscodeSummary::valueIsSet() const
{
    return valueIsSet_;
}

void TranscodeSummary::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


